// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableGeneratorGeoThermal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableGeneratorGeoThermal() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorGeoThermal();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGenerator();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
// End Cross Module References
	void AFGBuildableGeneratorGeoThermal::StaticRegisterNativesAFGBuildableGeneratorGeoThermal()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_NoRegister()
	{
		return AFGBuildableGeneratorGeoThermal::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractResourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExtractResourceNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableGeneratorGeoThermal.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorGeoThermal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableGeneratorGeoThermal.h" },
		{ "ToolTip", "This is the geyser this generator is placed on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode = { UE4CodeGen_Private::EPropertyClass::Object, "mExtractResourceNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableGeneratorGeoThermal, mExtractResourceNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableGeneratorGeoThermal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::ClassParams = {
		&AFGBuildableGeneratorGeoThermal::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableGeneratorGeoThermal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableGeneratorGeoThermal, 631443264);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableGeneratorGeoThermal(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal, &AFGBuildableGeneratorGeoThermal::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableGeneratorGeoThermal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableGeneratorGeoThermal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
