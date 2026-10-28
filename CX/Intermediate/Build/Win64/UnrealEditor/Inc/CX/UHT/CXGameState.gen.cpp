// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameState/CXGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXGameState() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_ACXGameState();
CX_API UClass* Z_Construct_UClass_ACXGameState_NoRegister();
CX_API UClass* Z_Construct_UClass_ACXPlayerState_NoRegister();
CX_API UEnum* Z_Construct_UEnum_CX_EGameState();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGameState ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameState;
static UEnum* EGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CX_EGameState, (UObject*)Z_Construct_UPackage__Script_CX(), TEXT("EGameState"));
	}
	return Z_Registration_Info_UEnum_EGameState.OuterSingleton;
}
template<> CX_API UEnum* StaticEnum<EGameState>()
{
	return EGameState_StaticEnum();
}
struct Z_Construct_UEnum_CX_EGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Finished.Name", "EGameState::Finished" },
		{ "ModuleRelativePath", "GameState/CXGameState.h" },
		{ "Playing.Name", "EGameState::Playing" },
		{ "Waiting.Name", "EGameState::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameState::Waiting", (int64)EGameState::Waiting },
		{ "EGameState::Playing", (int64)EGameState::Playing },
		{ "EGameState::Finished", (int64)EGameState::Finished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CX_EGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CX,
	nullptr,
	"EGameState",
	"EGameState",
	Z_Construct_UEnum_CX_EGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CX_EGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CX_EGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CX_EGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CX_EGameState()
{
	if (!Z_Registration_Info_UEnum_EGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameState.InnerSingleton, Z_Construct_UEnum_CX_EGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameState.InnerSingleton;
}
// ********** End Enum EGameState ******************************************************************

// ********** Begin Class ACXGameState Function GetCurrentGameState ********************************
struct Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics
{
	struct CXGameState_eventGetCurrentGameState_Parms
	{
		EGameState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "GameState/CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXGameState_eventGetCurrentGameState_Parms, ReturnValue), Z_Construct_UEnum_CX_EGameState, METADATA_PARAMS(0, nullptr) }; // 1161963599
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXGameState, nullptr, "GetCurrentGameState", Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::CXGameState_eventGetCurrentGameState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::CXGameState_eventGetCurrentGameState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXGameState_GetCurrentGameState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXGameState_GetCurrentGameState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXGameState::execGetCurrentGameState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGameState*)Z_Param__Result=P_THIS->GetCurrentGameState();
	P_NATIVE_END;
}
// ********** End Class ACXGameState Function GetCurrentGameState **********************************

// ********** Begin Class ACXGameState Function GetRemainingTime ***********************************
struct Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics
{
	struct CXGameState_eventGetRemainingTime_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "GameState/CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXGameState_eventGetRemainingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXGameState, nullptr, "GetRemainingTime", Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::CXGameState_eventGetRemainingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::CXGameState_eventGetRemainingTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXGameState_GetRemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXGameState_GetRemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXGameState::execGetRemainingTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRemainingTime();
	P_NATIVE_END;
}
// ********** End Class ACXGameState Function GetRemainingTime *************************************

// ********** Begin Class ACXGameState *************************************************************
void ACXGameState::StaticRegisterNativesACXGameState()
{
	UClass* Class = ACXGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentGameState", &ACXGameState::execGetCurrentGameState },
		{ "GetRemainingTime", &ACXGameState::execGetRemainingTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACXGameState;
UClass* ACXGameState::GetPrivateStaticClass()
{
	using TClass = ACXGameState;
	if (!Z_Registration_Info_UClass_ACXGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXGameState"),
			Z_Registration_Info_UClass_ACXGameState.InnerSingleton,
			StaticRegisterNativesACXGameState,
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
	return Z_Registration_Info_UClass_ACXGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACXGameState_NoRegister()
{
	return ACXGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACXGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/CXGameState.h" },
		{ "ModuleRelativePath", "GameState/CXGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameState_MetaData[] = {
		{ "ModuleRelativePath", "GameState/CXGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[] = {
		{ "ModuleRelativePath", "GameState/CXGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Winners_MetaData[] = {
		{ "ModuleRelativePath", "GameState/CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGameState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGameState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Winners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Winners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXGameState_GetCurrentGameState, "GetCurrentGameState" }, // 700968767
		{ &Z_Construct_UFunction_ACXGameState_GetRemainingTime, "GetRemainingTime" }, // 3236462575
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_CurrentGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_CurrentGameState = { "CurrentGameState", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, CurrentGameState), Z_Construct_UEnum_CX_EGameState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameState_MetaData), NewProp_CurrentGameState_MetaData) }; // 1161963599
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTime_MetaData), NewProp_RemainingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_Winners_Inner = { "Winners", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACXPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_Winners = { "Winners", nullptr, (EPropertyFlags)0x0114000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, Winners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Winners_MetaData), NewProp_Winners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_CurrentGameState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_CurrentGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_Winners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_Winners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXGameState_Statics::ClassParams = {
	&ACXGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXGameState()
{
	if (!Z_Registration_Info_UClass_ACXGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXGameState.OuterSingleton, Z_Construct_UClass_ACXGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXGameState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACXGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentGameState(TEXT("CurrentGameState"));
	static FName Name_RemainingTime(TEXT("RemainingTime"));
	static FName Name_Winners(TEXT("Winners"));
	const bool bIsValid = true
		&& Name_CurrentGameState == ClassReps[(int32)ENetFields_Private::CurrentGameState].Property->GetFName()
		&& Name_RemainingTime == ClassReps[(int32)ENetFields_Private::RemainingTime].Property->GetFName()
		&& Name_Winners == ClassReps[(int32)ENetFields_Private::Winners].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXGameState"));
}
#endif
ACXGameState::ACXGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXGameState);
ACXGameState::~ACXGameState() {}
// ********** End Class ACXGameState ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_GameState_CXGameState_h__Script_CX_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameState_StaticEnum, TEXT("EGameState"), &Z_Registration_Info_UEnum_EGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1161963599U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXGameState, ACXGameState::StaticClass, TEXT("ACXGameState"), &Z_Registration_Info_UClass_ACXGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXGameState), 3911782810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_GameState_CXGameState_h__Script_CX_3341802062(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_GameState_CXGameState_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_GameState_CXGameState_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_GameState_CXGameState_h__Script_CX_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_GameState_CXGameState_h__Script_CX_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
