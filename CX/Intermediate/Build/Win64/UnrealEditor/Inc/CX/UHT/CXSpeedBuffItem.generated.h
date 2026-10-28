// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/CXSpeedBuffItem.h"

#ifdef CX_CXSpeedBuffItem_generated_h
#error "CXSpeedBuffItem.generated.h already included, missing '#pragma once' in CXSpeedBuffItem.h"
#endif
#define CX_CXSpeedBuffItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACXSpeedBuffItem *********************************************************
#define FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPickupEffect_Implementation(); \
	DECLARE_FUNCTION(execMulticastPickupEffect); \
	DECLARE_FUNCTION(execOnOverlapSphereBeginOverlap);


#define FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_CALLBACK_WRAPPERS
CX_API UClass* Z_Construct_UClass_ACXSpeedBuffItem_NoRegister();

#define FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXSpeedBuffItem(); \
	friend struct Z_Construct_UClass_ACXSpeedBuffItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CX_API UClass* Z_Construct_UClass_ACXSpeedBuffItem_NoRegister(); \
public: \
	DECLARE_CLASS2(ACXSpeedBuffItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), Z_Construct_UClass_ACXSpeedBuffItem_NoRegister) \
	DECLARE_SERIALIZER(ACXSpeedBuffItem)


#define FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACXSpeedBuffItem(ACXSpeedBuffItem&&) = delete; \
	ACXSpeedBuffItem(const ACXSpeedBuffItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXSpeedBuffItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXSpeedBuffItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXSpeedBuffItem) \
	NO_API virtual ~ACXSpeedBuffItem();


#define FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_16_PROLOG
#define FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_CALLBACK_WRAPPERS \
	FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_INCLASS_NO_PURE_DECLS \
	FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACXSpeedBuffItem;

// ********** End Class ACXSpeedBuffItem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UR5_CX_Source_CX_Item_CXSpeedBuffItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
