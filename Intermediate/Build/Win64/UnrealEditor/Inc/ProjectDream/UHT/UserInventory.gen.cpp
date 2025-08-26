// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/UMG/UserInventory.h"
#include "ProjectDream/GameSystems/Inventory/GameInventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUserInventory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PROJECTDREAM_API UClass* Z_Construct_UClass_UGameInventory_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventory();
PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventory_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventorySlot_NoRegister();
PROJECTDREAM_API UScriptStruct* Z_Construct_UScriptStruct_FGameItemData();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUserInventory Function BindInventory ************************************
struct Z_Construct_UFunction_UUserInventory_BindInventory_Statics
{
	struct UserInventory_eventBindInventory_Parms
	{
		UGameInventory* PlayerInventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserInventory_BindInventory_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInventory_eventBindInventory_Parms, PlayerInventory), Z_Construct_UClass_UGameInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserInventory_BindInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInventory_BindInventory_Statics::NewProp_PlayerInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_BindInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInventory_BindInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInventory, nullptr, "BindInventory", Z_Construct_UFunction_UUserInventory_BindInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_BindInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserInventory_BindInventory_Statics::UserInventory_eventBindInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_BindInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInventory_BindInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUserInventory_BindInventory_Statics::UserInventory_eventBindInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserInventory_BindInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInventory_BindInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInventory::execBindInventory)
{
	P_GET_OBJECT(UGameInventory,Z_Param_PlayerInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindInventory(Z_Param_PlayerInventory);
	P_NATIVE_END;
}
// ********** End Class UUserInventory Function BindInventory **************************************

// ********** Begin Class UUserInventory Function OnOffInventory ***********************************
struct Z_Construct_UFunction_UUserInventory_OnOffInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInventory_OnOffInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInventory, nullptr, "OnOffInventory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_OnOffInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInventory_OnOffInventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUserInventory_OnOffInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInventory_OnOffInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInventory::execOnOffInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOffInventory();
	P_NATIVE_END;
}
// ********** End Class UUserInventory Function OnOffInventory *************************************

// ********** Begin Class UUserInventory Function UpdateInventoryUI ********************************
struct Z_Construct_UFunction_UUserInventory_UpdateInventoryUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInventory_UpdateInventoryUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInventory, nullptr, "UpdateInventoryUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_UpdateInventoryUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInventory_UpdateInventoryUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUserInventory_UpdateInventoryUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInventory_UpdateInventoryUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInventory::execUpdateInventoryUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInventoryUI();
	P_NATIVE_END;
}
// ********** End Class UUserInventory Function UpdateInventoryUI **********************************

// ********** Begin Class UUserInventory Function UpdateInventoryUIWithIdx *************************
struct Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics
{
	struct UserInventory_eventUpdateInventoryUIWithIdx_Parms
	{
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInventory_eventUpdateInventoryUIWithIdx_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInventory, nullptr, "UpdateInventoryUIWithIdx", Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::UserInventory_eventUpdateInventoryUIWithIdx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::UserInventory_eventUpdateInventoryUIWithIdx_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInventory::execUpdateInventoryUIWithIdx)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInventoryUIWithIdx(Z_Param_index);
	P_NATIVE_END;
}
// ********** End Class UUserInventory Function UpdateInventoryUIWithIdx ***************************

