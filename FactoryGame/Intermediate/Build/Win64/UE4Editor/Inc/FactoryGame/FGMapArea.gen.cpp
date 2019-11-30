// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGMapArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMapArea() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapArea_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapArea();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapArea_GetZoneType();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapAreaZoneDescriptor_NoRegister();
// End Cross Module References
	void UFGMapArea::StaticRegisterNativesUFGMapArea()
	{
		UClass* Class = UFGMapArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAreaDisplayName", &UFGMapArea::execGetAreaDisplayName },
			{ "GetUserSetAreaDisplayName", &UFGMapArea::execGetUserSetAreaDisplayName },
			{ "GetZoneType", &UFGMapArea::execGetZoneType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics
	{
		struct FGMapArea_eventGetAreaDisplayName_Parms
		{
			TSubclassOf<UFGMapArea>  inClass;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapArea_eventGetAreaDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapArea_eventGetAreaDisplayName_Parms, inClass), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MapArea" },
		{ "ModuleRelativePath", "Public/FGMapArea.h" },
		{ "ToolTip", "Get area display name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapArea, nullptr, "GetAreaDisplayName", sizeof(FGMapArea_eventGetAreaDisplayName_Parms), Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics
	{
		struct FGMapArea_eventGetUserSetAreaDisplayName_Parms
		{
			TSubclassOf<UFGMapArea>  inClass;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapArea_eventGetUserSetAreaDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapArea_eventGetUserSetAreaDisplayName_Parms, inClass), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MapArea" },
		{ "ModuleRelativePath", "Public/FGMapArea.h" },
		{ "ToolTip", "Get area display name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapArea, nullptr, "GetUserSetAreaDisplayName", sizeof(FGMapArea_eventGetUserSetAreaDisplayName_Parms), Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics
	{
		struct FGMapArea_eventGetZoneType_Parms
		{
			TSubclassOf<UFGMapArea>  inClass;
			TSubclassOf<UFGMapAreaZoneDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapArea_eventGetZoneType_Parms, ReturnValue), Z_Construct_UClass_UFGMapAreaZoneDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapArea_eventGetZoneType_Parms, inClass), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::Function_MetaDataParams[] = {
		{ "Category", "MapArea" },
		{ "ModuleRelativePath", "Public/FGMapArea.h" },
		{ "ToolTip", "Get the CDO of the zone type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapArea, nullptr, "GetZoneType", sizeof(FGMapArea_eventGetZoneType_Parms), Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapArea_GetZoneType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapArea_GetZoneType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMapArea_NoRegister()
	{
		return UFGMapArea::StaticClass();
	}
	struct Z_Construct_UClass_UFGMapArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUserSetDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mUserSetDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mZoneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mZoneType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMapArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMapArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMapArea_GetAreaDisplayName, "GetAreaDisplayName" }, // 842284103
		{ &Z_Construct_UFunction_UFGMapArea_GetUserSetAreaDisplayName, "GetUserSetAreaDisplayName" }, // 1354195935
		{ &Z_Construct_UFunction_UFGMapArea_GetZoneType, "GetZoneType" }, // 3731500562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGMapArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGMapArea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapArea_Statics::NewProp_mUserSetDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGMapArea.h" },
		{ "ToolTip", "This is the name the player has given this area" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGMapArea_Statics::NewProp_mUserSetDisplayName = { "mUserSetDisplayName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMapArea, mUserSetDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGMapArea_Statics::NewProp_mUserSetDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapArea_Statics::NewProp_mUserSetDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapArea_Statics::NewProp_mZoneType_MetaData[] = {
		{ "Category", "MapArea" },
		{ "ModuleRelativePath", "Public/FGMapArea.h" },
		{ "ToolTip", "What kind of zone this is" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGMapArea_Statics::NewProp_mZoneType = { "mZoneType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMapArea, mZoneType), Z_Construct_UClass_UFGMapAreaZoneDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGMapArea_Statics::NewProp_mZoneType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapArea_Statics::NewProp_mZoneType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapArea_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "MapArea" },
		{ "ModuleRelativePath", "Public/FGMapArea.h" },
		{ "ToolTip", "This is the name we at CSS gave this area" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGMapArea_Statics::NewProp_mDisplayName = { "mDisplayName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMapArea, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGMapArea_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapArea_Statics::NewProp_mDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMapArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapArea_Statics::NewProp_mUserSetDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapArea_Statics::NewProp_mZoneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapArea_Statics::NewProp_mDisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMapArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMapArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMapArea_Statics::ClassParams = {
		&UFGMapArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGMapArea_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGMapArea_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGMapArea_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMapArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMapArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMapArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMapArea, 4293685014);
	template<> FACTORYGAME_API UClass* StaticClass<UFGMapArea>()
	{
		return UFGMapArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMapArea(Z_Construct_UClass_UFGMapArea, &UFGMapArea::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMapArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMapArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
