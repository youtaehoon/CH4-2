// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ChatUI.h"

#ifdef CX_ChatUI_generated_h
#error "ChatUI.generated.h already included, missing '#pragma once' in ChatUI.h"
#endif
#define CX_ChatUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChatUI ******************************************************************
#define FID_UR5_CX_Source_CX_UI_ChatUI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


CX_API UClass* Z_Construct_UClass_UChatUI_NoRegister();

#define FID_UR5_CX_Source_CX_UI_ChatUI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatUI(); \
	friend struct Z_Construct_UClass_UChatUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_UChatUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UChatUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_UChatUI_NoRegister) \
	DECLARE_SERIALIZER(UChatUI)


#define FID_UR5_CX_Source_CX_UI_ChatUI_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChatUI(UChatUI&&) = delete; \
	UChatUI(const UChatUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChatUI) \
	NO_API virtual ~UChatUI();


#define FID_UR5_CX_Source_CX_UI_ChatUI_h_15_PROLOG
#define FID_UR5_CX_Source_CX_UI_ChatUI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_UI_ChatUI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_UI_ChatUI_h_18_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_UI_ChatUI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChatUI;

// ********** End Class UChatUI ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_UI_ChatUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
