// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Creature/Enemy/FGGameplayTask_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameplayTask_Attack() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_Attack_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_Attack();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_Base();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttack_NoRegister();
// End Cross Module References
	void UFGGameplayTask_Attack::StaticRegisterNativesUFGGameplayTask_Attack()
	{
		UClass* Class = UFGGameplayTask_Attack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackClass", &UFGGameplayTask_Attack::execGetAttackClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics
	{
		struct FGGameplayTask_Attack_eventGetAttackClass_Parms
		{
			TSubclassOf<UFGAttack>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameplayTask_Attack_eventGetAttackClass_Parms, ReturnValue), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_Attack.h" },
		{ "ToolTip", "Gets the attack class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameplayTask_Attack, nullptr, "GetAttackClass", sizeof(FGGameplayTask_Attack_eventGetAttackClass_Parms), Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGGameplayTask_Attack_NoRegister()
	{
		return UFGGameplayTask_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UFGGameplayTask_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAttackClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGameplayTask_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGGameplayTask_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGGameplayTask_Attack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGGameplayTask_Attack_GetAttackClass, "GetAttackClass" }, // 404955768
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_Attack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Creature/Enemy/FGGameplayTask_Attack.h" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_Attack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_Attack_Statics::NewProp_mAttackClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGGameplayTask_Attack_Statics::NewProp_mAttackClass = { "mAttackClass", nullptr, (EPropertyFlags)0x0024080000000020, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGGameplayTask_Attack, mAttackClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_Attack_Statics::NewProp_mAttackClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_Attack_Statics::NewProp_mAttackClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGameplayTask_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameplayTask_Attack_Statics::NewProp_mAttackClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGameplayTask_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGameplayTask_Attack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGameplayTask_Attack_Statics::ClassParams = {
		&UFGGameplayTask_Attack::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGGameplayTask_Attack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_Attack_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_Attack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGameplayTask_Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGameplayTask_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGameplayTask_Attack, 3456869092);
	template<> FACTORYGAME_API UClass* StaticClass<UFGGameplayTask_Attack>()
	{
		return UFGGameplayTask_Attack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGameplayTask_Attack(Z_Construct_UClass_UFGGameplayTask_Attack, &UFGGameplayTask_Attack::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGameplayTask_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGameplayTask_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
