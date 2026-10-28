// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXWheelFront() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
CX_API UClass* Z_Construct_UClass_UCXWheelFront();
CX_API UClass* Z_Construct_UClass_UCXWheelFront_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCXWheelFront ************************************************************
void UCXWheelFront::StaticRegisterNativesUCXWheelFront()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCXWheelFront;
UClass* UCXWheelFront::GetPrivateStaticClass()
{
	using TClass = UCXWheelFront;
	if (!Z_Registration_Info_UClass_UCXWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXWheelFront"),
			Z_Registration_Info_UClass_UCXWheelFront.InnerSingleton,
			StaticRegisterNativesUCXWheelFront,
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
	return Z_Registration_Info_UClass_UCXWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UCXWheelFront_NoRegister()
{
	return UCXWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCXWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "CXWheelFront.h" },
		{ "ModuleRelativePath", "CXWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXWheelFront_Statics::ClassParams = {
	&UCXWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXWheelFront()
{
	if (!Z_Registration_Info_UClass_UCXWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXWheelFront.OuterSingleton, Z_Construct_UClass_UCXWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXWheelFront);
UCXWheelFront::~UCXWheelFront() {}
// ********** End Class UCXWheelFront **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXWheelFront_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXWheelFront, UCXWheelFront::StaticClass, TEXT("UCXWheelFront"), &Z_Registration_Info_UClass_UCXWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXWheelFront), 1172398975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXWheelFront_h__Script_CX_231255600(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXWheelFront_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXWheelFront_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
