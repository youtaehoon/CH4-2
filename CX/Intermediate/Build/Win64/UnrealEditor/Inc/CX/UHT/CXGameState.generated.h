// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameState/CXGameState.h"

#ifdef CX_CXGameState_generated_h
#error "CXGameState.generated.h already included, missing '#pragma once' in CXGameState.h"
#endif
#define CX_CXGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EGameState : uint8;

// ********** Begin Class ACXGameState *************************************************************
#define FID_UR5_CX_Source_CX_GameState_CXGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentGameState); \
	DECLARE_FUNCTION(execGetRemainingTime);


CX_API UClass* Z_Construct_UClass_ACXGameState_NoRegister();

#define FID_UR5_CX_Source_CX_GameState_CXGameState_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXGameState(); \
	friend struct Z_Construct_UClass_ACXGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_ACXGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACXGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_ACXGameState_NoRegister) \
	DECLARE_SERIALIZER(ACXGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentGameState=NETFIELD_REP_START, \
		RemainingTime, \
		Winners, \
		NETFIELD_REP_END=Winners	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_UR5_CX_Source_CX_GameState_CXGameState_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACXGameState(ACXGameState&&) = delete; \
	ACXGameState(const ACXGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXGameState) \
	NO_API virtual ~ACXGameState();


#define FID_UR5_CX_Source_CX_GameState_CXGameState_h_21_PROLOG
#define FID_UR5_CX_Source_CX_GameState_CXGameState_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_GameState_CXGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_GameState_CXGameState_h_24_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_GameState_CXGameState_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACXGameState;

// ********** End Class ACXGameState ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_GameState_CXGameState_h

// ********** Begin Enum EGameState ****************************************************************
#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::Waiting) \
	op(EGameState::Playing) \
	op(EGameState::Finished) 

enum class EGameState : uint8;
template<> struct TIsUEnumClass<EGameState> { enum { Value = true }; };
template<> CX_API UEnum* StaticEnum<EGameState>();
// ********** End Enum EGameState ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
