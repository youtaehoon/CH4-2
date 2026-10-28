// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/CXItemSpawner.h"

#ifdef CX_CXItemSpawner_generated_h
#error "CXItemSpawner.generated.h already included, missing '#pragma once' in CXItemSpawner.h"
#endif
#define CX_CXItemSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ACXItemSpawner ***********************************************************
#define FID_UR5_CX_Source_CX_Item_CXItemSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemDestroyed);


CX_API UClass* Z_Construct_UClass_ACXItemSpawner_NoRegister();

#define FID_UR5_CX_Source_CX_Item_CXItemSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXItemSpawner(); \
	friend struct Z_Construct_UClass_ACXItemSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_ACXItemSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(ACXItemSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_ACXItemSpawner_NoRegister) \
	DECLARE_SERIALIZER(ACXItemSpawner)


#define FID_UR5_CX_Source_CX_Item_CXItemSpawner_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACXItemSpawner(ACXItemSpawner&&) = delete; \
	ACXItemSpawner(const ACXItemSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXItemSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXItemSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXItemSpawner) \
	NO_API virtual ~ACXItemSpawner();


#define FID_UR5_CX_Source_CX_Item_CXItemSpawner_h_11_PROLOG
#define FID_UR5_CX_Source_CX_Item_CXItemSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_Item_CXItemSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_Item_CXItemSpawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_Item_CXItemSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACXItemSpawner;

// ********** End Class ACXItemSpawner *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_Item_CXItemSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
