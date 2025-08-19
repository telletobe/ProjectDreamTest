// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/ProjectDreamCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectDreamCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_AGameItem_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamCharacter();
PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamCharacter_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UGameInventory_NoRegister();
PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature();
PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature();
PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnInventoryEvent *****************************************************
struct Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectDream, nullptr, "OnInventoryEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryEvent_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryEvent)
{
	OnInventoryEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryEvent *******************************************************

// ********** Begin Delegate FOnInteractAction *****************************************************
struct Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics
{
	struct _Script_ProjectDream_eventOnInteractAction_Parms
	{
		ACharacter* Interactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectDream_eventOnInteractAction_Parms, Interactor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectDream, nullptr, "OnInteractAction__DelegateSignature", Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::_Script_ProjectDream_eventOnInteractAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::_Script_ProjectDream_eventOnInteractAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInteractAction_DelegateWrapper(const FMulticastScriptDelegate& OnInteractAction, ACharacter* Interactor)
{
	struct _Script_ProjectDream_eventOnInteractAction_Parms
	{
		ACharacter* Interactor;
	};
	_Script_ProjectDream_eventOnInteractAction_Parms Parms;
	Parms.Interactor=Interactor;
	OnInteractAction.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnInteractAction *******************************************************

// ********** Begin Delegate FOnReadyInventory *****************************************************
struct Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics
{
	struct _Script_ProjectDream_eventOnReadyInventory_Parms
	{
		UGameInventory* PlayerInventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectDream_eventOnReadyInventory_Parms, PlayerInventory), Z_Construct_UClass_UGameInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::NewProp_PlayerInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectDream, nullptr, "OnReadyInventory__DelegateSignature", Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::_Script_ProjectDream_eventOnReadyInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::_Script_ProjectDream_eventOnReadyInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReadyInventory_DelegateWrapper(const FMulticastScriptDelegate& OnReadyInventory, UGameInventory* PlayerInventory)
{
	struct _Script_ProjectDream_eventOnReadyInventory_Parms
	{
		UGameInventory* PlayerInventory;
	};
	_Script_ProjectDream_eventOnReadyInventory_Parms Parms;
	Parms.PlayerInventory=PlayerInventory;
	OnReadyInventory.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReadyInventory *******************************************************

// ********** Begin Class AProjectDreamCharacter Function DoJumpEnd ********************************
struct Z_Construct_UFunction_AProjectDreamCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDreamCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectDreamCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDreamCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDreamCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectDreamCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDreamCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDreamCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AProjectDreamCharacter Function DoJumpEnd **********************************

// ********** Begin Class AProjectDreamCharacter Function DoJumpStart ******************************
struct Z_Construct_UFunction_AProjectDreamCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDreamCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectDreamCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDreamCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDreamCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectDreamCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDreamCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDreamCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AProjectDreamCharacter Function DoJumpStart ********************************

// ********** Begin Class AProjectDreamCharacter Function DoLook ***********************************
struct Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics
{
	struct ProjectDreamCharacter_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles look inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles look inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDreamCharacter_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDreamCharacter_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectDreamCharacter, nullptr, "DoLook", Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::ProjectDreamCharacter_eventDoLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::ProjectDreamCharacter_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDreamCharacter_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDreamCharacter_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDreamCharacter::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AProjectDreamCharacter Function DoLook *************************************

// ********** Begin Class AProjectDreamCharacter Function DoMove ***********************************
struct Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics
{
	struct ProjectDreamCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDreamCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectDreamCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectDreamCharacter, nullptr, "DoMove", Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::ProjectDreamCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::ProjectDreamCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectDreamCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectDreamCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectDreamCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AProjectDreamCharacter Function DoMove *************************************

// ********** Begin Class AProjectDreamCharacter ***************************************************
void AProjectDreamCharacter::StaticRegisterNativesAProjectDreamCharacter()
{
	UClass* Class = AProjectDreamCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoJumpEnd", &AProjectDreamCharacter::execDoJumpEnd },
		{ "DoJumpStart", &AProjectDreamCharacter::execDoJumpStart },
		{ "DoLook", &AProjectDreamCharacter::execDoLook },
		{ "DoMove", &AProjectDreamCharacter::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectDreamCharacter;
UClass* AProjectDreamCharacter::GetPrivateStaticClass()
{
	using TClass = AProjectDreamCharacter;
	if (!Z_Registration_Info_UClass_AProjectDreamCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectDreamCharacter"),
			Z_Registration_Info_UClass_AProjectDreamCharacter.InnerSingleton,
			StaticRegisterNativesAProjectDreamCharacter,
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
	return Z_Registration_Info_UClass_AProjectDreamCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectDreamCharacter_NoRegister()
{
	return AProjectDreamCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectDreamCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectDreamCharacter.h" },
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryEventAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterationAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryEvent_MetaData[] = {
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractAction_MetaData[] = {
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReadyInventory_MetaData[] = {
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Focused_MetaData[] = {
		{ "ModuleRelativePath", "ProjectDreamCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryEventAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterationAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadyInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Focused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectDreamCharacter_DoJumpEnd, "DoJumpEnd" }, // 592949887
		{ &Z_Construct_UFunction_AProjectDreamCharacter_DoJumpStart, "DoJumpStart" }, // 3127513481
		{ &Z_Construct_UFunction_AProjectDreamCharacter_DoLook, "DoLook" }, // 3024479065
		{ &Z_Construct_UFunction_AProjectDreamCharacter_DoMove, "DoMove" }, // 1910027469
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectDreamCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_InventoryEventAction = { "InventoryEventAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, InventoryEventAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryEventAction_MetaData), NewProp_InventoryEventAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_InterationAction = { "InterationAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, InterationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterationAction_MetaData), NewProp_InterationAction_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_OnInventoryEvent = { "OnInventoryEvent", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, OnInventoryEvent), Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryEvent_MetaData), NewProp_OnInventoryEvent_MetaData) }; // 2017403099
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_OnInteractAction = { "OnInteractAction", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, OnInteractAction), Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractAction_MetaData), NewProp_OnInteractAction_MetaData) }; // 1943342525
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_OnReadyInventory = { "OnReadyInventory", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, OnReadyInventory), Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReadyInventory_MetaData), NewProp_OnReadyInventory_MetaData) }; // 3949039524
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_Focused = { "Focused", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamCharacter, Focused), Z_Construct_UClass_AGameItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Focused_MetaData), NewProp_Focused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectDreamCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_InventoryEventAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_InterationAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_OnInventoryEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_OnInteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_OnReadyInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamCharacter_Statics::NewProp_Focused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectDreamCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectDreamCharacter_Statics::ClassParams = {
	&AProjectDreamCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectDreamCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectDreamCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectDreamCharacter()
{
	if (!Z_Registration_Info_UClass_AProjectDreamCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectDreamCharacter.OuterSingleton, Z_Construct_UClass_AProjectDreamCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectDreamCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDreamCharacter);
AProjectDreamCharacter::~AProjectDreamCharacter() {}
// ********** End Class AProjectDreamCharacter *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h__Script_ProjectDream_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectDreamCharacter, AProjectDreamCharacter::StaticClass, TEXT("AProjectDreamCharacter"), &Z_Registration_Info_UClass_AProjectDreamCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectDreamCharacter), 2345597852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h__Script_ProjectDream_3213027506(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h__Script_ProjectDream_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
