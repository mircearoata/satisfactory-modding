// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGHotbarShortcut.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGHotbarShortcut() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHotbarShortcut_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHotbarShortcut();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHotbarShortcut_Execute();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerController_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHotbarShortcut_IsActive();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	static FName NAME_UFGHotbarShortcut_Execute = FName(TEXT("Execute"));
	void UFGHotbarShortcut::Execute(AFGPlayerController* owner)
	{
		FGHotbarShortcut_eventExecute_Parms Parms;
		Parms.owner=owner;
		ProcessEvent(FindFunctionChecked(NAME_UFGHotbarShortcut_Execute),&Parms);
	}
	static FName NAME_UFGHotbarShortcut_GetDisplayImage = FName(TEXT("GetDisplayImage"));
	UTexture2D* UFGHotbarShortcut::GetDisplayImage() const
	{
		FGHotbarShortcut_eventGetDisplayImage_Parms Parms;
		const_cast<UFGHotbarShortcut*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGHotbarShortcut_GetDisplayImage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFGHotbarShortcut_IsActive = FName(TEXT("IsActive"));
	bool UFGHotbarShortcut::IsActive(AFGPlayerController* owner) const
	{
		FGHotbarShortcut_eventIsActive_Parms Parms;
		Parms.owner=owner;
		const_cast<UFGHotbarShortcut*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGHotbarShortcut_IsActive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFGHotbarShortcut_IsValidShortcut = FName(TEXT("IsValidShortcut"));
	bool UFGHotbarShortcut::IsValidShortcut(AFGPlayerController* owner) const
	{
		FGHotbarShortcut_eventIsValidShortcut_Parms Parms;
		Parms.owner=owner;
		const_cast<UFGHotbarShortcut*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGHotbarShortcut_IsValidShortcut),&Parms);
		return !!Parms.ReturnValue;
	}
	void UFGHotbarShortcut::StaticRegisterNativesUFGHotbarShortcut()
	{
		UClass* Class = UFGHotbarShortcut::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UFGHotbarShortcut::execExecute },
			{ "GetDisplayImage", &UFGHotbarShortcut::execGetDisplayImage },
			{ "IsActive", &UFGHotbarShortcut::execIsActive },
			{ "IsValidShortcut", &UFGHotbarShortcut::execIsValidShortcut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHotbarShortcut_eventExecute_Parms, owner), Z_Construct_UClass_AFGPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "Public/FGHotbarShortcut.h" },
		{ "ToolTip", "End IFSaveInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHotbarShortcut, nullptr, "Execute", sizeof(FGHotbarShortcut_eventExecute_Parms), Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHotbarShortcut_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHotbarShortcut_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHotbarShortcut_eventGetDisplayImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "Public/FGHotbarShortcut.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHotbarShortcut, nullptr, "GetDisplayImage", sizeof(FGHotbarShortcut_eventGetDisplayImage_Parms), Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHotbarShortcut_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHotbarShortcut_eventIsActive_Parms), &Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHotbarShortcut_eventIsActive_Parms, owner), Z_Construct_UClass_AFGPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "Public/FGHotbarShortcut.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHotbarShortcut, nullptr, "IsActive", sizeof(FGHotbarShortcut_eventIsActive_Parms), Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHotbarShortcut_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHotbarShortcut_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHotbarShortcut_eventIsValidShortcut_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHotbarShortcut_eventIsValidShortcut_Parms), &Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHotbarShortcut_eventIsValidShortcut_Parms, owner), Z_Construct_UClass_AFGPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "Public/FGHotbarShortcut.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGHotbarShortcut, nullptr, "IsValidShortcut", sizeof(FGHotbarShortcut_eventIsValidShortcut_Parms), Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGHotbarShortcut_NoRegister()
	{
		return UFGHotbarShortcut::StaticClass();
	}
	struct Z_Construct_UClass_UFGHotbarShortcut_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGHotbarShortcut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGHotbarShortcut_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGHotbarShortcut_Execute, "Execute" }, // 1318620513
		{ &Z_Construct_UFunction_UFGHotbarShortcut_GetDisplayImage, "GetDisplayImage" }, // 1463889326
		{ &Z_Construct_UFunction_UFGHotbarShortcut_IsActive, "IsActive" }, // 243229823
		{ &Z_Construct_UFunction_UFGHotbarShortcut_IsValidShortcut, "IsValidShortcut" }, // 2029453172
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHotbarShortcut_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGHotbarShortcut.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGHotbarShortcut.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGHotbarShortcut_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UFGHotbarShortcut, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGHotbarShortcut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGHotbarShortcut>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGHotbarShortcut_Statics::ClassParams = {
		&UFGHotbarShortcut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGHotbarShortcut_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGHotbarShortcut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGHotbarShortcut()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGHotbarShortcut_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGHotbarShortcut, 2707392713);
	template<> FACTORYGAME_API UClass* StaticClass<UFGHotbarShortcut>()
	{
		return UFGHotbarShortcut::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGHotbarShortcut(Z_Construct_UClass_UFGHotbarShortcut, &UFGHotbarShortcut::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGHotbarShortcut"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGHotbarShortcut);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
