// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/ChatSubsystem.h"

#ifdef CX_ChatSubsystem_generated_h
#error "ChatSubsystem.generated.h already included, missing '#pragma once' in ChatSubsystem.h"
#endif
#define CX_ChatSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChatData *********************************************************
#define FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatData_Statics; \
	CX_API static class UScriptStruct* StaticStruct();


struct FChatData;
// ********** End ScriptStruct FChatData ***********************************************************

// ********** Begin Class UChatSubsystem ***********************************************************
CX_API UClass* Z_Construct_UClass_UChatSubsystem_NoRegister();

#define FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatSubsystem(); \
	friend struct Z_Construct_UClass_UChatSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_UChatSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UChatSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_UChatSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UChatSubsystem)


#define FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChatSubsystem(UChatSubsystem&&) = delete; \
	UChatSubsystem(const UChatSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChatSubsystem) \
	NO_API virtual ~UChatSubsystem();


#define FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h_27_PROLOG
#define FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChatSubsystem;

// ********** End Class UChatSubsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
