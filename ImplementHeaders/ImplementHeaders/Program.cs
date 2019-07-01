﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

namespace ImplementHeaders
{
    class Program
    {
        private static bool CountOnly = false;
        private static int FunctionCount;
        static void Main(string[] args)
        {
            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();
            if (args.Length >= 3)
                CountOnly = bool.Parse(args[2]);
            Implement(args[0], args[1]);
            stopwatch.Stop();
            Console.WriteLine($"Done. Generated {FunctionCount} functions in {stopwatch.ElapsedMilliseconds} ms.");
            Console.ReadKey();
        }

        private static void Implement(string path, string saveLocation)
        {
            if(File.Exists(path))
                ImplementFile(path, saveLocation);
            else if(Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                {
                    string newSaveLocation = saveLocation + Path.DirectorySeparatorChar + new DirectoryInfo(dir).Name;
                    Directory.CreateDirectory(newSaveLocation);
                    Implement(dir, newSaveLocation);
                }
                foreach (string file in Directory.EnumerateFiles(path))
                    ImplementFile(file, saveLocation);
            }
        }

        private static void ImplementFile(string filePath, string saveDir)
        {
            string fileContents;
            using (StreamReader reader = new StreamReader(filePath))
                fileContents = reader.ReadToEnd();
            List<string> implementations = new List<string>();
            foreach(Match match in Regex.Matches(fileContents, @"(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?.*?)?\s*{((?:.|\n)*?)^};", RegexOptions.Multiline)) // Match class definition
            {
                string className = match.Groups[3].Value;
                string classContents = match.Groups[5].Value;
                if (!IsValidClassName(className))
                    continue;
                classContents = Regex.Replace(classContents, @"\/\*(?:.|\s)*?\*\/", ""); // fix for comments containing brackets being matched as functions
                classContents = Regex.Replace(classContents, @"\/\/.*", ""); // fix for comments causing some error
                classContents = Regex.Replace(classContents, @"\s*GENERATED.*?\(\)", ""); // fix for GENERATED... macros being matched
                classContents = Regex.Replace(classContents, @"\s*UPROPERTY ?\( ?(?:.|\s)*?;", ""); // fix for UPROPERTY... macros being matched
                classContents = Regex.Replace(classContents, @"\s*DEPRECATED ?\( ?(?:.|\s)*?\)", ""); // fix for UPROPERTY... macros being matched
                // Implement with #if ... and delete it (fixes issues and requires less manual changes in the end)
                foreach (Match ifMacro in Regex.Matches(classContents, @"#if (.*?)\n((?:.|\n)*?)\n#endif(.*)"))
                {
                    implementations.Add($"#if {ifMacro.Groups[1].Value.Trim()}");
                    implementations.AddRange(ImplementFunctions(ifMacro.Groups[2].Value, className));
                    implementations.Add($"#endif {ifMacro.Groups[3].Value.Trim()}");
                }
                classContents = Regex.Replace(classContents, @"#if (.*?)\n((?:.|\n)*?)\n#endif(.*)", "");
                implementations.AddRange(ImplementFunctions(classContents, className));
            }
            using (StreamWriter writer = new StreamWriter($"{saveDir}{Path.DirectorySeparatorChar}{Path.GetFileName(filePath).Replace(".h", ".cpp")}"))
            {
                writer.WriteLine($"// This file has been automatically generated by the Unreal Header Implementation tool");
                writer.WriteLine($"");
                writer.WriteLine($"#include \"{Path.GetFileName(filePath)}\"");
                writer.WriteLine($"");
                foreach (string func in implementations)
                    writer.WriteLine(func);
            }
        }

