// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXPlayerController.h"

#ifdef CX_CXPlayerController_generated_h
#error "CXPlayerController.generated.h already included, missing '#pragma once' in CXPlayerController.h"
#endif
#define CX_CXPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FChatData;

// ********** Begin Class ACXPlayerController ******************************************************
#define FID_UR5_CX_Source_CX_CXPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void STCGameResult_Implementation(bool bIsWinner); \
	virtual void STCChatLog_Implementation(TArray<FChatData> const& ChatLog); \
	virtual void STCChatMessage_Implementation(const FString& Sender, const FString& Message); \
	virtual void CTSChatMessage_Implementation(const FString& Message); \
	DECLARE_FUNCTION(execSTCGameResult); \
	DECLARE_FUNCTION(execSTCChatLog); \
	DECLARE_FUNCTION(execSTCChatMessage); \
	DECLARE_FUNCTION(execCTSChatMessage);


#define FID_UR5_CX_Source_CX_CXPlayerController_h_21_CALLBACK_WRAPPERS
CX_API UClass* Z_Construct_UClass_ACXPlayerController_NoRegister();

#define FID_UR5_CX_Source_CX_CXPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPlayerController(); \
	friend struct Z_Construct_UClass_ACXPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_ACXPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACXPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_ACXPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACXPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		VehiclePawn=NETFIELD_REP_START, \
		NETFIELD_REP_END=VehiclePawn	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_UR5_CX_Source_CX_CXPlayerController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACXPlayerController(ACXPlayerController&&) = delete; \
	ACXPlayerController(const ACXPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXPlayerController) \
	NO_API virtual ~ACXPlayerController();


#define FID_UR5_CX_Source_CX_CXPlayerController_h_18_PROLOG
#define FID_UR5_CX_Source_CX_CXPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_CXPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_CXPlayerController_h_21_CALLBACK_WRAPPERS \
	FID_UR5_CX_Source_CX_CXPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_CXPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACXPlayerController;

// ********** End Class ACXPlayerController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_CXPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
