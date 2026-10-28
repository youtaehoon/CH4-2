// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXGameMode.h"

#ifdef CX_CXGameMode_generated_h
#error "CXGameMode.generated.h already included, missing '#pragma once' in CXGameMode.h"
#endif
#define CX_CXGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACXGameMode **************************************************************
CX_API UClass* Z_Construct_UClass_ACXGameMode_NoRegister();

#define FID_UR5_CX_Source_CX_CXGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXGameMode(); \
	friend struct Z_Construct_UClass_ACXGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_ACXGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACXGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_ACXGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACXGameMode)


#define FID_UR5_CX_Source_CX_CXGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACXGameMode(ACXGameMode&&) = delete; \
	ACXGameMode(const ACXGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CX_API, ACXGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXGameMode) \
	CX_API virtual ~ACXGameMode();


#define FID_UR5_CX_Source_CX_CXGameMode_h_9_PROLOG
#define FID_UR5_CX_Source_CX_CXGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_CXGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_CXGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACXGameMode;

// ********** End Class ACXGameMode ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_CXGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
