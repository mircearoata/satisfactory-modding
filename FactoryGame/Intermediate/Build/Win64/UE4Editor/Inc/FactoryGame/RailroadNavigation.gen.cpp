// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/RailroadNavigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRailroadNavigation() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	static UEnum* ERailroadPathFindingResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ERailroadPathFindingResult"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ERailroadPathFindingResult>()
	{
		return ERailroadPathFindingResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERailroadPathFindingResult(ERailroadPathFindingResult_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ERailroadPathFindingResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult_Hash() { return 1332503251U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERailroadPathFindingResult"), 0, Get_Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERailroadPathFindingResult::RNQR_Error", (int64)ERailroadPathFindingResult::RNQR_Error },
				{ "ERailroadPathFindingResult::RNQR_Unreachable", (int64)ERailroadPathFindingResult::RNQR_Unreachable },
				{ "ERailroadPathFindingResult::RNQR_Success", (int64)ERailroadPathFindingResult::RNQR_Success },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/RailroadNavigation.h" },
				{ "RNQR_Error.DisplayName", "Error" },
				{ "RNQR_Success.DisplayName", "Success" },
				{ "RNQR_Unreachable.DisplayName", "Unreachable" },
				{ "ToolTip", "Pathfinding result." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ERailroadPathFindingResult",
				"ERailroadPathFindingResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
