// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystem/ChatSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeChatSubsystem() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_UChatSubsystem();
CX_API UClass* Z_Construct_UClass_UChatSubsystem_NoRegister();
CX_API UScriptStruct* Z_Construct_UScriptStruct_FChatData();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FChatData *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FChatData;
class UScriptStruct* FChatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FChatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FChatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatData, (UObject*)Z_Construct_UPackage__Script_CX(), TEXT("ChatData"));
	}
	return Z_Registration_Info_UScriptStruct_FChatData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FChatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/ChatSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[] = {
		{ "ModuleRelativePath", "Subsystem/ChatSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Subsystem/ChatSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sender;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatData_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatData, Sender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sender_MetaData), NewProp_Sender_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatData, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatData_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatData_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
	nullptr,
	&NewStructOps,
	"ChatData",
	Z_Construct_UScriptStruct_FChatData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatData_Statics::PropPointers),
	sizeof(FChatData),
	alignof(FChatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChatData()
{
	if (!Z_Registration_Info_UScriptStruct_FChatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FChatData.InnerSingleton, Z_Construct_UScriptStruct_FChatData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FChatData.InnerSingleton;
}
// ********** End ScriptStruct FChatData ***********************************************************

// ********** Begin Class UChatSubsystem ***********************************************************
void UChatSubsystem::StaticRegisterNativesUChatSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UChatSubsystem;
UClass* UChatSubsystem::GetPrivateStaticClass()
{
	using TClass = UChatSubsystem;
	if (!Z_Registration_Info_UClass_UChatSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ChatSubsystem"),
			Z_Registration_Info_UClass_UChatSubsystem.InnerSingleton,
			StaticRegisterNativesUChatSubsystem,
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
	return Z_Registration_Info_UClass_UChatSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UChatSubsystem_NoRegister()
{
	return UChatSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UChatSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystem/ChatSubsystem.h" },
		{ "ModuleRelativePath", "Subsystem/ChatSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChatSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatSubsystem_Statics::ClassParams = {
	&UChatSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChatSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UChatSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChatSubsystem()
{
	if (!Z_Registration_Info_UClass_UChatSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatSubsystem.OuterSingleton, Z_Construct_UClass_UChatSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChatSubsystem.OuterSingleton;
}
UChatSubsystem::UChatSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChatSubsystem);
UChatSubsystem::~UChatSubsystem() {}
// ********** End Class UChatSubsystem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h__Script_CX_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChatData::StaticStruct, Z_Construct_UScriptStruct_FChatData_Statics::NewStructOps, TEXT("ChatData"), &Z_Registration_Info_UScriptStruct_FChatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChatData), 1073882534U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChatSubsystem, UChatSubsystem::StaticClass, TEXT("UChatSubsystem"), &Z_Registration_Info_UClass_UChatSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatSubsystem), 3766159801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h__Script_CX_1715894342(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h__Script_CX_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h__Script_CX_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_Subsystem_ChatSubsystem_h__Script_CX_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
