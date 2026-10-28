// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CXPlayerController.h"
#include "Subsystem/ChatSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCXPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CX_API UClass* Z_Construct_UClass_ACXPawn_NoRegister();
CX_API UClass* Z_Construct_UClass_ACXPlayerController();
CX_API UClass* Z_Construct_UClass_ACXPlayerController_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXUI_NoRegister();
CX_API UScriptStruct* Z_Construct_UScriptStruct_FChatData();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACXPlayerController Function CTSChatMessage ******************************
struct CXPlayerController_eventCTSChatMessage_Parms
{
	FString Message;
};
static FName NAME_ACXPlayerController_CTSChatMessage = FName(TEXT("CTSChatMessage"));
void ACXPlayerController::CTSChatMessage(const FString& Message)
{
	CXPlayerController_eventCTSChatMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_CTSChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventCTSChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "CTSChatMessage", Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::PropPointers), sizeof(CXPlayerController_eventCTSChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CXPlayerController_eventCTSChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_CTSChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_CTSChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execCTSChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CTSChatMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class ACXPlayerController Function CTSChatMessage ********************************

// ********** Begin Class ACXPlayerController Function STCChatLog **********************************
struct CXPlayerController_eventSTCChatLog_Parms
{
	TArray<FChatData> ChatLog;
};
static FName NAME_ACXPlayerController_STCChatLog = FName(TEXT("STCChatLog"));
void ACXPlayerController::STCChatLog(TArray<FChatData> const& ChatLog)
{
	CXPlayerController_eventSTCChatLog_Parms Parms;
	Parms.ChatLog=ChatLog;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_STCChatLog);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChatLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::NewProp_ChatLog_Inner = { "ChatLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChatData, METADATA_PARAMS(0, nullptr) }; // 1073882534
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::NewProp_ChatLog = { "ChatLog", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventSTCChatLog_Parms, ChatLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatLog_MetaData), NewProp_ChatLog_MetaData) }; // 1073882534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::NewProp_ChatLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::NewProp_ChatLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "STCChatLog", Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::PropPointers), sizeof(CXPlayerController_eventSTCChatLog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CXPlayerController_eventSTCChatLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_STCChatLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_STCChatLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execSTCChatLog)
{
	P_GET_TARRAY(FChatData,Z_Param_ChatLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->STCChatLog_Implementation(Z_Param_ChatLog);
	P_NATIVE_END;
}
// ********** End Class ACXPlayerController Function STCChatLog ************************************

// ********** Begin Class ACXPlayerController Function STCChatMessage ******************************
struct CXPlayerController_eventSTCChatMessage_Parms
{
	FString Sender;
	FString Message;
};
static FName NAME_ACXPlayerController_STCChatMessage = FName(TEXT("STCChatMessage"));
void ACXPlayerController::STCChatMessage(const FString& Sender, const FString& Message)
{
	CXPlayerController_eventSTCChatMessage_Parms Parms;
	Parms.Sender=Sender;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_STCChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sender;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventSTCChatMessage_Parms, Sender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sender_MetaData), NewProp_Sender_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventSTCChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "STCChatMessage", Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::PropPointers), sizeof(CXPlayerController_eventSTCChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CXPlayerController_eventSTCChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_STCChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_STCChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execSTCChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Sender);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->STCChatMessage_Implementation(Z_Param_Sender,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class ACXPlayerController Function STCChatMessage ********************************

// ********** Begin Class ACXPlayerController Function STCGameResult *******************************
struct CXPlayerController_eventSTCGameResult_Parms
{
	bool bIsWinner;
};
static FName NAME_ACXPlayerController_STCGameResult = FName(TEXT("STCGameResult"));
void ACXPlayerController::STCGameResult(bool bIsWinner)
{
	CXPlayerController_eventSTCGameResult_Parms Parms;
	Parms.bIsWinner=bIsWinner ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_STCGameResult);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begin PlayerController interface\n" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin PlayerController interface" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsWinner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWinner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::NewProp_bIsWinner_SetBit(void* Obj)
{
	((CXPlayerController_eventSTCGameResult_Parms*)Obj)->bIsWinner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::NewProp_bIsWinner = { "bIsWinner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXPlayerController_eventSTCGameResult_Parms), &Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::NewProp_bIsWinner_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::NewProp_bIsWinner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "STCGameResult", Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::PropPointers), sizeof(CXPlayerController_eventSTCGameResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CXPlayerController_eventSTCGameResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_STCGameResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_STCGameResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execSTCGameResult)
{
	P_GET_UBOOL(Z_Param_bIsWinner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->STCGameResult_Implementation(Z_Param_bIsWinner);
	P_NATIVE_END;
}
// ********** End Class ACXPlayerController Function STCGameResult *********************************

// ********** Begin Class ACXPlayerController ******************************************************
void ACXPlayerController::StaticRegisterNativesACXPlayerController()
{
	UClass* Class = ACXPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CTSChatMessage", &ACXPlayerController::execCTSChatMessage },
		{ "STCChatLog", &ACXPlayerController::execSTCChatLog },
		{ "STCChatMessage", &ACXPlayerController::execSTCChatMessage },
		{ "STCGameResult", &ACXPlayerController::execSTCGameResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACXPlayerController;
UClass* ACXPlayerController::GetPrivateStaticClass()
{
	using TClass = ACXPlayerController;
	if (!Z_Registration_Info_UClass_ACXPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CXPlayerController"),
			Z_Registration_Info_UClass_ACXPlayerController.InnerSingleton,
			StaticRegisterNativesACXPlayerController,
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
	return Z_Registration_Info_UClass_ACXPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACXPlayerController_NoRegister()
{
	return ACXPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACXPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Player Controller class\n *  Handles input mapping and user interface\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CXPlayerController.h" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Player Controller class\nHandles input mapping and user interface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringWheelControls_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the optional steering wheel input mapping context will be registered */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the optional steering wheel input mapping context will be registered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringWheelInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Input Mapping Context to be used for steering wheel input.\n\x09 *  This is added alongside the default Input Mapping Context and does not block other forms of input.\n\x09 */" },
#endif
		{ "EditCondition", "bUseSteeringWheelControls" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Input Mapping Context to be used for steering wheel input.\nThis is added alongside the default Input Mapping Context and does not block other forms of input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehiclePawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the controlled vehicle pawn */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the controlled vehicle pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the UI to spawn */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the UI to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static void NewProp_bUseSteeringWheelControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringWheelControls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringWheelInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehiclePawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VehicleUIClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPlayerController_CTSChatMessage, "CTSChatMessage" }, // 2649304615
		{ &Z_Construct_UFunction_ACXPlayerController_STCChatLog, "STCChatLog" }, // 3207526867
		{ &Z_Construct_UFunction_ACXPlayerController_STCChatMessage, "STCChatMessage" }, // 3676210289
		{ &Z_Construct_UFunction_ACXPlayerController_STCGameResult, "STCGameResult" }, // 1024909604
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
void Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit(void* Obj)
{
	((ACXPlayerController*)Obj)->bUseSteeringWheelControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls = { "bUseSteeringWheelControls", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACXPlayerController), &Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSteeringWheelControls_MetaData), NewProp_bUseSteeringWheelControls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_SteeringWheelInputMappingContext = { "SteeringWheelInputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, SteeringWheelInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringWheelInputMappingContext_MetaData), NewProp_SteeringWheelInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehiclePawn = { "VehiclePawn", nullptr, (EPropertyFlags)0x0124080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, VehiclePawn), Z_Construct_UClass_ACXPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehiclePawn_MetaData), NewProp_VehiclePawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehicleUIClass = { "VehicleUIClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, VehicleUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCXUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleUIClass_MetaData), NewProp_VehicleUIClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_SteeringWheelInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehiclePawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehicleUIClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPlayerController_Statics::ClassParams = {
	&ACXPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPlayerController()
{
	if (!Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton, Z_Construct_UClass_ACXPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACXPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_VehiclePawn(TEXT("VehiclePawn"));
	const bool bIsValid = true
		&& Name_VehiclePawn == ClassReps[(int32)ENetFields_Private::VehiclePawn].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXPlayerController"));
}
#endif
ACXPlayerController::ACXPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPlayerController);
ACXPlayerController::~ACXPlayerController() {}
// ********** End Class ACXPlayerController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXPlayerController_h__Script_CX_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPlayerController, ACXPlayerController::StaticClass, TEXT("ACXPlayerController"), &Z_Registration_Info_UClass_ACXPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPlayerController), 3392931079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXPlayerController_h__Script_CX_3191626361(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXPlayerController_h__Script_CX_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UR5_CX_Source_CX_CXPlayerController_h__Script_CX_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
