// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Item/CXItemSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXItemSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CX_API UClass* Z_Construct_UClass_ACXItemSpawner();
CX_API UClass* Z_Construct_UClass_ACXItemSpawner_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACXItemSpawner Function OnItemDestroyed **********************************
struct Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics
{
	struct CXItemSpawner_eventOnItemDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/CXItemSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXItemSpawner_eventOnItemDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXItemSpawner, nullptr, "OnItemDestroyed", Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::CXItemSpawner_eventOnItemDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::CXItemSpawner_eventOnItemDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXItemSpawner::execOnItemDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class ACXItemSpawner Function OnItemDestroyed ************************************

// ********** Begin Class ACXItemSpawner ***********************************************************
void ACXItemSpawner::StaticRegisterNativesACXItemSpawner()
{
	UClass* Class = ACXItemSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnItemDestroyed", &ACXItemSpawner::execOnItemDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACXItemSpawner;
UClass* ACXItemSpawner::GetPrivateStaticClass()
{
	using TClass = ACXItemSpawner;
	if (!Z_Registration_Info_UClass_ACXItemSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXItemSpawner"),
			Z_Registration_Info_UClass_ACXItemSpawner.InnerSingleton,
			StaticRegisterNativesACXItemSpawner,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACXItemSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_ACXItemSpawner_NoRegister()
{
	return ACXItemSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACXItemSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item/CXItemSpawner.h" },
		{ "ModuleRelativePath", "Item/CXItemSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Item/CXItemSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Item/CXItemSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedItem_MetaData[] = {
		{ "ModuleRelativePath", "Item/CXItemSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed, "OnItemDestroyed" }, // 12641353
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXItemSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXItemSpawner, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXItemSpawner, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInterval_MetaData), NewProp_SpawnInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_SpawnedItem = { "SpawnedItem", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXItemSpawner, SpawnedItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedItem_MetaData), NewProp_SpawnedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXItemSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_SpawnInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_SpawnedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXItemSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXItemSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXItemSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXItemSpawner_Statics::ClassParams = {
	&ACXItemSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXItemSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXItemSpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXItemSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXItemSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXItemSpawner()
{
	if (!Z_Registration_Info_UClass_ACXItemSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXItemSpawner.OuterSingleton, Z_Construct_UClass_ACXItemSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXItemSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXItemSpawner);
ACXItemSpawner::~ACXItemSpawner() {}
// ********** End Class ACXItemSpawner *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Item_CXItemSpawner_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXItemSpawner, ACXItemSpawner::StaticClass, TEXT("ACXItemSpawner"), &Z_Registration_Info_UClass_ACXItemSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXItemSpawner), 1646028834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Item_CXItemSpawner_h__Script_CX_1721101042(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Item_CXItemSpawner_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Item_CXItemSpawner_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
