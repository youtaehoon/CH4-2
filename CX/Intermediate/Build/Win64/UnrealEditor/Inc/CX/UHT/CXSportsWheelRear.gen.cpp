// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXSportsWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXSportsWheelRear() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_UCXSportsWheelRear();
CX_API UClass* Z_Construct_UClass_UCXSportsWheelRear_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXWheelRear();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCXSportsWheelRear *******************************************************
void UCXSportsWheelRear::StaticRegisterNativesUCXSportsWheelRear()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCXSportsWheelRear;
UClass* UCXSportsWheelRear::GetPrivateStaticClass()
{
	using TClass = UCXSportsWheelRear;
	if (!Z_Registration_Info_UClass_UCXSportsWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXSportsWheelRear"),
			Z_Registration_Info_UClass_UCXSportsWheelRear.InnerSingleton,
			StaticRegisterNativesUCXSportsWheelRear,
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
	return Z_Registration_Info_UClass_UCXSportsWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UCXSportsWheelRear_NoRegister()
{
	return UCXSportsWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCXSportsWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "CXSportsWheelRear.h" },
		{ "ModuleRelativePath", "CXSportsWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXSportsWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXSportsWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCXWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXSportsWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXSportsWheelRear_Statics::ClassParams = {
	&UCXSportsWheelRear::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXSportsWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXSportsWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXSportsWheelRear()
{
	if (!Z_Registration_Info_UClass_UCXSportsWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXSportsWheelRear.OuterSingleton, Z_Construct_UClass_UCXSportsWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXSportsWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXSportsWheelRear);
UCXSportsWheelRear::~UCXSportsWheelRear() {}
// ********** End Class UCXSportsWheelRear *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsWheelRear_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXSportsWheelRear, UCXSportsWheelRear::StaticClass, TEXT("UCXSportsWheelRear"), &Z_Registration_Info_UClass_UCXSportsWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXSportsWheelRear), 1514232067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsWheelRear_h__Script_CX_1347277309(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsWheelRear_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsWheelRear_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
