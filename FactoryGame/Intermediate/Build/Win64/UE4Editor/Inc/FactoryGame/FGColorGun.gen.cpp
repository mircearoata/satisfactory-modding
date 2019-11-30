// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGColorGun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGColorGun() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGColorGun_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGColorGun();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponInstantFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetPrimaryColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetSecondaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_SetColorSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_SetPrimaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_SetSecondaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* EFGColorGunTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EFGColorGunTargetType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFGColorGunTargetType(EFGColorGunTargetType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFGColorGunTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType_CRC() { return 3309964119U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFGColorGunTargetType"), 0, Get_Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFGColorGunTargetType::ECGT_noTarget", (int64)EFGColorGunTargetType::ECGT_noTarget },
				{ "EFGColorGunTargetType::ECGT_nonColorable", (int64)EFGColorGunTargetType::ECGT_nonColorable },
				{ "EFGColorGunTargetType::ECGT_validTarget", (int64)EFGColorGunTargetType::ECGT_validTarget },
				{ "EFGColorGunTargetType::ECGT_sameColorSlot", (int64)EFGColorGunTargetType::ECGT_sameColorSlot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FGColorGun.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFGColorGunTargetType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFGColorGunTargetType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AFGColorGun_OnTargetStateChanged = FName(TEXT("OnTargetStateChanged"));
	void AFGColorGun::OnTargetStateChanged(EFGColorGunTargetType targetType)
	{
		FGColorGun_eventOnTargetStateChanged_Parms Parms;
		Parms.targetType=targetType;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_OnTargetStateChanged),&Parms);
	}
	static FName NAME_AFGColorGun_Sever_SetColorSlot = FName(TEXT("Sever_SetColorSlot"));
	void AFGColorGun::Sever_SetColorSlot(uint8 slotIndex)
	{
		FGColorGun_eventSever_SetColorSlot_Parms Parms;
		Parms.slotIndex=slotIndex;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_Sever_SetColorSlot),&Parms);
	}
	static FName NAME_AFGColorGun_Sever_SetPrimaryColor = FName(TEXT("Sever_SetPrimaryColor"));
	void AFGColorGun::Sever_SetPrimaryColor(FLinearColor newColor)
	{
		FGColorGun_eventSever_SetPrimaryColor_Parms Parms;
		Parms.newColor=newColor;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_Sever_SetPrimaryColor),&Parms);
	}
	static FName NAME_AFGColorGun_Sever_SetPrimaryColorForSlot = FName(TEXT("Sever_SetPrimaryColorForSlot"));
	void AFGColorGun::Sever_SetPrimaryColorForSlot(uint8 slotIndex, FLinearColor newColor)
	{
		FGColorGun_eventSever_SetPrimaryColorForSlot_Parms Parms;
		Parms.slotIndex=slotIndex;
		Parms.newColor=newColor;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_Sever_SetPrimaryColorForSlot),&Parms);
	}
	static FName NAME_AFGColorGun_Sever_SetSecondaryColor = FName(TEXT("Sever_SetSecondaryColor"));
	void AFGColorGun::Sever_SetSecondaryColor(FLinearColor newColor)
	{
		FGColorGun_eventSever_SetSecondaryColor_Parms Parms;
		Parms.newColor=newColor;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_Sever_SetSecondaryColor),&Parms);
	}
	static FName NAME_AFGColorGun_Sever_SetSecondaryColorForSlot = FName(TEXT("Sever_SetSecondaryColorForSlot"));
	void AFGColorGun::Sever_SetSecondaryColorForSlot(uint8 slotIndex, FLinearColor newColor)
	{
		FGColorGun_eventSever_SetSecondaryColorForSlot_Parms Parms;
		Parms.slotIndex=slotIndex;
		Parms.newColor=newColor;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_Sever_SetSecondaryColorForSlot),&Parms);
	}
	static FName NAME_AFGColorGun_ToggleColorPickerUI = FName(TEXT("ToggleColorPickerUI"));
	void AFGColorGun::ToggleColorPickerUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_ToggleColorPickerUI),NULL);
	}
	void AFGColorGun::StaticRegisterNativesAFGColorGun()
	{
		UClass* Class = AFGColorGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColorSlotIndex", &AFGColorGun::execGetColorSlotIndex },
			{ "GetMaxNumColorSlots", &AFGColorGun::execGetMaxNumColorSlots },
			{ "GetPrimaryColor", &AFGColorGun::execGetPrimaryColor },
			{ "GetPrimaryColorForSlot", &AFGColorGun::execGetPrimaryColorForSlot },
			{ "GetSecondaryColor", &AFGColorGun::execGetSecondaryColor },
			{ "GetSecondaryColorForSlot", &AFGColorGun::execGetSecondaryColorForSlot },
			{ "OnSecondaryFirePressed", &AFGColorGun::execOnSecondaryFirePressed },
			{ "SetColorSlot", &AFGColorGun::execSetColorSlot },
			{ "SetPrimaryColor", &AFGColorGun::execSetPrimaryColor },
			{ "SetPrimaryColorForSlot", &AFGColorGun::execSetPrimaryColorForSlot },
			{ "SetSecondaryColor", &AFGColorGun::execSetSecondaryColor },
			{ "SetSecondaryColorForSlot", &AFGColorGun::execSetSecondaryColorForSlot },
			{ "Sever_SetColorSlot", &AFGColorGun::execSever_SetColorSlot },
			{ "Sever_SetPrimaryColor", &AFGColorGun::execSever_SetPrimaryColor },
			{ "Sever_SetPrimaryColorForSlot", &AFGColorGun::execSever_SetPrimaryColorForSlot },
			{ "Sever_SetSecondaryColor", &AFGColorGun::execSever_SetSecondaryColor },
			{ "Sever_SetSecondaryColorForSlot", &AFGColorGun::execSever_SetSecondaryColorForSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics
	{
		struct FGColorGun_eventGetColorSlotIndex_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventGetColorSlotIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Get the the currently active color slot index for the gun" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "GetColorSlotIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGColorGun_eventGetColorSlotIndex_Parms), Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics
	{
		struct FGColorGun_eventGetMaxNumColorSlots_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventGetMaxNumColorSlots_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Gets the mac number of color slots" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "GetMaxNumColorSlots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGColorGun_eventGetMaxNumColorSlots_Parms), Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics
	{
		struct FGColorGun_eventGetPrimaryColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventGetPrimaryColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED]  Get the primary color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "GetPrimaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGColorGun_eventGetPrimaryColor_Parms), Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetPrimaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics
	{
		struct FGColorGun_eventGetPrimaryColorForSlot_Parms
		{
			uint8 index;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventGetPrimaryColorForSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventGetPrimaryColorForSlot_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Get the primary color for a given color slot index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "GetPrimaryColorForSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGColorGun_eventGetPrimaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics
	{
		struct FGColorGun_eventGetSecondaryColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventGetSecondaryColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED] Get the Secondary color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "GetSecondaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGColorGun_eventGetSecondaryColor_Parms), Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetSecondaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics
	{
		struct FGColorGun_eventGetSecondaryColorForSlot_Parms
		{
			uint8 index;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventGetSecondaryColorForSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventGetSecondaryColorForSlot_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Get the secondary color for a given color slot index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "GetSecondaryColorForSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGColorGun_eventGetSecondaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Called when we press secondary fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "OnSecondaryFirePressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_targetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_targetType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::NewProp_targetType = { UE4CodeGen_Private::EPropertyClass::Enum, "targetType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventOnTargetStateChanged_Parms, targetType), Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::NewProp_targetType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::NewProp_targetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::NewProp_targetType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Opens the UI so that the player can select both colors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "OnTargetStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGColorGun_eventOnTargetStateChanged_Parms), Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics
	{
		struct FGColorGun_eventSetColorSlot_Parms
		{
			uint8 slotIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::NewProp_slotIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "slotIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSetColorSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Sets the currently active color slot index for the gun" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "SetColorSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGColorGun_eventSetColorSlot_Parms), Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_SetColorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics
	{
		struct FGColorGun_eventSetPrimaryColor_Parms
		{
			FLinearColor newColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSetPrimaryColor_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED]  Set the color slot used when firing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "SetPrimaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGColorGun_eventSetPrimaryColor_Parms), Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_SetPrimaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_SetPrimaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics
	{
		struct FGColorGun_eventSetPrimaryColorForSlot_Parms
		{
			uint8 slotIndex;
			FLinearColor newColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSetPrimaryColorForSlot_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::NewProp_slotIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "slotIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSetPrimaryColorForSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::NewProp_newColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Set the secondary color for a given slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "SetPrimaryColorForSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGColorGun_eventSetPrimaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics
	{
		struct FGColorGun_eventSetSecondaryColor_Parms
		{
			FLinearColor newColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSetSecondaryColor_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED] * Set the secondary color used when firing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "SetSecondaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGColorGun_eventSetSecondaryColor_Parms), Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_SetSecondaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_SetSecondaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics
	{
		struct FGColorGun_eventSetSecondaryColorForSlot_Parms
		{
			uint8 slotIndex;
			FLinearColor newColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSetSecondaryColorForSlot_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::NewProp_slotIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "slotIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSetSecondaryColorForSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::NewProp_newColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Set the secondary color for a given slot index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "SetSecondaryColorForSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGColorGun_eventSetSecondaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::NewProp_slotIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "slotIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSever_SetColorSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Sets the currently active color slot index for the gun on the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "Sever_SetColorSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(FGColorGun_eventSever_SetColorSlot_Parms), Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSever_SetPrimaryColor_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED]  Sets the primary color on the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "Sever_SetPrimaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A20CC0, sizeof(FGColorGun_eventSever_SetPrimaryColor_Parms), Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSever_SetPrimaryColorForSlot_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::NewProp_slotIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "slotIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSever_SetPrimaryColorForSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::NewProp_newColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Set the secondary color for a given slot on the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "Sever_SetPrimaryColorForSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A20CC0, sizeof(FGColorGun_eventSever_SetPrimaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSever_SetSecondaryColor_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED]  Sets the primary color on the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "Sever_SetSecondaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A20CC0, sizeof(FGColorGun_eventSever_SetSecondaryColor_Parms), Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSever_SetSecondaryColorForSlot_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::NewProp_slotIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "slotIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorGun_eventSever_SetSecondaryColorForSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::NewProp_newColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Sets the primary color for a given slot index on the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "Sever_SetSecondaryColorForSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A20CC0, sizeof(FGColorGun_eventSever_SetSecondaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Opens the UI so that the player can select both colors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, "ToggleColorPickerUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGColorGun_NoRegister()
	{
		return AFGColorGun::StaticClass();
	}
	struct Z_Construct_UClass_AFGColorGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentColorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentColorTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mColorSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mColorSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mValidTargetCrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mValidTargetCrosshairTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNonColorableTargetCrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mNonColorableTargetCrosshairTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNonColorableTargetCrosshairColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mNonColorableTargetCrosshairColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNoTargetCrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mNoTargetCrosshairTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNoTargetCrosshairColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mNoTargetCrosshairColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRedundantTargetCrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mRedundantTargetCrosshairTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRedundantTargetCrosshairColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRedundantTargetCrosshairColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSecondaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSecondaryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPrimaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPrimaryColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGColorGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeaponInstantFire,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGColorGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex, "GetColorSlotIndex" }, // 4251523037
		{ &Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots, "GetMaxNumColorSlots" }, // 1174401744
		{ &Z_Construct_UFunction_AFGColorGun_GetPrimaryColor, "GetPrimaryColor" }, // 335876224
		{ &Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot, "GetPrimaryColorForSlot" }, // 3694753642
		{ &Z_Construct_UFunction_AFGColorGun_GetSecondaryColor, "GetSecondaryColor" }, // 2048474654
		{ &Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot, "GetSecondaryColorForSlot" }, // 3720480388
		{ &Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed, "OnSecondaryFirePressed" }, // 856126635
		{ &Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged, "OnTargetStateChanged" }, // 1024298038
		{ &Z_Construct_UFunction_AFGColorGun_SetColorSlot, "SetColorSlot" }, // 2806199246
		{ &Z_Construct_UFunction_AFGColorGun_SetPrimaryColor, "SetPrimaryColor" }, // 311327786
		{ &Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot, "SetPrimaryColorForSlot" }, // 1112565566
		{ &Z_Construct_UFunction_AFGColorGun_SetSecondaryColor, "SetSecondaryColor" }, // 1535942188
		{ &Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot, "SetSecondaryColorForSlot" }, // 180402684
		{ &Z_Construct_UFunction_AFGColorGun_Sever_SetColorSlot, "Sever_SetColorSlot" }, // 2300464400
		{ &Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColor, "Sever_SetPrimaryColor" }, // 2746696923
		{ &Z_Construct_UFunction_AFGColorGun_Sever_SetPrimaryColorForSlot, "Sever_SetPrimaryColorForSlot" }, // 953342726
		{ &Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColor, "Sever_SetSecondaryColor" }, // 3416096981
		{ &Z_Construct_UFunction_AFGColorGun_Sever_SetSecondaryColorForSlot, "Sever_SetSecondaryColorForSlot" }, // 1869032459
		{ &Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI, "ToggleColorPickerUI" }, // 4144676146
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGColorGun.h" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DavalliusA:Fri/01-03-2019] don't use the first color as default, as it will make players maybe not notice when thye fire on a building already using the default color" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget = { UE4CodeGen_Private::EPropertyClass::Object, "mCurrentColorTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mCurrentColorTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "This will be the color slot used when shooting" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot = { UE4CodeGen_Private::EPropertyClass::Byte, "mColorSlot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001010001, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mColorSlot), nullptr, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair texture used when aiming at a target isvalid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mValidTargetCrosshairTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mValidTargetCrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair texture used when aiming at a target that can't be colored" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mNonColorableTargetCrosshairTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mNonColorableTargetCrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair color used when aiming at a target that can't be colored" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mNonColorableTargetCrosshairColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mNonColorableTargetCrosshairColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair texture used when aiming at a target too far away or not aiming at a target at all" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mNoTargetCrosshairTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mNoTargetCrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair color used when aiming at a target too far away or not aiming at a target at all" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mNoTargetCrosshairColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mNoTargetCrosshairColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair texture used when aiming at a target that already have the same color slot as you are painting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mRedundantTargetCrosshairTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mRedundantTargetCrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair color used when aiming at a target that already have the same color slot as you are painting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mRedundantTargetCrosshairColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mRedundantTargetCrosshairColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED] This will be the color used when shooting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mSecondaryColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mSecondaryColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED] This will be the color used when shooting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mPrimaryColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, STRUCT_OFFSET(AFGColorGun, mPrimaryColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGColorGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGColorGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGColorGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGColorGun_Statics::ClassParams = {
		&AFGColorGun::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGColorGun_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGColorGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGColorGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGColorGun, 3039314829);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGColorGun(Z_Construct_UClass_AFGColorGun, &AFGColorGun::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGColorGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGColorGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
