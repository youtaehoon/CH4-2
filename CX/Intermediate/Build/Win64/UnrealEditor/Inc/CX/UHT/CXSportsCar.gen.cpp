// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXSportsCar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXSportsCar() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_ACXPawn();
CX_API UClass* Z_Construct_UClass_ACXSportsCar();
CX_API UClass* Z_Construct_UClass_ACXSportsCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACXSportsCar *************************************************************
void ACXSportsCar::StaticRegisterNativesACXSportsCar()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACXSportsCar;
UClass* ACXSportsCar::GetPrivateStaticClass()
{
	using TClass = ACXSportsCar;
	if (!Z_Registration_Info_UClass_ACXSportsCar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXSportsCar"),
			Z_Registration_Info_UClass_ACXSportsCar.InnerSingleton,
			StaticRegisterNativesACXSportsCar,
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
	return Z_Registration_Info_UClass_ACXSportsCar.InnerSingleton;
}
UClass* Z_Construct_UClass_ACXSportsCar_NoRegister()
{
	return ACXSportsCar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACXSportsCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CXSportsCar.h" },
		{ "ModuleRelativePath", "CXSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXSportsCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACXSportsCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACXPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXSportsCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXSportsCar_Statics::ClassParams = {
	&ACXSportsCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXSportsCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXSportsCar()
{
	if (!Z_Registration_Info_UClass_ACXSportsCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXSportsCar.OuterSingleton, Z_Construct_UClass_ACXSportsCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXSportsCar.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXSportsCar);
ACXSportsCar::~ACXSportsCar() {}
// ********** End Class ACXSportsCar ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsCar_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXSportsCar, ACXSportsCar::StaticClass, TEXT("ACXSportsCar"), &Z_Registration_Info_UClass_ACXSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXSportsCar), 1733472446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsCar_h__Script_CX_3385737963(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsCar_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXSportsCar_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