// ********** Begin Class UUserInventory Function UpdateInventoryUIWithIdxTwoParams ****************
struct Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics
{
	struct UserInventory_eventUpdateInventoryUIWithIdxTwoParams_Parms
	{
		int32 index1;
		int32 index2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::NewProp_index1 = { "index1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInventory_eventUpdateInventoryUIWithIdxTwoParams_Parms, index1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::NewProp_index2 = { "index2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInventory_eventUpdateInventoryUIWithIdxTwoParams_Parms, index2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::NewProp_index1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::NewProp_index2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInventory, nullptr, "UpdateInventoryUIWithIdxTwoParams", Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::UserInventory_eventUpdateInventoryUIWithIdxTwoParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::UserInventory_eventUpdateInventoryUIWithIdxTwoParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInventory::execUpdateInventoryUIWithIdxTwoParams)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index1);
	P_GET_PROPERTY(FIntProperty,Z_Param_index2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInventoryUIWithIdxTwoParams(Z_Param_index1,Z_Param_index2);
	P_NATIVE_END;
}
// ********** End Class UUserInventory Function UpdateInventoryUIWithIdxTwoParams ******************

// ********** Begin Class UUserInventory ***********************************************************
void UUserInventory::StaticRegisterNativesUUserInventory()
{
	UClass* Class = UUserInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindInventory", &UUserInventory::execBindInventory },
		{ "OnOffInventory", &UUserInventory::execOnOffInventory },
		{ "UpdateInventoryUI", &UUserInventory::execUpdateInventoryUI },
		{ "UpdateInventoryUIWithIdx", &UUserInventory::execUpdateInventoryUIWithIdx },
		{ "UpdateInventoryUIWithIdxTwoParams", &UUserInventory::execUpdateInventoryUIWithIdxTwoParams },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUserInventory;
UClass* UUserInventory::GetPrivateStaticClass()
{
	using TClass = UUserInventory;
	if (!Z_Registration_Info_UClass_UUserInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UserInventory"),
			Z_Registration_Info_UClass_UUserInventory.InnerSingleton,
			StaticRegisterNativesUUserInventory,
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
	return Z_Registration_Info_UClass_UUserInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UUserInventory_NoRegister()
{
	return UUserInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUserInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UMG/UserInventory.h" },
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[] = {
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemScroll_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotWidgetClass_MetaData[] = {
		{ "Category", "Inventory | UI" },
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonClose_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemScroll;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlotWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonClose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserInventory_BindInventory, "BindInventory" }, // 3661518133
		{ &Z_Construct_UFunction_UUserInventory_OnOffInventory, "OnOffInventory" }, // 2842069687
		{ &Z_Construct_UFunction_UUserInventory_UpdateInventoryUI, "UpdateInventoryUI" }, // 2865135852
		{ &Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdx, "UpdateInventoryUIWithIdx" }, // 3474338334
		{ &Z_Construct_UFunction_UUserInventory_UpdateInventoryUIWithIdxTwoParams, "UpdateInventoryUIWithIdxTwoParams" }, // 2933382275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInventory_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventory, InventoryData), Z_Construct_UScriptStruct_FGameItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryData_MetaData), NewProp_InventoryData_MetaData) }; // 1863388600
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventory_Statics::NewProp_InventoryBorder = { "InventoryBorder", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventory, InventoryBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryBorder_MetaData), NewProp_InventoryBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventory_Statics::NewProp_ItemScroll = { "ItemScroll", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventory, ItemScroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemScroll_MetaData), NewProp_ItemScroll_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUserInventory_Statics::NewProp_SlotWidgetClass = { "SlotWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventory, SlotWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserInventorySlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotWidgetClass_MetaData), NewProp_SlotWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventory_Statics::NewProp_SlotWidgets_Inner = { "SlotWidgets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserInventorySlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserInventory_Statics::NewProp_SlotWidgets = { "SlotWidgets", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventory, SlotWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotWidgets_MetaData), NewProp_SlotWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventory, Inventory), Z_Construct_UClass_UGameInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventory_Statics::NewProp_ButtonClose = { "ButtonClose", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventory, ButtonClose), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonClose_MetaData), NewProp_ButtonClose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventory_Statics::NewProp_InventoryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventory_Statics::NewProp_InventoryBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventory_Statics::NewProp_ItemScroll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventory_Statics::NewProp_SlotWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventory_Statics::NewProp_SlotWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventory_Statics::NewProp_SlotWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventory_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventory_Statics::NewProp_ButtonClose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserInventory_Statics::ClassParams = {
	&UUserInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUserInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserInventory_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserInventory()
{
	if (!Z_Registration_Info_UClass_UUserInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserInventory.OuterSingleton, Z_Construct_UClass_UUserInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserInventory.OuterSingleton;
}
UUserInventory::UUserInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserInventory);
UUserInventory::~UUserInventory() {}
// ********** End Class UUserInventory *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h__Script_ProjectDream_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserInventory, UUserInventory::StaticClass, TEXT("UUserInventory"), &Z_Registration_Info_UClass_UUserInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserInventory), 2163764704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h__Script_ProjectDream_61611276(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h__Script_ProjectDream_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
