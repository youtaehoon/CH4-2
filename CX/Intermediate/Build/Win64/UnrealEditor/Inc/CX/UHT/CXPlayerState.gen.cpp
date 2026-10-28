// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerState/CXPlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXPlayerState() {}

// ********** Begin Cross Module References ********************************************************
CX_API UClass* Z_Construct_UClass_ACXPlayerState();
CX_API UClass* Z_Construct_UClass_ACXPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACXPlayerState Function CTSAddCoin ***************************************
struct CXPlayerState_eventCTSAddCoin_Parms
{
	int32 Amount;
};
static FName NAME_ACXPlayerState_CTSAddCoin = FName(TEXT("CTSAddCoin"));
void ACXPlayerState::CTSAddCoin(int32 const& Amount)
{
	CXPlayerState_eventCTSAddCoin_Parms Parms;
	Parms.Amount=Amount;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerState_CTSAddCoin);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerState/CXPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerState_eventCTSAddCoin_Parms, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXPlayerState, nullptr, "CTSAddCoin", Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::PropPointers), sizeof(CXPlayerState_eventCTSAddCoin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CXPlayerState_eventCTSAddCoin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerState_CTSAddCoin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerState_CTSAddCoin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerState::execCTSAddCoin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CTSAddCoin_Implementation(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class ACXPlayerState Function CTSAddCoin *****************************************

// ********** Begin Class ACXPlayerState Function GetPlayerStateInfo *******************************
struct Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics
{
	struct CXPlayerState_eventGetPlayerStateInfo_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerState/CXPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerState_eventGetPlayerStateInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXPlayerState, nullptr, "GetPlayerStateInfo", Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::CXPlayerState_eventGetPlayerStateInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::CXPlayerState_eventGetPlayerStateInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerState::execGetPlayerStateInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPlayerStateInfo();
	P_NATIVE_END;
}
// ********** End Class ACXPlayerState Function GetPlayerStateInfo *********************************

// ********** Begin Class ACXPlayerState ***********************************************************
void ACXPlayerState::StaticRegisterNativesACXPlayerState()
{
	UClass* Class = ACXPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CTSAddCoin", &ACXPlayerState::execCTSAddCoin },
		{ "GetPlayerStateInfo", &ACXPlayerState::execGetPlayerStateInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACXPlayerState;
UClass* ACXPlayerState::GetPrivateStaticClass()
{
	using TClass = ACXPlayerState;
	if (!Z_Registration_Info_UClass_ACXPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXPlayerState"),
			Z_Registration_Info_UClass_ACXPlayerState.InnerSingleton,
			StaticRegisterNativesACXPlayerState,
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
	return Z_Registration_Info_UClass_ACXPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACXPlayerState_NoRegister()
{
	return ACXPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACXPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/CXPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/CXPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/CXPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusMaxSpeed_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/CXPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPlayerState_CTSAddCoin, "CTSAddCoin" }, // 951000730
		{ &Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo, "GetPlayerStateInfo" }, // 3578838749
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXPlayerState_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerState, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXPlayerState_Statics::NewProp_BonusMaxSpeed = { "BonusMaxSpeed", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerState, BonusMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusMaxSpeed_MetaData), NewProp_BonusMaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerState_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerState_Statics::NewProp_BonusMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPlayerState_Statics::ClassParams = {
	&ACXPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPlayerState()
{
	if (!Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton, Z_Construct_UClass_ACXPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACXPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Coins(TEXT("Coins"));
	static FName Name_BonusMaxSpeed(TEXT("BonusMaxSpeed"));
	const bool bIsValid = true
		&& Name_Coins == ClassReps[(int32)ENetFields_Private::Coins].Property->GetFName()
		&& Name_BonusMaxSpeed == ClassReps[(int32)ENetFields_Private::BonusMaxSpeed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXPlayerState"));
}
#endif
ACXPlayerState::ACXPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPlayerState);
ACXPlayerState::~ACXPlayerState() {}
// ********** End Class ACXPlayerState *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_PlayerState_CXPlayerState_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPlayerState, ACXPlayerState::StaticClass, TEXT("ACXPlayerState"), &Z_Registration_Info_UClass_ACXPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPlayerState), 1565123856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_PlayerState_CXPlayerState_h__Script_CX_1231800186(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_PlayerState_CXPlayerState_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_PlayerState_CXPlayerState_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
