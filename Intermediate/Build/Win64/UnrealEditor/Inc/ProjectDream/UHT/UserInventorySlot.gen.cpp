// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/UMG/UserInventorySlot.h"
#include "ProjectDream/GameSystems/Inventory/GameInventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUserInventorySlot() {}

// ********** Begin Cross Module References ********************************************************
PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventorySlot();
PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventorySlot_NoRegister();
PROJECTDREAM_API UScriptStruct* Z_Construct_UScriptStruct_FGameItemData();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUserInventorySlot Function UpdateData ***********************************
struct Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics
{
	struct UserInventorySlot_eventUpdateData_Parms
	{
		FGameItemData InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/UserInventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserInventorySlot_eventUpdateData_Parms, InData), Z_Construct_UScriptStruct_FGameItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InData_MetaData), NewProp_InData_MetaData) }; // 1863388600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUserInventorySlot, nullptr, "UpdateData", Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::UserInventorySlot_eventUpdateData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::UserInventorySlot_eventUpdateData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserInventorySlot_UpdateData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserInventorySlot_UpdateData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserInventorySlot::execUpdateData)
{
	P_GET_STRUCT_REF(FGameItemData,Z_Param_Out_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateData(Z_Param_Out_InData);
	P_NATIVE_END;
}
// ********** End Class UUserInventorySlot Function UpdateData *************************************

// ********** Begin Class UUserInventorySlot *******************************************************
void UUserInventorySlot::StaticRegisterNativesUUserInventorySlot()
{
	UClass* Class = UUserInventorySlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateData", &UUserInventorySlot::execUpdateData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUserInventorySlot;
UClass* UUserInventorySlot::GetPrivateStaticClass()
{
	using TClass = UUserInventorySlot;
	if (!Z_Registration_Info_UClass_UUserInventorySlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UserInventorySlot"),
			Z_Registration_Info_UClass_UUserInventorySlot.InnerSingleton,
			StaticRegisterNativesUUserInventorySlot,
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
	return Z_Registration_Info_UClass_UUserInventorySlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UUserInventorySlot_NoRegister()
{
	return UUserInventorySlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUserInventorySlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UMG/UserInventorySlot.h" },
		{ "ModuleRelativePath", "UMG/UserInventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSelectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQty_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/UserInventorySlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSelectButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemQty;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserInventorySlot_UpdateData, "UpdateData" }, // 1158378718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserInventorySlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemSelectButton = { "ItemSelectButton", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventorySlot, ItemSelectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSelectButton_MetaData), NewProp_ItemSelectButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventorySlot, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventorySlot, ItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemQty = { "ItemQty", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventorySlot, ItemQty), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQty_MetaData), NewProp_ItemQty_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventorySlot, ItemCategory), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCategory_MetaData), NewProp_ItemCategory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserInventorySlot, ItemWeight), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWeight_MetaData), NewProp_ItemWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserInventorySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemSelectButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemQty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInventorySlot_Statics::NewProp_ItemWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserInventorySlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserInventorySlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserInventorySlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserInventorySlot_Statics::ClassParams = {
	&UUserInventorySlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUserInventorySlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserInventorySlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserInventorySlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserInventorySlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserInventorySlot()
{
	if (!Z_Registration_Info_UClass_UUserInventorySlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserInventorySlot.OuterSingleton, Z_Construct_UClass_UUserInventorySlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserInventorySlot.OuterSingleton;
}
UUserInventorySlot::UUserInventorySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserInventorySlot);
UUserInventorySlot::~UUserInventorySlot() {}
// ********** End Class UUserInventorySlot *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h__Script_ProjectDream_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserInventorySlot, UUserInventorySlot::StaticClass, TEXT("UUserInventorySlot"), &Z_Registration_Info_UClass_UUserInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserInventorySlot), 3070857581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h__Script_ProjectDream_3878031701(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h__Script_ProjectDream_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
