// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGVehicle;
#ifdef FACTORYGAME_FGPassengerSeat_generated_h
#error "FGPassengerSeat.generated.h already included, missing '#pragma once' in FGPassengerSeat.h"
#endif
#define FACTORYGAME_FGPassengerSeat_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOuterVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGVehicle**)Z_Param__Result=P_THIS->GetOuterVehicle(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOuterVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGVehicle**)Z_Param__Result=P_THIS->GetOuterVehicle(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPassengerSeat(); \
	friend struct Z_Construct_UClass_AFGPassengerSeat_Statics; \
public: \
	DECLARE_CLASS(AFGPassengerSeat, AFGDriveablePawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPassengerSeat)


#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGPassengerSeat(); \
	friend struct Z_Construct_UClass_AFGPassengerSeat_Statics; \
public: \
	DECLARE_CLASS(AFGPassengerSeat, AFGDriveablePawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPassengerSeat)


#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPassengerSeat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPassengerSeat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPassengerSeat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPassengerSeat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPassengerSeat(AFGPassengerSeat&&); \
	NO_API AFGPassengerSeat(const AFGPassengerSeat&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPassengerSeat(AFGPassengerSeat&&); \
	NO_API AFGPassengerSeat(const AFGPassengerSeat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPassengerSeat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPassengerSeat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPassengerSeat)


#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGPassengerSeat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
