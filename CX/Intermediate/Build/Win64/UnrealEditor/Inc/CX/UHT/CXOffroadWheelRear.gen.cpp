// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXOffroadWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXOffroadWheelRear() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_UCXOffroadWheelRear();
CX_API UClass* Z_Construct_UClass_UCXOffroadWheelRear_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXWheelRear();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCXOffroadWheelRear ******************************************************
void UCXOffroadWheelRear::StaticRegisterNativesUCXOffroadWheelRear()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCXOffroadWheelRear;
UClass* UCXOffroadWheelRear::GetPrivateStaticClass()
{
	using TClass = UCXOffroadWheelRear;
	if (!Z_Registration_Info_UClass_UCXOffroadWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXOffroadWheelRear"),
			Z_Registration_Info_UClass_UCXOffroadWheelRear.InnerSingleton,
			StaticRegisterNativesUCXOffroadWheelRear,
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
	return Z_Registration_Info_UClass_UCXOffroadWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UCXOffroadWheelRear_NoRegister()
{
	return UCXOffroadWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCXOffroadWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "CXOffroadWheelRear.h" },
		{ "ModuleRelativePath", "CXOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXOffroadWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXOffroadWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCXWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXOffroadWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXOffroadWheelRear_Statics::ClassParams = {
	&UCXOffroadWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXOffroadWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXOffroadWheelRear()
{
	if (!Z_Registration_Info_UClass_UCXOffroadWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXOffroadWheelRear.OuterSingleton, Z_Construct_UClass_UCXOffroadWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXOffroadWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXOffroadWheelRear);
UCXOffroadWheelRear::~UCXOffroadWheelRear() {}
// ********** End Class UCXOffroadWheelRear ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXOffroadWheelRear_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXOffroadWheelRear, UCXOffroadWheelRear::StaticClass, TEXT("UCXOffroadWheelRear"), &Z_Registration_Info_UClass_UCXOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXOffroadWheelRear), 556470508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXOffroadWheelRear_h__Script_CX_4238269633(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXOffroadWheelRear_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXOffroadWheelRear_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
