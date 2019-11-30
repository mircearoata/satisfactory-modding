// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGDestructiveProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDestructiveProjectile() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDestroyedFoliageEffectData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDestructiveProjectile_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDestructiveProjectile();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGProjectile();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FDestroyedFoliageEffectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("DestroyedFoliageEffectData"), sizeof(FDestroyedFoliageEffectData), Get_Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FDestroyedFoliageEffectData>()
{
	return FDestroyedFoliageEffectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDestroyedFoliageEffectData(FDestroyedFoliageEffectData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("DestroyedFoliageEffectData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFDestroyedFoliageEffectData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFDestroyedFoliageEffectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DestroyedFoliageEffectData")),new UScriptStruct::TCppStructOps<FDestroyedFoliageEffectData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFDestroyedFoliageEffectData;
	struct Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
		{ "ToolTip", "Holds the information necessary for spawning destroyed effects after all overlap calculations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestroyedFoliageEffectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDestroyedFoliageEffectData, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_DestroyedEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_DestroyedEffect = { "DestroyedEffect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDestroyedFoliageEffectData, DestroyedEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_DestroyedEffect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_DestroyedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDestroyedFoliageEffectData, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_SpawnLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_DestroyedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::NewProp_SpawnLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"DestroyedFoliageEffectData",
		sizeof(FDestroyedFoliageEffectData),
		alignof(FDestroyedFoliageEffectData),
		Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestroyedFoliageEffectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DestroyedFoliageEffectData"), sizeof(FDestroyedFoliageEffectData), Get_Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Hash() { return 2599077048U; }
	void AFGDestructiveProjectile::StaticRegisterNativesAFGDestructiveProjectile()
	{
	}
	UClass* Z_Construct_UClass_AFGDestructiveProjectile_NoRegister()
	{
		return AFGDestructiveProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AFGDestructiveProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxParticleSpawnsPerDetonation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxParticleSpawnsPerDetonation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDestroysFoliage_MetaData[];
#endif
		static void NewProp_mDestroysFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDestroysFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDestroysRelevantActors_MetaData[];
#endif
		static void NewProp_mDestroysRelevantActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDestroysRelevantActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDestructionCollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDestructionCollisionComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGDestructiveProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDestructiveProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGDestructiveProjectile.h" },
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
		{ "ToolTip", "Base class for any projectile that should destroy foliage or actors\n   @todo: Optimize to collect overlapped foliage if attached to a static actor so that we don't need to populate on detonate" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mMaxParticleSpawnsPerDetonation_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
		{ "ToolTip", "Any amount of particle systems over this limit will not be spawned" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mMaxParticleSpawnsPerDetonation = { "mMaxParticleSpawnsPerDetonation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGDestructiveProjectile, mMaxParticleSpawnsPerDetonation), METADATA_PARAMS(Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mMaxParticleSpawnsPerDetonation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mMaxParticleSpawnsPerDetonation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysFoliage_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
		{ "ToolTip", "Should foliage be considered for destruction" },
	};
#endif
	void Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysFoliage_SetBit(void* Obj)
	{
		((AFGDestructiveProjectile*)Obj)->mDestroysFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysFoliage = { "mDestroysFoliage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGDestructiveProjectile), &Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysFoliage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysRelevantActors_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
		{ "ToolTip", "Should actors implementing destructable interfaces be considered for destruction" },
	};
#endif
	void Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysRelevantActors_SetBit(void* Obj)
	{
		((AFGDestructiveProjectile*)Obj)->mDestroysRelevantActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysRelevantActors = { "mDestroysRelevantActors", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGDestructiveProjectile), &Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysRelevantActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysRelevantActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysRelevantActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestructionCollisionComp_MetaData[] = {
		{ "Category", "Desctruction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGDestructiveProjectile.h" },
		{ "ToolTip", "Collision Component used to determine which objects should be considered for destruction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestructionCollisionComp = { "mDestructionCollisionComp", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGDestructiveProjectile, mDestructionCollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestructionCollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestructionCollisionComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGDestructiveProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mMaxParticleSpawnsPerDetonation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestroysRelevantActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDestructiveProjectile_Statics::NewProp_mDestructionCollisionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGDestructiveProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGDestructiveProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGDestructiveProjectile_Statics::ClassParams = {
		&AFGDestructiveProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGDestructiveProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGDestructiveProjectile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGDestructiveProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGDestructiveProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGDestructiveProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGDestructiveProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGDestructiveProjectile, 3701180975);
	template<> FACTORYGAME_API UClass* StaticClass<AFGDestructiveProjectile>()
	{
		return AFGDestructiveProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDestructiveProjectile(Z_Construct_UClass_AFGDestructiveProjectile, &AFGDestructiveProjectile::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGDestructiveProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDestructiveProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
