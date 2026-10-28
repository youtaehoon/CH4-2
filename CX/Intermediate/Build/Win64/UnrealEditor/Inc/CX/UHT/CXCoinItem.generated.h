// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/CXCoinItem.h"

#ifdef CX_CXCoinItem_generated_h
#error "CXCoinItem.generated.h already included, missing '#pragma once' in CXCoinItem.h"
#endif
#define CX_CXCoinItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACXCoinItem **************************************************************
#define FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPickupEffect_Implementation(); \
	DECLARE_FUNCTION(execMulticastPickupEffect); \
	DECLARE_FUNCTION(execOnOverlapSphereBeginOverlap);


#define FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_CALLBACK_WRAPPERS
CX_API UClass* Z_Construct_UClass_ACXCoinItem_NoRegister();

#define FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXCoinItem(); \
	friend struct Z_Construct_UClass_ACXCoinItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_ACXCoinItem_NoRegister(); \
public: \
	DECLARE_CLASS2(ACXCoinItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_ACXCoinItem_NoRegister) \
	DECLARE_SERIALIZER(ACXCoinItem)


#define FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACXCoinItem(ACXCoinItem&&) = delete; \
	ACXCoinItem(const ACXCoinItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXCoinItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXCoinItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXCoinItem) \
	NO_API virtual ~ACXCoinItem();


#define FID_UR5_CX_Source_CX_Item_CXCoinItem_h_16_PROLOG
#define FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_CALLBACK_WRAPPERS \
	FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_Item_CXCoinItem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACXCoinItem;

// ********** End Class ACXCoinItem ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_Item_CXCoinItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