        private static List<string> ImplementFunctions(string content, string className)
        {
            List<string> implementations = new List<string>();
            // Match function definition (including UFUNCTIONs), nothing to see here ... just walk away ... probably the reason of many missing implementations...
            foreach (Match function in Regex.Matches(content, @"^\s*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?(virtual ?)?(static ?)?(const ?)?(class ?)?(explicit ?)?([^=()\n{}]*? )?\n*((?:[^=<>()\n{}]|operator.+)*?)(\([^{}]*?\))(\s*const)?(\s*override)?(.*);", RegexOptions.Multiline))
            {
                // string comment = function.Groups[1].Value; // removed because regex took too long
                string ufunction = function.Groups[1].Value;
                string template = function.Groups[2].Value;
                string isVirtual = function.Groups[3].Value;
                string isStatic = function.Groups[4].Value;
                string isReturnConst = function.Groups[5].Value;
                string isClass = function.Groups[6].Value;
                string isExplicit = function.Groups[7].Value;
                string returnType = function.Groups[8].Value;
                string functionName = function.Groups[9].Value;
                string parameters = function.Groups[10].Value;
                string isConst = function.Groups[11].Value;
                string isOverride = function.Groups[12].Value;
                string extras = function.Groups[13].Value;

                if (extras.Contains("PURE_VIRTUAL")) // ignore pure virtual macro
                    continue;

                if (!IsValidFunctionName(functionName))
                    continue;
                // regex takes too long and it is the only other way to fix UPARAM's closing bracket being matched as parameter closing bracket...
                int bracketCount = parameters.Count(ch => ch == '(') - parameters.Count(ch => ch == ')');
                if (bracketCount > 0)
                {
                    parameters += isConst + isOverride;
                    isConst = "";
                    isOverride = "";
                    while (bracketCount > 0)
                    {
                        parameters += extras[0];
                        if (extras[0] == '(')
                            bracketCount++;
                        if (extras[0] == ')')
                            bracketCount--;
                        extras = extras.Substring(1);
                    }
                    if (extras.Contains("const"))
                        isConst = " const";
                    if (extras.Contains("override"))
                        isConst = " override";
                }


                if (extras.Contains('{') || extras.Contains("delete"))
                    continue; // already implemented in header and it matched "... { return ...; }"

                parameters = Regex.Replace(parameters, @"\/\*.*?\*\/", ""); // fix for commented defaults
                template = Regex.Replace(template, @"\/\*.*?\*\/", ""); // fix for commented defaults ?

                if (ufunction.Contains("BlueprintImplementableEvent"))
                    Console.WriteLine($"skipping {className}");
                else if (!string.IsNullOrWhiteSpace(ufunction))
                {
                    if (ufunction.Contains("BlueprintNativeEvent") || ufunction.Contains("Server") || ufunction.Contains("Client") || ufunction.Contains("NetMulticast"))
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName.Trim() + "_Implementation", parameters, isConst, template, isStatic);
                    else if (ufunction.Contains("BlueprintPure") || ufunction.Contains("BlueprintCallable") || ufunction.ToLower().Contains("exec") || Regex.Replace(Regex.Replace(Regex.Replace(ufunction.Trim(), @"(?:([^\w\d]) (.)|(.) ([^\w\d]))", "$1$2$3$4"), @"(?:([^\w\d]) (.)|(.) ([^\w\d]))", "$1$2$3$4"), @",? *(Category|meta) *= *.*?(,|\))", "") == "UFUNCTION()")
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, template, isStatic);
                    if (ufunction.Contains("WithValidation"))
                        ImplementFunction(implementations, className, isClass, isReturnConst, "bool ", functionName.Trim() + "_Validate", parameters, isConst, template, isStatic);
                }
                else
                    ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, template, isStatic);
            }
            return implementations;
        }

        private static void ImplementFunction(List<string> implementations, string className, string isClass, string isReturnConst, string returnType, string functionName, string parameters, string isConst, string template, string isStatic)
        {
            if (className.Contains("Interface")) // https://answers.unrealengine.com/questions/832889/blueprintnativeevent-function-already-has-a-body.html
                return;

            string withoutDestructorThingy = functionName.Trim().Replace("~", "");

            if (IsValidReturnType(returnType) || (withoutDestructorThingy == className && string.IsNullOrWhiteSpace(returnType)))
            {
                if (!string.IsNullOrWhiteSpace(template))
                    template = FixDefaults(template.Trim().TrimEnd('>')) + '>' + Environment.NewLine;
                string result = $"{template}{isReturnConst}{returnType}{className}::{functionName}{Regex.Replace(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?<!<)\b(class|struct)\b", "")}){isConst}";
                if (parameters.Contains("objectInitializer") && withoutDestructorThingy == className) // if it is constructor of derived class
                    result += " : Super(objectInitializer) ";
                else if (parameters.Contains("ObjectInitializer") && withoutDestructorThingy == className) // if it is constructor of derived class
                    result += " : Super(ObjectInitializer) ";
                if (parameters.Replace(" ", "").Contains("FArchive&inInnerArchive")) 
                     result += " : FArchiveProxy(inInnerArchive) ";
                if (parameters.Replace(" ", "").Contains("UCharacterMovementComponent"))
                    result += " : FNetworkPredictionData_Client_Character(clientMovement) ";
                if (functionName.Replace(" ", "").Contains("FObjectReader"))
                    result += " : FObjectReader(Obj, InBytes) ";
                if (functionName.Replace(" ", "").Contains("FObjectWriter"))
                    result += " : FObjectWriter(Obj, InBytes) ";
                result += $"{{ ";
                if (returnType.Contains("void") || string.IsNullOrWhiteSpace(returnType))
                    result += $"}}";
                else
                {
                    result += $"return ";
                    if (returnType.Trim().EndsWith("&"))
                        if (returnType.Trim().TrimEnd('&') == className)
                            result += $"*(this)";
                        else
                            result += $"*(new {returnType.Trim().TrimEnd('&')})"; // Brabb3l's life-hacks
                    else if (returnType.Trim().EndsWith("*"))
                        result += $"nullptr";
                    else
                        result += $"{GetCustomReturn(returnType)}";
                    result += $"; }}";
                }
                if (!implementations.Contains(result))
                    implementations.Add(result);
                if(!CountOnly)
                    Console.WriteLine($"Generated {className}::{functionName}");
                FunctionCount++;
            }
        }

        private static bool IsValidClassName(string className)
        {
            return Regex.Match(className, @"^[\w\d_]+$").Success;
        }

        private static bool IsValidFunctionName(string functionName)
        {
            return Regex.Match(functionName.Trim(), @"^([\w\d_~]+|operator.+)$").Success && !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(functionName.Trim()) && !IsAllCaps(functionName.Trim()); // Don't match macros
        }

        private static string GetCustomReturn(string returnType)
        {
            returnType = Regex.Replace(returnType.Trim(), @"(?:([^\w\d]) ([\w\d])|([\w\d]) ([^\w\d]))", "$1$2$3$4"); // trim spaces between < and character, ( and character, etc.
            switch (returnType)
            {
                case "FReply":
                    return "FReply::Unhandled()";
                case "TSharedRef<SWidget>":
                    return "Super::RebuildWidget()";
                default:
                    return $"{returnType}()";
            }
        }

        private static string FixDefaults(string parameters)
        {
            string ret = string.Join(",", parameters.Split(',').Select(param => param.Trim().Contains("UPARAM") ? param : param.Split('=')[0]));
            return ret;
        }

        private static bool IsAllCaps(string str)
        {
            return !Regex.Match(str, "[a-z]").Success && !string.IsNullOrWhiteSpace(str);
        }

        private static bool IsValidReturnType(string returnType)
        {
            return !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(returnType.Trim()) && !IsAllCaps(returnType) && !string.IsNullOrWhiteSpace(returnType) && !returnType.Contains("FORCEINLINE"); // FORCEINLINE are already implemented in header (?)
        }
    }
}
