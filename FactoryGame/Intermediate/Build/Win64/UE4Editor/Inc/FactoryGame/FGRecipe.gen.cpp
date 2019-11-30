// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGRecipe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRecipe() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetIngredients();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetProducedIn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetProducts();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetRecipeName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRecipe_SortByName();
// End Cross Module References
	void UFGRecipe::StaticRegisterNativesUFGRecipe()
	{
		UClass* Class = UFGRecipe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIngredients", &UFGRecipe::execGetIngredients },
			{ "GetManufacturingDuration", &UFGRecipe::execGetManufacturingDuration },
			{ "GetProducedIn", &UFGRecipe::execGetProducedIn },
			{ "GetProducts", &UFGRecipe::execGetProducts },
			{ "GetRecipeName", &UFGRecipe::execGetRecipeName },
			{ "GetRewardedRecipes", &UFGRecipe::execGetRewardedRecipes },
			{ "IsRecipeAffordable", &UFGRecipe::execIsRecipeAffordable },
			{ "SortByName", &UFGRecipe::execSortByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics
	{
		struct FGRecipe_eventGetIngredients_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetIngredients_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetIngredients_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Used to get the ingredients in blueprint. @todo: Make return value a out value instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, nullptr, "GetIngredients", sizeof(FGRecipe_eventGetIngredients_Parms), Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetIngredients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetIngredients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics
	{
		struct FGRecipe_eventGetManufacturingDuration_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetManufacturingDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetManufacturingDuration_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Used to get the manufacturing duration in blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, nullptr, "GetManufacturingDuration", sizeof(FGRecipe_eventGetManufacturingDuration_Parms), Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics
	{
		struct FGRecipe_eventGetProducedIn_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
			TArray<TSubclassOf<UObject> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetProducedIn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetProducedIn_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "@todo: change return value to out variable. Used to get the produced in buildings in blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, nullptr, "GetProducedIn", sizeof(FGRecipe_eventGetProducedIn_Parms), Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetProducedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetProducedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetProducts_Statics
	{
		struct FGRecipe_eventGetProducts_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
			bool allowChildRecipes;
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_allowChildRecipes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowChildRecipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetProducts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_allowChildRecipes_SetBit(void* Obj)
	{
		((FGRecipe_eventGetProducts_Parms*)Obj)->allowChildRecipes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_allowChildRecipes = { "allowChildRecipes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRecipe_eventGetProducts_Parms), &Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_allowChildRecipes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetProducts_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_allowChildRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "CPP_Default_allowChildRecipes", "false" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Used to get the products in blueprint. @todo: Make return value a out value instead, @todo remove unused allowChildRecipes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, nullptr, "GetProducts", sizeof(FGRecipe_eventGetProducts_Parms), Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetProducts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetProducts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics
	{
		struct FGRecipe_eventGetRecipeName_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetRecipeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetRecipeName_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Used to get the recipe name in blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, nullptr, "GetRecipeName", sizeof(FGRecipe_eventGetRecipeName_Parms), Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetRecipeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetRecipeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics
	{
		struct FGRecipe_eventGetRewardedRecipes_Parms
		{
			TSubclassOf<UFGRecipe>  inClass;
			TArray<TSubclassOf<UFGRecipe> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetRewardedRecipes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventGetRewardedRecipes_Parms, inClass), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "MAM is rewritten, use the new system instead!" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Used to get the products in blueprint. @todo Deprecated since 2018-10-23, but have been unused since MAM refactor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, nullptr, "GetRewardedRecipes", sizeof(FGRecipe_eventGetRewardedRecipes_Parms), Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics
	{
		struct FGRecipe_eventIsRecipeAffordable_Parms
		{
			AFGCharacterPlayer* player;
			TSubclassOf<UFGRecipe>  recipe;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRecipe_eventIsRecipeAffordable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRecipe_eventIsRecipeAffordable_Parms), &Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventIsRecipeAffordable_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventIsRecipeAffordable_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_recipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Can the given player afford the recipe" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, nullptr, "IsRecipeAffordable", sizeof(FGRecipe_eventIsRecipeAffordable_Parms), Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRecipe_SortByName_Statics
	{
		struct FGRecipe_eventSortByName_Parms
		{
			TArray<TSubclassOf<UFGRecipe> > recipes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_recipes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGRecipe_SortByName_Statics::NewProp_recipes = { "recipes", nullptr, (EPropertyFlags)0x0014000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRecipe_eventSortByName_Parms, recipes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRecipe_SortByName_Statics::NewProp_recipes_Inner = { "recipes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRecipe_SortByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_SortByName_Statics::NewProp_recipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRecipe_SortByName_Statics::NewProp_recipes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRecipe_SortByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Sort a array dependent on their names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRecipe_SortByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRecipe, nullptr, "SortByName", sizeof(FGRecipe_eventSortByName_Parms), Z_Construct_UFunction_UFGRecipe_SortByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_SortByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRecipe_SortByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRecipe_SortByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRecipe_SortByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRecipe_SortByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRecipe_NoRegister()
	{
		return UFGRecipe::StaticClass();
	}
	struct Z_Construct_UClass_UFGRecipe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProducedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mProducedIn;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_mProducedIn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mManufactoringDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mManufactoringDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProduct_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mProduct;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mProduct_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIngredients_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mIngredients;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mIngredients_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayNameOverride_MetaData[];
#endif
		static void NewProp_mDisplayNameOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDisplayNameOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRecipe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRecipe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRecipe_GetIngredients, "GetIngredients" }, // 4029993028
		{ &Z_Construct_UFunction_UFGRecipe_GetManufacturingDuration, "GetManufacturingDuration" }, // 1694024716
		{ &Z_Construct_UFunction_UFGRecipe_GetProducedIn, "GetProducedIn" }, // 502630461
		{ &Z_Construct_UFunction_UFGRecipe_GetProducts, "GetProducts" }, // 925976853
		{ &Z_Construct_UFunction_UFGRecipe_GetRecipeName, "GetRecipeName" }, // 911879690
		{ &Z_Construct_UFunction_UFGRecipe_GetRewardedRecipes, "GetRewardedRecipes" }, // 2416267019
		{ &Z_Construct_UFunction_UFGRecipe_IsRecipeAffordable, "IsRecipeAffordable" }, // 1178674021
		{ &Z_Construct_UFunction_UFGRecipe_SortByName, "SortByName" }, // 2303391373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::Class_MetaDataParams[] = {
		{ "AutoJSON", "TRUE" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGRecipe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "This is a class describing a recipe, subclass this in blueprint to make a new recipe." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "MustImplement", "FGRecipeProducerInterface" },
		{ "ToolTip", "Defines where this recipe can be produced" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn = { "mProducedIn", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRecipe, mProducedIn), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_Inner = { "mProducedIn", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "The time it takes to produce the output." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration = { "mManufactoringDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRecipe, mManufactoringDuration), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_MetaData[] = {
		{ "Category", "Rewards" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "The products produced from this recipe." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct = { "mProduct", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRecipe, mProduct), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_Inner = { "mProduct", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Ingredients needed to produce the products." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients = { "mIngredients", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRecipe, mIngredients), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_Inner = { "mIngredients", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "Recipe" },
		{ "EditCondition", "mDisplayNameOverride" },
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "ToolTip", "Overridden name for this recipe, if mDisplayNameOverride is false the first product's item name is used." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName = { "mDisplayName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGRecipe, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRecipe.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "If we override the display name or get it from the first products item name." },
	};
#endif
	void Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_SetBit(void* Obj)
	{
		((UFGRecipe*)Obj)->mDisplayNameOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride = { "mDisplayNameOverride", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGRecipe), &Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProducedIn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mManufactoringDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mProduct_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mIngredients_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGRecipe_Statics::NewProp_mDisplayNameOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRecipe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGRecipe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRecipe_Statics::ClassParams = {
		&UFGRecipe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGRecipe_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGRecipe_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRecipe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRecipe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRecipe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRecipe, 524677784);
	template<> FACTORYGAME_API UClass* StaticClass<UFGRecipe>()
	{
		return UFGRecipe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRecipe(Z_Construct_UClass_UFGRecipe, &UFGRecipe::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRecipe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRecipe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
