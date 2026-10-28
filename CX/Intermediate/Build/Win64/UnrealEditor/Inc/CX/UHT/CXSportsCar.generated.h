// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXSportsCar.h"

#ifdef CX_CXSportsCar_generated_h
#error "CXSportsCar.generated.h already included, missing '#pragma once' in CXSportsCar.h"
#endif
#define CX_CXSportsCar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACXSportsCar *************************************************************
CX_API UClass* Z_Construct_UClass_ACXSportsCar_NoRegister();

#define FID_UR5_CX_Source_CX_CXSportsCar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXSportsCar(); \
	friend struct Z_Construct_UClass_ACXSportsCar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_ACXSportsCar_NoRegister(); \
public: \
	DECLARE_CLASS2(ACXSportsCar, ACXPawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_ACXSportsCar_NoRegister) \
	DECLARE_SERIALIZER(ACXSportsCar)


#define FID_UR5_CX_Source_CX_CXSportsCar_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACXSportsCar(ACXSportsCar&&) = delete; \
	ACXSportsCar(const ACXSportsCar&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXSportsCar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXSportsCar); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACXSportsCar) \
	NO_API virtual ~ACXSportsCar();


#define FID_UR5_CX_Source_CX_CXSportsCar_h_12_PROLOG
#define FID_UR5_CX_Source_CX_CXSportsCar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_CXSportsCar_h_15_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_CXSportsCar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACXSportsCar;

// ********** End Class ACXSportsCar ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_CXSportsCar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
