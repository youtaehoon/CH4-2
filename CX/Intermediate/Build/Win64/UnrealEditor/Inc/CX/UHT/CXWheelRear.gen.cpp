// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXWheelRear() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
CX_API UClass* Z_Construct_UClass_UCXWheelRear();
CX_API UClass* Z_Construct_UClass_UCXWheelRear_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCXWheelRear *************************************************************
void UCXWheelRear::StaticRegisterNativesUCXWheelRear()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCXWheelRear;
UClass* UCXWheelRear::GetPrivateStaticClass()
{
	using TClass = UCXWheelRear;
	if (!Z_Registration_Info_UClass_UCXWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXWheelRear"),
			Z_Registration_Info_UClass_UCXWheelRear.InnerSingleton,
			StaticRegisterNativesUCXWheelRear,
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
	return Z_Registration_Info_UClass_UCXWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UCXWheelRear_NoRegister()
{
	return UCXWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCXWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "CXWheelRear.h" },
		{ "ModuleRelativePath", "CXWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXWheelRear_Statics::ClassParams = {
	&UCXWheelRear::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXWheelRear()
{
	if (!Z_Registration_Info_UClass_UCXWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXWheelRear.OuterSingleton, Z_Construct_UClass_UCXWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXWheelRear);
UCXWheelRear::~UCXWheelRear() {}
// ********** End Class UCXWheelRear ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXWheelRear_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXWheelRear, UCXWheelRear::StaticClass, TEXT("UCXWheelRear"), &Z_Registration_Info_UClass_UCXWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXWheelRear), 377659515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXWheelRear_h__Script_CX_206565255(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXWheelRear_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXWheelRear_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
