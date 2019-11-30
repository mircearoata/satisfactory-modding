// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGPowerConnectionComponent;
class UFGPowerCircuit;
#ifdef FACTORYGAME_FGBuildablePowerPole_generated_h
#error "FGBuildablePowerPole.generated.h already included, missing '#pragma once' in FGBuildablePowerPole.h"
#endif
#define FACTORYGAME_FGBuildablePowerPole_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCachedNumConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCachedNumConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerConnection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerConnectionComponent**)Z_Param__Result=P_THIS->GetPowerConnection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerCircuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerCircuit**)Z_Param__Result=P_THIS->GetPowerCircuit(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCachedNumConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCachedNumConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerConnection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerConnectionComponent**)Z_Param__Result=P_THIS->GetPowerConnection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerCircuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPowerCircuit**)Z_Param__Result=P_THIS->GetPowerCircuit(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildablePowerPole(); \
	friend struct Z_Construct_UClass_AFGBuildablePowerPole_Statics; \
public: \
	DECLARE_CLASS(AFGBuildablePowerPole, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildablePowerPole)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildablePowerPole(); \
	friend struct Z_Construct_UClass_AFGBuildablePowerPole_Statics; \
public: \
	DECLARE_CLASS(AFGBuildablePowerPole, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildablePowerPole)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildablePowerPole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildablePowerPole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildablePowerPole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildablePowerPole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildablePowerPole(AFGBuildablePowerPole&&); \
	NO_API AFGBuildablePowerPole(const AFGBuildablePowerPole&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildablePowerPole(AFGBuildablePowerPole&&); \
	NO_API AFGBuildablePowerPole(const AFGBuildablePowerPole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildablePowerPole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildablePowerPole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildablePowerPole)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mConnectionsWidget() { return STRUCT_OFFSET(AFGBuildablePowerPole, mConnectionsWidget); } \
	FORCEINLINE static uint32 __PPO__mPowerConnection() { return STRUCT_OFFSET(AFGBuildablePowerPole, mPowerConnection); } \
	FORCEINLINE static uint32 __PPO__mMeshComponentProxy() { return STRUCT_OFFSET(AFGBuildablePowerPole, mMeshComponentProxy); } \
	FORCEINLINE static uint32 __PPO__mCachedNumConnectionsToPole() { return STRUCT_OFFSET(AFGBuildablePowerPole, mCachedNumConnectionsToPole); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildablePowerPole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
