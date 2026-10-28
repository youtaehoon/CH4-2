// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXSportsWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXSportsWheelFront() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_UCXSportsWheelFront();
CX_API UClass* Z_Construct_UClass_UCXSportsWheelFront_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXWheelFront();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCXSportsWheelFront ******************************************************
void UCXSportsWheelFront::StaticRegisterNativesUCXSportsWheelFront()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCXSportsWheelFront;
UClass* UCXSportsWheelFront::GetPrivateStaticClass()
{
	using TClass = UCXSportsWheelFront;
	if (!Z_Registration_Info_UClass_UCXSportsWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXSportsWheelFront"),
			Z_Registration_Info_UClass_UCXSportsWheelFront.InnerSingleton,
			StaticRegisterNativesUCXSportsWheelFront,
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
	return Z_Registration_Info_UClass_UCXSportsWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UCXSportsWheelFront_NoRegister()
{
	return UCXSportsWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCXSportsWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "CXSportsWheelFront.h" },
		{ "ModuleRelativePath", "CXSportsWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXSportsWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXSportsWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCXWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXSportsWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXSportsWheelFront_Statics::ClassParams = {
	&UCXSportsWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXSportsWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXSportsWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXSportsWheelFront()
{
	if (!Z_Registration_Info_UClass_UCXSportsWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXSportsWheelFront.OuterSingleton, Z_Construct_UClass_UCXSportsWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXSportsWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXSportsWheelFront);
UCXSportsWheelFront::~UCXSportsWheelFront() {}
// ********** End Class UCXSportsWheelFront ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsWheelFront_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXSportsWheelFront, UCXSportsWheelFront::StaticClass, TEXT("UCXSportsWheelFront"), &Z_Registration_Info_UClass_UCXSportsWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXSportsWheelFront), 3872401894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsWheelFront_h__Script_CX_2648434380(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsWheelFront_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsWheelFront_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
