// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXOffroadWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXOffroadWheelFront() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_UCXOffroadWheelFront();
CX_API UClass* Z_Construct_UClass_UCXOffroadWheelFront_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXWheelFront();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCXOffroadWheelFront *****************************************************
void UCXOffroadWheelFront::StaticRegisterNativesUCXOffroadWheelFront()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCXOffroadWheelFront;
UClass* UCXOffroadWheelFront::GetPrivateStaticClass()
{
	using TClass = UCXOffroadWheelFront;
	if (!Z_Registration_Info_UClass_UCXOffroadWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXOffroadWheelFront"),
			Z_Registration_Info_UClass_UCXOffroadWheelFront.InnerSingleton,
			StaticRegisterNativesUCXOffroadWheelFront,
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
	return Z_Registration_Info_UClass_UCXOffroadWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UCXOffroadWheelFront_NoRegister()
{
	return UCXOffroadWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCXOffroadWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "CXOffroadWheelFront.h" },
		{ "ModuleRelativePath", "CXOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXOffroadWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXOffroadWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCXWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXOffroadWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXOffroadWheelFront_Statics::ClassParams = {
	&UCXOffroadWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXOffroadWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXOffroadWheelFront()
{
	if (!Z_Registration_Info_UClass_UCXOffroadWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXOffroadWheelFront.OuterSingleton, Z_Construct_UClass_UCXOffroadWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXOffroadWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXOffroadWheelFront);
UCXOffroadWheelFront::~UCXOffroadWheelFront() {}
// ********** End Class UCXOffroadWheelFront *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXOffroadWheelFront_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXOffroadWheelFront, UCXOffroadWheelFront::StaticClass, TEXT("UCXOffroadWheelFront"), &Z_Registration_Info_UClass_UCXOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXOffroadWheelFront), 118146961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXOffroadWheelFront_h__Script_CX_284713437(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXOffroadWheelFront_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXOffroadWheelFront_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
