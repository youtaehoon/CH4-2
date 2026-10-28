// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXUI.h"

#ifdef CX_CXUI_generated_h
#error "CXUI.generated.h already included, missing '#pragma once' in CXUI.h"
#endif
#define CX_CXUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCXUI ********************************************************************
#define FID_UR5_CX_Source_CX_CXUI_h_18_CALLBACK_WRAPPERS
CX_API UClass* Z_Construct_UClass_UCXUI_NoRegister();

#define FID_UR5_CX_Source_CX_CXUI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCXUI(); \
	friend struct Z_Construct_UClass_UCXUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_UCXUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UCXUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_UCXUI_NoRegister) \
	DECLARE_SERIALIZER(UCXUI)


#define FID_UR5_CX_Source_CX_CXUI_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCXUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCXUI(UCXUI&&) = delete; \
	UCXUI(const UCXUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCXUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCXUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCXUI) \
	NO_API virtual ~UCXUI();


#define FID_UR5_CX_Source_CX_CXUI_h_15_PROLOG
#define FID_UR5_CX_Source_CX_CXUI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_CXUI_h_18_CALLBACK_WRAPPERS \
	FID_UR5_CX_Source_CX_CXUI_h_18_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_CXUI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCXUI;

// ********** End Class UCXUI **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_CXUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
