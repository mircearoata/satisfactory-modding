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
        private static bool CountOnly;
        private static int FunctionCount;

        private static readonly string[] NeedsSuper = new string[] { "Serialize", "OnRegister", "OnUnregister", "PostLoad", "BeginDestroy", "FinishDestroy", "PostInitProperties", "PostInitializeComponents", "CreateRenderState_Concurrent", "PostEditChangeProperty", "PostActorCreated", "PreInitializeComponents", "NotifyBeginPlay", "ReleaseSlateResources", "RemoveFromParent", "SetActiveWidgetIndex", "SetActiveWidget" };
        // Only adds super if the class name starts with that character
        private static readonly Dictionary<string, string> ConditionalSuper = new Dictionary<string, string>()
        {
            { "CheckForErrors", "A" }
        };

        private static readonly Dictionary<string, string> CustomSuper = new Dictionary<string, string>()
        {
            { "AFGCharacterPlayer", "Super(ObjectInitializer.SetDefaultSubobjectClass<UFGCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))" },
            { "FLargeDataTransfer", "mNumChunks(0)" }
        };

        private static readonly Dictionary<string, string> NestedStructs = new Dictionary<string, string>()
        {
            { "ItemHolderHistory", "FConveyorBeltItems::ItemHolderHistory" },
            { "FGenerateIconContext", "UFGItemDescriptor::FGenerateIconContext" },
            { "Type", "FSaveCustomVersion::Type" },
            { "FFrequencyGrid2D_Cell", "UFGReplicationGraphNode_ConveyorSpatialFrequency::FFrequencyGrid2D_Cell" },
            { "FSettings", "UFGReplicationGraphNode_ConveyorSpatialFrequency::FSettings" },
            { "FRailroadHitResult", "AFGRailroadSubsystem::FRailroadHitResult" },
            { "Plan", "AFGWheeledVehicleAIController::Plan" },
            { "FSignHandle", "UFGSignPixelInstanceManager::FSignHandle" },
        };

        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                args = new string[] { "", "", "", "" };
                Console.Write("Headers dir: ");
                args[0] = Console.ReadLine();
                Console.Write("Cpp dir: ");
                args[1] = Console.ReadLine();
                Console.Write("Custom implementations dir: ");
                args[2] = Console.ReadLine();
                Console.Write("Show only count? (y/N): ");
                args[3] = Console.ReadLine();
                if (args[3].ToLower() == "y" || args[2].ToLower() == "yes")
                    args[3] = "true";
                else
                    args[3] = "false";
            }
            if (args.Length >= 4)
                CountOnly = bool.Parse(args[3]);
            Directory.Delete(args[1], true); // remove the old implementations
            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();
            Implement(args[0], args[0], args[1], args[2]);
            stopwatch.Stop();
            Console.WriteLine($"Done. Generated {FunctionCount} functions in {stopwatch.ElapsedMilliseconds} ms.");
        }

        private static void Implement(string path, string rootDir, string saveLocation, string customImplementationsPath)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".h"))
                    ImplementFile(path, rootDir, saveLocation, customImplementationsPath);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                {
                    string newSaveLocation = saveLocation + Path.DirectorySeparatorChar + new DirectoryInfo(dir).Name;
                    string newCustomImplementationsPath = customImplementationsPath + Path.DirectorySeparatorChar + new DirectoryInfo(dir).Name;
                    Directory.CreateDirectory(newSaveLocation);
                    Implement(dir, rootDir, newSaveLocation, newCustomImplementationsPath);
                }
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".h"))
                        ImplementFile(file, rootDir, saveLocation, customImplementationsPath);
            }
        }

        private static HashSet<string> InlineImplementedFunctions = new HashSet<string>();

        private static void ImplementFile(string filePath, string rootDir, string saveDir, string customImplementationsPath)
        {
            string fileContents;
            using (StreamReader reader = new StreamReader(filePath))
                fileContents = reader.ReadToEnd();

            string customImplementations = "";
            string customImplementationsFilePath =
                Path.Combine(customImplementationsPath, Path.GetFileNameWithoutExtension(filePath) + ".cpp");
            if (File.Exists(customImplementationsFilePath))
            {
                using (StreamReader reader = new StreamReader(customImplementationsFilePath))
                    customImplementations = reader.ReadToEnd().Trim();
            }
            
            List<string> implementations = new List<string>();
            // TODO: Maybe clear InlineImplementedFunctions, but it's not like they conflict
            foreach (Match match in Regex.Matches(fileContents, @"^(?:FORCEINLINE|inline)\s+(.+)\((.*\s*)\){?\s*$", RegexOptions.Multiline))
            {
                string typeAndName = match.Groups[1].Value.Trim();
                string arguments = match.Groups[2].Value.Trim();
                InlineImplementedFunctions.Add($"{typeAndName}({arguments})");
            }
            foreach (Match match in Regex.Matches(fileContents, @"^extern\s+TAutoConsoleVariable\s*<\s*(.+?)\s*>\s*(.+?);", RegexOptions.Multiline))
            {
                string type = match.Groups[1].Value;
                string name = match.Groups[2].Value;
                string defaultValue;
                switch(type)
                {
                    case "int32":
                    case "float":
                        defaultValue = "0";
                        break;
                    case "FString":
                        defaultValue = "TEXT(\"\")";
                        break;
                    default:
                        throw new Exception($"Unknown TAutoConsoleVariable type {type}");
                }
                implementations.Add($"TAutoConsoleVariable<{type}> {name}(TEXT(\"{name}\"), {defaultValue}, TEXT(\"\"));");
            }
            foreach (Match match in Regex.Matches(fileContents, @"^([ \t]*)(template\s*<.+?>\s+)?(class|struct) ([^ ]*? )??([^ ]*?)(?:\s*final\s*)?( ?: ?[^{]*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match class/struct definition
            {
                string template = match.Groups[2].Value;
                string FGAPI = match.Groups[4].Value;
                string className = match.Groups[5].Value;
                string classContents = match.Groups[7].Value;
                if (!IsValidClassName(className) || !string.IsNullOrWhiteSpace(template))
                    continue;
                implementations.AddRange(ImplementClass(className, classContents, !string.IsNullOrWhiteSpace(FGAPI), customImplementations));
            }
            using (StreamWriter writer = new StreamWriter($"{saveDir}{Path.DirectorySeparatorChar}{Path.GetFileName(filePath).Replace(".h", ".cpp")}"))
            {
                writer.WriteLine($"// This file has been automatically generated by the Unreal Header Implementation tool");
                writer.WriteLine($"");
                writer.WriteLine($"#include \"{filePath.Replace(rootDir, "").TrimStart(new char[]{'/', '\\'}).Replace("\\", "/")}\"");

                if (!string.IsNullOrWhiteSpace(customImplementations))
                {
                    if (!customImplementations.StartsWith("#include"))
                        writer.WriteLine("");
                    writer.WriteLine(customImplementations);

                }
                
                writer.WriteLine($"");  // writer.WriteLine($"// Code below has been automatically generated by the Unreal Header Implementation tool");
                if (filePath.Contains("FGCheatBoardWidget.h"))
                    writer.WriteLine("#if WITH_CHEATS");
                foreach (string func in implementations)
                    writer.WriteLine(func);
                if (filePath.Contains("FGCheatBoardWidget.h"))
                    writer.WriteLine("#endif");
                if (filePath.Contains("FactoryGameModule.h"))
                    writer.WriteLine("IMPLEMENT_PRIMARY_GAME_MODULE(FFactoryGameModule, FactoryGame, \"FactoryGame\");");
            }
        }

        private static List<string> ImplementClass(string className, string classContents, bool FGAPI, string customImplementations)
        {
            List<string> implementations = new List<string>();
            bool needsFObjectInitializer = Regex.IsMatch(classContents, @"GENERATED_U(CLASS|INTERFACE)_BODY");
            bool needsGetLifetimeReplicatedProps = Regex.IsMatch(classContents, @"UPROPERTY\(.*(?<!Not)Replicated.*\)");
            classContents = Regex.Replace(classContents, @"\/+ *\*(?:.|\s)*?\*\/", ""); // fix for comments containing brackets being matched as functions
            classContents = Regex.Replace(classContents, @"\/{2,}.*", ""); // fix for comments causing some error
            classContents = Regex.Replace(classContents, @"\s*GENERATED.*?\(\)", ""); // fix for GENERATED... macros being matched
            classContents = Regex.Replace(classContents, @"\s*UPROPERTY ?\( ?(?:.|\s)*?;", ""); // fix for UPROPERTY... macros being matched
            classContents = Regex.Replace(classContents, @"\s*UE_DEPRECATED ?\( ?(?:.|\s)*?\)", ""); // fix for UE_DEPRECATED... macros being matched
            classContents = Regex.Replace(classContents, @"^\s*DEPRECATED ?\( ?(?:.|\s)*?\)", "", RegexOptions.Multiline); // fix for DEPRECATED... macros being matched

            // Implement with #if ... and delete it (fixes issues and requires less manual changes in the end)
            foreach (Match ifMacro in Regex.Matches(classContents, @"\s*#if(def)?\s+(.*?)\n(?:((?:.|\n)*?)\n)??\s*#endif(.*)"))
            {
                string ifContents = ifMacro.Groups[3].Value;
                implementations.Add($"#if{ifMacro.Groups[1].Value} {ifMacro.Groups[2].Value.Trim()}");
                foreach (Match match in Regex.Matches(ifContents, @"^([ \t]*)(template\s*<.+?>\s+)?(class|struct) ([^ ]*? )??([^ ]*?)(?:\s*final\s*)?( ?: ?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match inner class/struct definition
                {
                    string template = match.Groups[2].Value;
                    string innerClassName = match.Groups[5].Value;
                    string innerClassContents = match.Groups[7].Value;
                    if (!IsValidClassName(innerClassName) || !string.IsNullOrWhiteSpace(template))
                        continue;
                    implementations.AddRange(ImplementClass(className + "::" + innerClassName, innerClassContents, FGAPI, customImplementations));
                    ifContents = ifContents.Replace(match.Value, "");
                }
                implementations.AddRange(ImplementFunctions(ifContents, className, customImplementations));
                implementations.AddRange(ImplementStaticVars(ifContents, className, customImplementations));
                implementations.Add($"#endif {ifMacro.Groups[4].Value.Trim()}");
            }
            classContents = Regex.Replace(classContents, @"\s*#if(def)?\s+(.*?)\n(?:((?:.|\n)*?)\n)??\s*#endif(.*)", "");
            foreach (Match match in Regex.Matches(classContents, @"^([\s\t]*)(template\s*<.+?>\s+)?(class|struct)\s([^\s]*?\s)??([^\s]*?)(?:\s*final\s*)?(\s?:\s?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match inner class/struct definition
            {
                string template = match.Groups[2].Value;
                string innerClassName = match.Groups[5].Value;
                string innerClassContents = match.Groups[7].Value;
                if (!IsValidClassName(innerClassName) || !string.IsNullOrWhiteSpace(template))
                    continue;
                implementations.AddRange(ImplementClass(className + "::" + innerClassName, innerClassContents, FGAPI, customImplementations));
                classContents = classContents.Replace(match.Value, "");
            }
            implementations.AddRange(ImplementFunctions(classContents, className, customImplementations));
            implementations.AddRange(ImplementStaticVars(classContents, className, customImplementations));

            if (needsFObjectInitializer && !implementations.Any((impl) => impl.Replace(" ", "").Contains($"{className}::{className}(constFObjectInitializer")) && !InlineImplementedFunctions.Any((impl) => impl.Replace(" ", "").Contains($"{className}::{className}(classFObjectInitializer")))
                implementations.Add($"{className}::{className}(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {{}}");

            if (needsGetLifetimeReplicatedProps && !implementations.Any((impl) => impl.Contains($"void {className}::GetLifetimeReplicatedProps")))
                implementations.Add($"void {className}::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const {{ Super::GetLifetimeReplicatedProps(OutLifetimeProps); }}");

            return implementations;
        }

        private static List<string> ImplementStaticVars(string content, string className, string customImplementations)
        {
            List<string> implementations = new List<string>();
            foreach (Match function in Regex.Matches(content, @"(const\s)?static\s(const\s)?\s*([\w\d_]*?)\s+([\w\d_]*?);", RegexOptions.Multiline))
            {
                string isConst = function.Groups[1].Value + function.Groups[2].Value;
                string type = FixReturnType(function.Groups[3].Value).Trim();
                string name = function.Groups[4].Value;
                if (Regex.IsMatch(customImplementations, $@"^(?:(?:const\s+)?\w+\s*(?:<\s*.*?\s*>)?[&*]?\s+)?{className.Trim()}::{name.Trim()}", RegexOptions.Multiline))
                {
                    if (CountOnly)
                        Console.WriteLine($"Skipping {className}::{name} (custom implementation)");
                    continue;
                }
                if (type.Contains("FAutoConsoleVariableSink")) // for this classes there is no constructor with no params, but NULL works
                    implementations.Add($"{isConst}{type} {className}::{name} = NULL;");
                else // but NULL doesn't work for everything
                    implementations.Add($"{isConst}{type} {className}::{name} = {type}();");
            }
            return implementations;
        }

        private static List<string> ImplementFunctions(string content, string className, string customImplementations)
        {
            // Remove access modifiers
            content = Regex.Replace(content, @"(\r?\n|^)\s*public:", "\r\n", RegexOptions.Multiline);
            content = Regex.Replace(content, @"(\r?\n|^)\s*private:", "\r\n");
            content = Regex.Replace(content, @"(\r?\n|^)\s*protected:", "\r\n");

            // Remove event/delegate declarations, which are matched as functions
            content = Regex.Replace(content, @"^\s*DECLARE_.*\(.*\)\r?\n", "\r\n", RegexOptions.Multiline);

            foreach (Match inlineFunction in Regex.Matches(content, @"^\s*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?(?:FORCEINLINE|inline\s+)?(virtual\s+)?(static\s+)?(const\s+)?(class\s+)?(explicit\s+)?(?:UPARAM\(.*?\)\s?)?([^=()\n{};]*?\s)?\n*((?:[^=<>()\n{};]|operator.+)*?)(\([^{}\[;]*?\))(\s*noexcept(?:\(.+\))?)?(\s*const)?(\s*override)?\s*{", RegexOptions.Multiline))
            {
                string ufunction = inlineFunction.Groups[1].Value;
                string template = inlineFunction.Groups[2].Value;
                string isVirtual = inlineFunction.Groups[3].Value;
                string isStatic = inlineFunction.Groups[4].Value;
                string isReturnConst = inlineFunction.Groups[5].Value;
                string isClass = inlineFunction.Groups[6].Value;
                string isExplicit = inlineFunction.Groups[7].Value;
                string returnType = inlineFunction.Groups[8].Value;
                string functionName = inlineFunction.Groups[9].Value;
                string parameters = inlineFunction.Groups[10].Value;
                string isNoexcept = inlineFunction.Groups[11].Value;
                string isConst = inlineFunction.Groups[12].Value;
                string isOverride = inlineFunction.Groups[13].Value;
                string extras = inlineFunction.Groups[14].Value;

                string completeFunctionDecl = $"{template}{isReturnConst}{FixReturnType(returnType)}{className}::{functionName}({Regex.Replace(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?<!<)\b(class|struct)\b", "")}){isNoexcept}{isConst}";

                InlineImplementedFunctions.Add(completeFunctionDecl);
            }

            List<string> implementations = new List<string>();
            // Match function definition (including UFUNCTIONs), nothing to see here ... just walk away ... probably the reason for many missing implementations...
            foreach (Match function in Regex.Matches(content, @"^\s*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?(virtual\s+)?(static\s+)?(const\s+)?(class\s+)?(explicit\s+)?(?:UPARAM\(.*?\)\s?)?([^=()\n{};]*?\s)?\n*((?:[^=<>()\n{};]|operator.+)*?)(\([^{}\[;]*?\))(\s*noexcept(?:\(.+\))?)?(\s*const)?(\s*override)?([^<>\n]*);", RegexOptions.Multiline))
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
                string isNoexcept = function.Groups[11].Value;
                string isConst = function.Groups[12].Value;
                string isOverride = function.Groups[13].Value;
                string extras = function.Groups[14].Value;

                if (extras.Contains("PURE_VIRTUAL")) // ignore pure virtual macro
                    continue;

                if (!IsValidFunctionName(functionName) && !(functionName.Trim().Replace("~", "") == className && string.IsNullOrWhiteSpace(returnType)))
                    continue;

                if (!string.IsNullOrWhiteSpace(template)) // All of them end up commented
                    continue;
                // regex takes too long and it is the only other way to fix UPARAM's closing bracket being matched as parameter closing bracket...
                // also happens on non primitive default parameters 
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

                parameters = Regex.Replace(parameters, @"meta\s*=\s*\(.*?\)", ""); // also meta=() brackets
                parameters = Regex.Replace(parameters, @"UPARAM\s*\(.*?\)", "");

                if (extras.Contains('{') || extras.Contains("delete") || extras.Contains("="))
                    continue; // already implemented in header and it matched "... { return ...; }"

                parameters = Regex.Replace(parameters, @"\/\*.*?\*\/", ""); // fix for commented defaults
                template = Regex.Replace(template, @"\/\*.*?\*\/", ""); // fix for commented defaults ?

                if (!string.IsNullOrWhiteSpace(ufunction))
                {
                    if (Regex.IsMatch(ufunction, @"\WBlueprintImplementableEvent\W"))
                    {
                        if (!CountOnly)
                            Console.WriteLine($"Skipped {className}::{functionName} (BlueprintImplementableEvent)");
                        continue;
                    }
                    if (Regex.IsMatch(ufunction, @"\WBlueprintNativeEvent\W", RegexOptions.IgnoreCase) || Regex.IsMatch(ufunction, @"(?<!""|=|\|\s*)\W(?<!""|=|\|\s*)Server\W", RegexOptions.IgnoreCase) || Regex.IsMatch(ufunction, @"(?<!""|=|\|\s*)\W(?<!""|=|\|\s*)Client\W", RegexOptions.IgnoreCase) || Regex.IsMatch(ufunction, @"\WNetMulticast\W", RegexOptions.IgnoreCase))
                    {
                        if (Regex.IsMatch(ufunction, @"\WBlueprintNativeEvent\W") && className[0] == 'I')
                        {
                            if (!CountOnly)
                                Console.WriteLine($"Skipped {className}::{functionName} (BlueprintNativeEvent in Interface)"); // https://answers.unrealengine.com/questions/832889/blueprintnativeevent-function-already-has-a-body.html
                            continue;
                        }
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName.Trim() + "_Implementation", parameters, isConst, isNoexcept, template, isStatic, customImplementations);
                    }
                    else if (Regex.IsMatch(ufunction, @"\WBlueprintPure\W") || Regex.IsMatch(ufunction, @"\WBlueprintCallable\W") || Regex.IsMatch(ufunction, @"\WBlueprintGetter\W") || Regex.IsMatch(ufunction, @"\WExec\W", RegexOptions.IgnoreCase) || Regex.IsMatch(ufunction, @"\WCallInEditor\W", RegexOptions.IgnoreCase) || Regex.Replace(TrimUselessSpaces(ufunction), @"( ?(?:Category ?= ?"".*?""|meta ?= ?"".*""|meta ?= ?\(.*?\))(?:,| )?)", "") == "UFUNCTION()")
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, isNoexcept, template, isStatic, customImplementations);
                    if (Regex.IsMatch(ufunction, @"\WWithValidation\W"))
                        ImplementFunction(implementations, className, isClass, isReturnConst, "bool ", functionName.Trim() + "_Validate", parameters, isConst, isNoexcept, template, isStatic, customImplementations);
                }
                else
                    ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, isNoexcept, template, isStatic, customImplementations);
            }
            return implementations;
        }

        private static void ImplementFunction(List<string> implementations, string className, string isClass, string isReturnConst, string returnType, string functionName, string parameters, string isConst, string isNoExcept, string template, string isStatic, string customImplementations)
        {
            if (Regex.IsMatch(customImplementations, $@"^(?:(?:const\s+)?\w+\s*(?:<\s*.*?\s*>)?[&*]?\s+)?{className.Trim()}::{functionName.Trim()}\W", RegexOptions.Multiline))
            {
                if (!CountOnly)
                    Console.WriteLine($"Skipping {className}::{functionName} (custom implementation)");
                return;
            }

            string completeFunctionDecl = $"{template}{isReturnConst}{FixReturnType(returnType)}{className}::{functionName}({Regex.Replace(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?<!<)\b(class|struct)\b", "")}){isNoExcept}{isConst}";
            if (InlineImplementedFunctions.Any((impl) => Regex.IsMatch(impl, $@"(?:\b|\W|^){Regex.Escape(completeFunctionDecl)}(?:\b|\W|$)")))
            {
                if (!CountOnly)
                    Console.WriteLine($"Skipped {className}::{functionName} (Inline implemented)");
                return;
            }

            string withoutDestructorThingy = functionName.Trim().Replace("~", "");
            string withoutOuterClass = className.Substring(className.LastIndexOf(":") + 1);
            if (IsValidReturnType(returnType) || (withoutDestructorThingy == withoutOuterClass && string.IsNullOrWhiteSpace(returnType)))
            {
                if (!string.IsNullOrWhiteSpace(template))
                    template = FixDefaults(template.Trim().TrimEnd('>')) + '>' + Environment.NewLine;
                string result = completeFunctionDecl;
                if (CustomSuper.ContainsKey(functionName.Trim()))
                {
                    result += $" : {CustomSuper[functionName.Trim()]} ";
                }
                else
                {
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
                    if (functionName.Replace(" ", "").Contains("FBlueprintObjectReader"))
                        result += " : FObjectReader(Obj, InBytes) ";
                    if (functionName.Replace(" ", "").Contains("FBlueprintObjectWriter"))
                        result += " : FObjectWriter(Obj, InBytes) ";
                }

                result += $"{{ "; // TODO: Add space for nice formatting
                if (returnType.Contains("void") || string.IsNullOrWhiteSpace(returnType))
                {
                    if (NeedsSuper.Contains(functionName.Trim()) || (ConditionalSuper.ContainsKey(functionName.Trim()) && className.Trim().StartsWith(ConditionalSuper[functionName.Trim()])))
                        result += $"Super::{functionName}({string.Join(",", Regex.Matches(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?:.*? )??(.*?) ([^ ]*?)(?:, ?| \)|$)").Cast<Match>().Select(match => match.Groups[2].Value))}); ";
                    result += $"}}";
                }
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
            return Regex.Match(functionName.Trim(), @"^([\w\d_~]+|operator.+)$").Success && !(new string[] { "return", "if", "else", "const", "struct", "for", "entireArray" /* fill with more as they show up */ }).Contains(functionName.Trim()) && !IsAllCaps(functionName.Trim()); // Don't match macros
        }

        private static string FixReturnType(string returnType)
        {
            returnType = returnType.Trim();
            if (returnType.EndsWith("*"))
            {
                if (NestedStructs.ContainsKey(returnType.TrimEnd('*')))
                    return NestedStructs[returnType.TrimEnd('*')] + "* ";
            }
            else if (returnType.EndsWith("&"))
            {
                if (NestedStructs.ContainsKey(returnType.TrimEnd('&')))
                    return NestedStructs[returnType.TrimEnd('&')] + "& ";
            }
            else
            {
                if (NestedStructs.ContainsKey(returnType))
                    return NestedStructs[returnType] + " ";
            }
            if(!string.IsNullOrWhiteSpace(returnType))
                return returnType.Trim() + " ";
            return "";
        }

        private static string GetCustomReturn(string returnType)
        {
            returnType = TrimUselessSpaces(returnType); // trim spaces between < and character, ( and character, etc.
            switch (returnType)
            {
                case "FReply":
                    return "FReply::Unhandled()";
                case "TSharedRef<SWidget>":
                    return "Super::RebuildWidget()";
                case "EDataValidationResult":
                    return "EDataValidationResult::Valid";
                default:
                    return $"{returnType}()";
            }
        }

        private static string TrimUselessSpaces(string str)
        {
            return Regex.Replace(str.Trim(), @"(?:([^\w\d])\s+([\w\d])|([\w\d])\s+([^\w\d])|([^\w\d])\s+([^\w\d]))", "$1$2$3$4$5$6");
        }

        private static string FixDefaults(string parameters)
        {
            string result = "";
            int paranthesisDepth = 1;
            bool isInDefault = false;
            for(int i = 1; i < parameters.Length; i++)
            {
                if (parameters[i] == '(')
                    paranthesisDepth++;
                if (parameters[i] == ')')
                    paranthesisDepth--;

                if(parameters[i] == '=')
                    isInDefault = true;

                if (parameters[i] == ',' && paranthesisDepth == 1)
                    isInDefault = false;

                if (!isInDefault)
                    result += parameters[i];
            }
            return result.Trim();
        }

        private static bool IsAllCaps(string str)
        {
            return !Regex.Match(str, "[a-z]").Success && !string.IsNullOrWhiteSpace(str);
        }

        private static bool IsValidReturnType(string returnType)
        {
            return !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(returnType.Trim()) && !IsAllCaps(returnType) && !string.IsNullOrWhiteSpace(returnType) && !returnType.Contains("FORCEINLINE") && !returnType.Contains("+"); // FORCEINLINE are already implemented in header (?)
        }
    }
}
