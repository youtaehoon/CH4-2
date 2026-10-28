// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CX_API UClass* Z_Construct_UClass_ACXGameMode();
CX_API UClass* Z_Construct_UClass_ACXGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACXGameMode **************************************************************
void ACXGameMode::StaticRegisterNativesACXGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACXGameMode;
UClass* ACXGameMode::GetPrivateStaticClass()
{
	using TClass = ACXGameMode;
	if (!Z_Registration_Info_UClass_ACXGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXGameMode"),
			Z_Registration_Info_UClass_ACXGameMode.InnerSingleton,
			StaticRegisterNativesACXGameMode,
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
	return Z_Registration_Info_UClass_ACXGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACXGameMode_NoRegister()
{
	return ACXGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACXGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CXGameMode.h" },
		{ "ModuleRelativePath", "CXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleSpawnCheckHalfExtent_MetaData[] = {
		{ "Category", "CXGameMode" },
		{ "ModuleRelativePath", "CXGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleSpawnCheckOffset_MetaData[] = {
		{ "Category", "CXGameMode" },
		{ "ModuleRelativePath", "CXGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VehicleSpawnCheckHalfExtent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VehicleSpawnCheckOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACXGameMode_Statics::NewProp_VehicleSpawnCheckHalfExtent = { "VehicleSpawnCheckHalfExtent", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameMode, VehicleSpawnCheckHalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleSpawnCheckHalfExtent_MetaData), NewProp_VehicleSpawnCheckHalfExtent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACXGameMode_Statics::NewProp_VehicleSpawnCheckOffset = { "VehicleSpawnCheckOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameMode, VehicleSpawnCheckOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleSpawnCheckOffset_MetaData), NewProp_VehicleSpawnCheckOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameMode_Statics::NewProp_VehicleSpawnCheckHalfExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameMode_Statics::NewProp_VehicleSpawnCheckOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXGameMode_Statics::ClassParams = {
	&ACXGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACXGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameMode_Statics::PropPointers),
	0,
	0x008803ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXGameMode()
{
	if (!Z_Registration_Info_UClass_ACXGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXGameMode.OuterSingleton, Z_Construct_UClass_ACXGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXGameMode);
ACXGameMode::~ACXGameMode() {}
// ********** End Class ACXGameMode ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXGameMode_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXGameMode, ACXGameMode::StaticClass, TEXT("ACXGameMode"), &Z_Registration_Info_UClass_ACXGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXGameMode), 2910156643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXGameMode_h__Script_CX_3928051941(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXGameMode_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXGameMode_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
