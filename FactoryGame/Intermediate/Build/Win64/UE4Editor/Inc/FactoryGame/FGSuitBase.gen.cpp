// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGSuitBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSuitBase() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAndSlotName();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSuitBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSuitBase();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSuitBaseAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSuitBaseAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment();
// End Cross Module References
class UScriptStruct* FMaterialAndSlotName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMaterialAndSlotName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialAndSlotName, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MaterialAndSlotName"), sizeof(FMaterialAndSlotName), Get_Z_Construct_UScriptStruct_FMaterialAndSlotName_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FMaterialAndSlotName>()
{
	return FMaterialAndSlotName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialAndSlotName(FMaterialAndSlotName::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MaterialAndSlotName"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMaterialAndSlotName
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMaterialAndSlotName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialAndSlotName")),new UScriptStruct::TCppStructOps<FMaterialAndSlotName>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMaterialAndSlotName;
	struct Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Equipment/FGSuitBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialAndSlotName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "MaterialAndSlotName" },
		{ "ModuleRelativePath", "Public/Equipment/FGSuitBase.h" },
		{ "ToolTip", "The material to put on that slot name" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialAndSlotName, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "MaterialAndSlotName" },
		{ "ModuleRelativePath", "Public/Equipment/FGSuitBase.h" },
		{ "ToolTip", "This is the slot name on the character" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialAndSlotName, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::NewProp_SlotName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MaterialAndSlotName",
		sizeof(FMaterialAndSlotName),
		alignof(FMaterialAndSlotName),
		Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialAndSlotName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialAndSlotName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialAndSlotName"), sizeof(FMaterialAndSlotName), Get_Z_Construct_UScriptStruct_FMaterialAndSlotName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialAndSlotName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialAndSlotName_Hash() { return 3460683883U; }
	void AFGSuitBase::StaticRegisterNativesAFGSuitBase()
	{
	}
	UClass* Z_Construct_UClass_AFGSuitBase_NoRegister()
	{
		return AFGSuitBase::StaticClass();
	}
	struct Z_Construct_UClass_AFGSuitBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSuit1PMeshMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSuit1PMeshMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSuit1PMeshMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSuitBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSuitBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGSuitBase.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGSuitBase.h" },
		{ "ToolTip", "Base class for \"suit\"-like equipment. Updates visuals on equip/unequip etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSuitBase_Statics::NewProp_mSuit1PMeshMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/Equipment/FGSuitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSuitBase_Statics::NewProp_mSuit1PMeshMaterials = { "mSuit1PMeshMaterials", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSuitBase, mSuit1PMeshMaterials), METADATA_PARAMS(Z_Construct_UClass_AFGSuitBase_Statics::NewProp_mSuit1PMeshMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSuitBase_Statics::NewProp_mSuit1PMeshMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSuitBase_Statics::NewProp_mSuit1PMeshMaterials_Inner = { "mSuit1PMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialAndSlotName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSuitBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSuitBase_Statics::NewProp_mSuit1PMeshMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSuitBase_Statics::NewProp_mSuit1PMeshMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSuitBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSuitBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSuitBase_Statics::ClassParams = {
		&AFGSuitBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGSuitBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGSuitBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSuitBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGSuitBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSuitBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSuitBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSuitBase, 1369098838);
	template<> FACTORYGAME_API UClass* StaticClass<AFGSuitBase>()
	{
		return AFGSuitBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSuitBase(Z_Construct_UClass_AFGSuitBase, &AFGSuitBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSuitBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSuitBase);
	void AFGSuitBaseAttachment::StaticRegisterNativesAFGSuitBaseAttachment()
	{
	}
	UClass* Z_Construct_UClass_AFGSuitBaseAttachment_NoRegister()
	{
		return AFGSuitBaseAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGSuitBaseAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSuit3PMeshMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSuit3PMeshMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSuit3PMeshMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSuitBaseAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipmentAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSuitBaseAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGSuitBase.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGSuitBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSuitBaseAttachment_Statics::NewProp_mSuit3PMeshMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/Equipment/FGSuitBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSuitBaseAttachment_Statics::NewProp_mSuit3PMeshMaterials = { "mSuit3PMeshMaterials", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSuitBaseAttachment, mSuit3PMeshMaterials), METADATA_PARAMS(Z_Construct_UClass_AFGSuitBaseAttachment_Statics::NewProp_mSuit3PMeshMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSuitBaseAttachment_Statics::NewProp_mSuit3PMeshMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSuitBaseAttachment_Statics::NewProp_mSuit3PMeshMaterials_Inner = { "mSuit3PMeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialAndSlotName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSuitBaseAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSuitBaseAttachment_Statics::NewProp_mSuit3PMeshMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSuitBaseAttachment_Statics::NewProp_mSuit3PMeshMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSuitBaseAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSuitBaseAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSuitBaseAttachment_Statics::ClassParams = {
		&AFGSuitBaseAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGSuitBaseAttachment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGSuitBaseAttachment_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSuitBaseAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGSuitBaseAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSuitBaseAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSuitBaseAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSuitBaseAttachment, 4243561062);
	template<> FACTORYGAME_API UClass* StaticClass<AFGSuitBaseAttachment>()
	{
		return AFGSuitBaseAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSuitBaseAttachment(Z_Construct_UClass_AFGSuitBaseAttachment, &AFGSuitBaseAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSuitBaseAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSuitBaseAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
