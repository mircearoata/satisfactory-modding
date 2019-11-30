// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGFactoryConnectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFactoryConnectionComponent() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConnectionComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected();
// End Cross Module References
	static UEnum* EFactoryConnectionDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EFactoryConnectionDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFactoryConnectionDirection(EFactoryConnectionDirection_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFactoryConnectionDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection_CRC() { return 2225857682U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFactoryConnectionDirection"), 0, Get_Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFactoryConnectionDirection::FCD_INPUT", (int64)EFactoryConnectionDirection::FCD_INPUT },
				{ "EFactoryConnectionDirection::FCD_OUTPUT", (int64)EFactoryConnectionDirection::FCD_OUTPUT },
				{ "EFactoryConnectionDirection::FCD_ANY", (int64)EFactoryConnectionDirection::FCD_ANY },
				{ "EFactoryConnectionDirection::FCD_SNAP_ONLY", (int64)EFactoryConnectionDirection::FCD_SNAP_ONLY },
				{ "EFactoryConnectionDirection::FCD_MAX", (int64)EFactoryConnectionDirection::FCD_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FCD_ANY.DisplayName", "Any" },
				{ "FCD_INPUT.DisplayName", "Input" },
				{ "FCD_MAX.Hidden", "" },
				{ "FCD_MAX.ToolTip", "Special case for conveyor poles, may need refactor later." },
				{ "FCD_OUTPUT.DisplayName", "Output" },
				{ "FCD_SNAP_ONLY.DisplayName", "Snap Only" },
				{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
				{ "ToolTip", "Type of connections in the game." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFactoryConnectionDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFactoryConnectionDirection",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFactoryConnectionConnector_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EFactoryConnectionConnector"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFactoryConnectionConnector(EFactoryConnectionConnector_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFactoryConnectionConnector"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector_CRC() { return 1473866569U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFactoryConnectionConnector"), 0, Get_Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFactoryConnectionConnector::FCC_CONVEYOR", (int64)EFactoryConnectionConnector::FCC_CONVEYOR },
				{ "EFactoryConnectionConnector::FCC_PIPE", (int64)EFactoryConnectionConnector::FCC_PIPE },
				{ "EFactoryConnectionConnector::FCC_MAX", (int64)EFactoryConnectionConnector::FCC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FCC_CONVEYOR.DisplayName", "Conveyor" },
				{ "FCC_MAX.Hidden", "" },
				{ "FCC_PIPE.DisplayName", "Pipe" },
				{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
				{ "ToolTip", "Type of connections in the game." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFactoryConnectionConnector",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFactoryConnectionConnector",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFGFactoryConnectionComponent::StaticRegisterNativesUFGFactoryConnectionComponent()
	{
		UClass* Class = UFGFactoryConnectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Factory_GrabOutput", &UFGFactoryConnectionComponent::execFactory_GrabOutput },
			{ "Factory_Internal_GrabOutputInventory", &UFGFactoryConnectionComponent::execFactory_Internal_GrabOutputInventory },
			{ "Factory_Internal_PeekOutputInventory", &UFGFactoryConnectionComponent::execFactory_Internal_PeekOutputInventory },
			{ "Factory_PeekOutput", &UFGFactoryConnectionComponent::execFactory_PeekOutput },
			{ "GetConnector", &UFGFactoryConnectionComponent::execGetConnector },
			{ "GetConnectorClearance", &UFGFactoryConnectionComponent::execGetConnectorClearance },
			{ "GetDirection", &UFGFactoryConnectionComponent::execGetDirection },
			{ "GetInventory", &UFGFactoryConnectionComponent::execGetInventory },
			{ "IsConnected", &UFGFactoryConnectionComponent::execIsConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics
	{
		struct FGFactoryConnectionComponent_eventFactory_GrabOutput_Parms
		{
			FInventoryItem out_item;
			float out_OffsetBeyond;
			TSubclassOf<UFGItemDescriptor>  type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_out_OffsetBeyond;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFactoryConnectionComponent_eventFactory_GrabOutput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGFactoryConnectionComponent_eventFactory_GrabOutput_Parms), &Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_GrabOutput_Parms, type), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_out_OffsetBeyond = { UE4CodeGen_Private::EPropertyClass::Float, "out_OffsetBeyond", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_GrabOutput_Parms, out_OffsetBeyond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_out_item = { UE4CodeGen_Private::EPropertyClass::Struct, "out_item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_GrabOutput_Parms, out_item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_out_OffsetBeyond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::NewProp_out_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "CPP_Default_type", "None" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Grab the output on a connection (Grabs 1 resource).\n@param type - Type to grab if output has multiple types, nullptr for any.\n@param offset - if we are grabbing from a belt the item might have an offset beyond the belt's length\n@return valid resource descriptor on success; nullptr if no output of given type exists." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "Factory_GrabOutput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGFactoryConnectionComponent_eventFactory_GrabOutput_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics
	{
		struct FGFactoryConnectionComponent_eventFactory_Internal_GrabOutputInventory_Parms
		{
			FInventoryItem out_item;
			TSubclassOf<UFGItemDescriptor>  type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFactoryConnectionComponent_eventFactory_Internal_GrabOutputInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGFactoryConnectionComponent_eventFactory_Internal_GrabOutputInventory_Parms), &Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_Internal_GrabOutputInventory_Parms, type), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::NewProp_out_item = { UE4CodeGen_Private::EPropertyClass::Struct, "out_item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_Internal_GrabOutputInventory_Parms, out_item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::NewProp_out_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Internal function, for when overloading how to handle a grab, grabs our output from a inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "Factory_Internal_GrabOutputInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGFactoryConnectionComponent_eventFactory_Internal_GrabOutputInventory_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics
	{
		struct FGFactoryConnectionComponent_eventFactory_Internal_PeekOutputInventory_Parms
		{
			TArray<FInventoryItem> out_items;
			TSubclassOf<UFGItemDescriptor>  type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFactoryConnectionComponent_eventFactory_Internal_PeekOutputInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGFactoryConnectionComponent_eventFactory_Internal_PeekOutputInventory_Parms), &Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_Internal_PeekOutputInventory_Parms, type), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_out_items = { UE4CodeGen_Private::EPropertyClass::Array, "out_items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_Internal_PeekOutputInventory_Parms, out_items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_out_items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_out_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::NewProp_out_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Internal function, for when overloading how to handle a peek, peeks our output from a inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "Factory_Internal_PeekOutputInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGFactoryConnectionComponent_eventFactory_Internal_PeekOutputInventory_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics
	{
		struct FGFactoryConnectionComponent_eventFactory_PeekOutput_Parms
		{
			TArray<FInventoryItem> out_items;
			TSubclassOf<UFGItemDescriptor>  type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFactoryConnectionComponent_eventFactory_PeekOutput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGFactoryConnectionComponent_eventFactory_PeekOutput_Parms), &Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Class, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_PeekOutput_Parms, type), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_out_items = { UE4CodeGen_Private::EPropertyClass::Array, "out_items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventFactory_PeekOutput_Parms, out_items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_out_items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_out_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::NewProp_out_items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "CPP_Default_type", "None" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Check this connection has a output\n@param type - Optionally check the type of the output, nullptr for any.\n@return true if it has output; false if no output or" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "Factory_PeekOutput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGFactoryConnectionComponent_eventFactory_PeekOutput_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics
	{
		struct FGFactoryConnectionComponent_eventGetConnector_Parms
		{
			EFactoryConnectionConnector ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventGetConnector_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Return the connector used for this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "GetConnector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFactoryConnectionComponent_eventGetConnector_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics
	{
		struct FGFactoryConnectionComponent_eventGetConnectorClearance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventGetConnectorClearance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Return the clearance needed when routing a conveyor belt from this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "GetConnectorClearance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFactoryConnectionComponent_eventGetConnectorClearance_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics
	{
		struct FGFactoryConnectionComponent_eventGetDirection_Parms
		{
			EFactoryConnectionDirection ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventGetDirection_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Return the direction for this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "GetDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFactoryConnectionComponent_eventGetDirection_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics
	{
		struct FGFactoryConnectionComponent_eventGetInventory_Parms
		{
			UFGInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGFactoryConnectionComponent_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Return the inventory associated with this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "GetInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFactoryConnectionComponent_eventGetInventory_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics
	{
		struct FGFactoryConnectionComponent_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFactoryConnectionComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGFactoryConnectionComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Is this connection connected to anything.\n@return - true if connected; otherwise false. Always false if attached to hologram, snap only or bad index configuration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryConnectionComponent, "IsConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFactoryConnectionComponent_eventIsConnected_Parms), Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister()
	{
		return UFGFactoryConnectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGFactoryConnectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mForwardPeekAndGrabToBuildable_MetaData[];
#endif
		static void NewProp_mForwardPeekAndGrabToBuildable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mForwardPeekAndGrabToBuildable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasConnectedComponent_MetaData[];
#endif
		static void NewProp_mHasConnectedComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasConnectedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectorClearance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mConnectorClearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnector_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mConnector;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mConnector_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGConnectionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_GrabOutput, "Factory_GrabOutput" }, // 1601664186
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_GrabOutputInventory, "Factory_Internal_GrabOutputInventory" }, // 1801456300
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_Internal_PeekOutputInventory, "Factory_Internal_PeekOutputInventory" }, // 2285049996
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_Factory_PeekOutput, "Factory_PeekOutput" }, // 3383515352
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnector, "GetConnector" }, // 2617849654
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_GetConnectorClearance, "GetConnectorClearance" }, // 3036089438
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_GetDirection, "GetDirection" }, // 133298691
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_GetInventory, "GetInventory" }, // 1935929375
		{ &Z_Construct_UFunction_UFGFactoryConnectionComponent_IsConnected, "IsConnected" }, // 871298789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGFactoryConnectionComponent.h" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "This component is used on factories to connect to." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mForwardPeekAndGrabToBuildable_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Forward implementation details to our owner." },
	};
#endif
	void Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mForwardPeekAndGrabToBuildable_SetBit(void* Obj)
	{
		((UFGFactoryConnectionComponent*)Obj)->mForwardPeekAndGrabToBuildable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mForwardPeekAndGrabToBuildable = { UE4CodeGen_Private::EPropertyClass::Bool, "mForwardPeekAndGrabToBuildable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFGFactoryConnectionComponent), &Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mForwardPeekAndGrabToBuildable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mForwardPeekAndGrabToBuildable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mForwardPeekAndGrabToBuildable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectionInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "The inventory of this connection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectionInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mConnectionInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001080008, 1, nullptr, STRUCT_OFFSET(UFGFactoryConnectionComponent, mConnectionInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectionInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectionInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mHasConnectedComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mHasConnectedComponent_SetBit(void* Obj)
	{
		((UFGFactoryConnectionComponent*)Obj)->mHasConnectedComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mHasConnectedComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasConnectedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGFactoryConnectionComponent), &Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mHasConnectedComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mHasConnectedComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mHasConnectedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Connection to another component. If this is set we're connected." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mConnectedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001080008, 1, nullptr, STRUCT_OFFSET(UFGFactoryConnectionComponent, mConnectedComponent), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectedComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectorClearance_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "How long the connector is extending, indicates where the connected conveyor may start turning." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectorClearance = { UE4CodeGen_Private::EPropertyClass::Float, "mConnectorClearance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGFactoryConnectionComponent, mConnectorClearance), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectorClearance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectorClearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mDirection_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Direction for this connection." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mDirection = { UE4CodeGen_Private::EPropertyClass::Enum, "mDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001010001, 1, nullptr, STRUCT_OFFSET(UFGFactoryConnectionComponent, mDirection), Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mDirection_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnector_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/FGFactoryConnectionComponent.h" },
		{ "ToolTip", "Physical type of connector used for this connection." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnector = { UE4CodeGen_Private::EPropertyClass::Enum, "mConnector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGFactoryConnectionComponent, mConnector), Z_Construct_UEnum_FactoryGame_EFactoryConnectionConnector, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnector_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnector_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnector_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mForwardPeekAndGrabToBuildable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectionInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mHasConnectedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnectorClearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::NewProp_mConnector_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGFactoryConnectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::ClassParams = {
		&UFGFactoryConnectionComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGFactoryConnectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGFactoryConnectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGFactoryConnectionComponent, 3690190364);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGFactoryConnectionComponent(Z_Construct_UClass_UFGFactoryConnectionComponent, &UFGFactoryConnectionComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGFactoryConnectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGFactoryConnectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
