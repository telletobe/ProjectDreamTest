// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/GameSystems/Inventory/GameInventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameInventory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROJECTDREAM_API UClass* Z_Construct_UClass_UGameInventory();
PROJECTDREAM_API UClass* Z_Construct_UClass_UGameInventory_NoRegister();
PROJECTDREAM_API UEnum* Z_Construct_UEnum_ProjectDream_ECategory();
PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature();
PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature();
PROJECTDREAM_API UScriptStruct* Z_Construct_UScriptStruct_FGameItemData();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FChangeInventoryData **************************************************
struct Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectDream, nullptr, "ChangeInventoryData__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FChangeInventoryData_DelegateWrapper(const FMulticastScriptDelegate& ChangeInventoryData)
{
	ChangeInventoryData.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FChangeInventoryData ****************************************************

// ********** Begin Delegate FChangeInventoryDataWithIndex *****************************************
struct Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics
{
	struct _Script_ProjectDream_eventChangeInventoryDataWithIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectDream_eventChangeInventoryDataWithIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectDream, nullptr, "ChangeInventoryDataWithIndex__DelegateSignature", Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::_Script_ProjectDream_eventChangeInventoryDataWithIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::_Script_ProjectDream_eventChangeInventoryDataWithIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FChangeInventoryDataWithIndex_DelegateWrapper(const FMulticastScriptDelegate& ChangeInventoryDataWithIndex, int32 Index)
{
	struct _Script_ProjectDream_eventChangeInventoryDataWithIndex_Parms
	{
		int32 Index;
	};
	_Script_ProjectDream_eventChangeInventoryDataWithIndex_Parms Parms;
	Parms.Index=Index;
	ChangeInventoryDataWithIndex.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FChangeInventoryDataWithIndex *******************************************

// ********** Begin Enum ECategory *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECategory;
static UEnum* ECategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectDream_ECategory, (UObject*)Z_Construct_UPackage__Script_ProjectDream(), TEXT("ECategory"));
	}
	return Z_Registration_Info_UEnum_ECategory.OuterSingleton;
}
template<> PROJECTDREAM_API UEnum* StaticEnum<ECategory>()
{
	return ECategory_StaticEnum();
}
struct Z_Construct_UEnum_ProjectDream_ECategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "ECategory::Consumable" },
		{ "Equipment.DisPlayName", "Equipment" },
		{ "Equipment.Name", "ECategory::Equipment" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
		{ "Other.DisplayName", "Other" },
		{ "Other.Name", "ECategory::Other" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECategory::Equipment", (int64)ECategory::Equipment },
		{ "ECategory::Consumable", (int64)ECategory::Consumable },
		{ "ECategory::Other", (int64)ECategory::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectDream_ECategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectDream,
	nullptr,
	"ECategory",
	"ECategory",
	Z_Construct_UEnum_ProjectDream_ECategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectDream_ECategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectDream_ECategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectDream_ECategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectDream_ECategory()
{
	if (!Z_Registration_Info_UEnum_ECategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECategory.InnerSingleton, Z_Construct_UEnum_ProjectDream_ECategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECategory.InnerSingleton;
}
// ********** End Enum ECategory *******************************************************************

// ********** Begin ScriptStruct FGameItemData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameItemData;
class UScriptStruct* FGameItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameItemData, (UObject*)Z_Construct_UPackage__Script_ProjectDream(), TEXT("GameItemData"));
	}
	return Z_Registration_Info_UScriptStruct_FGameItemData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEquipment_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseQuickSlot_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQty_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ItemCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCategory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
	static void NewProp_bCanEquipment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEquipment;
	static void NewProp_bUseQuickSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseQuickSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameItemData, ItemCategory), Z_Construct_UEnum_ProjectDream_ECategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCategory_MetaData), NewProp_ItemCategory_MetaData) }; // 3884149095
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameItemData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameItemData, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
void Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_bCanEquipment_SetBit(void* Obj)
{
	((FGameItemData*)Obj)->bCanEquipment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_bCanEquipment = { "bCanEquipment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameItemData), &Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_bCanEquipment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEquipment_MetaData), NewProp_bCanEquipment_MetaData) };
void Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_bUseQuickSlot_SetBit(void* Obj)
{
	((FGameItemData*)Obj)->bUseQuickSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_bUseQuickSlot = { "bUseQuickSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameItemData), &Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_bUseQuickSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseQuickSlot_MetaData), NewProp_bUseQuickSlot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemQty = { "ItemQty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameItemData, ItemQty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQty_MetaData), NewProp_ItemQty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameItemData, ItemWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWeight_MetaData), NewProp_ItemWeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameItemData, ItemIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIndex_MetaData), NewProp_ItemIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_bCanEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_bUseQuickSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemQty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameItemData_Statics::NewProp_ItemIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
	nullptr,
	&NewStructOps,
	"GameItemData",
	Z_Construct_UScriptStruct_FGameItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameItemData_Statics::PropPointers),
	sizeof(FGameItemData),
	alignof(FGameItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameItemData()
{
	if (!Z_Registration_Info_UScriptStruct_FGameItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameItemData.InnerSingleton, Z_Construct_UScriptStruct_FGameItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameItemData.InnerSingleton;
}
// ********** End ScriptStruct FGameItemData *******************************************************

// ********** Begin Class UGameInventory ***********************************************************
void UGameInventory::StaticRegisterNativesUGameInventory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameInventory;
UClass* UGameInventory::GetPrivateStaticClass()
{
	using TClass = UGameInventory;
	if (!Z_Registration_Info_UClass_UGameInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameInventory"),
			Z_Registration_Info_UClass_UGameInventory.InnerSingleton,
			StaticRegisterNativesUGameInventory,
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
	return Z_Registration_Info_UClass_UGameInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameInventory_NoRegister()
{
	return UGameInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameSystems/Inventory/GameInventory.h" },
		{ "ModuleRelativePath", "GameSystems/Inventory/GameInventory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInventory_Statics::ClassParams = {
	&UGameInventory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameInventory()
{
	if (!Z_Registration_Info_UClass_UGameInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInventory.OuterSingleton, Z_Construct_UClass_UGameInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameInventory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInventory);
UGameInventory::~UGameInventory() {}
// ********** End Class UGameInventory *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h__Script_ProjectDream_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECategory_StaticEnum, TEXT("ECategory"), &Z_Registration_Info_UEnum_ECategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3884149095U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameItemData::StaticStruct, Z_Construct_UScriptStruct_FGameItemData_Statics::NewStructOps, TEXT("GameItemData"), &Z_Registration_Info_UScriptStruct_FGameItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameItemData), 1863388600U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameInventory, UGameInventory::StaticClass, TEXT("UGameInventory"), &Z_Registration_Info_UClass_UGameInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInventory), 4025038142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h__Script_ProjectDream_1696790096(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h__Script_ProjectDream_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h__Script_ProjectDream_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h__Script_ProjectDream_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h__Script_ProjectDream_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h__Script_ProjectDream_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
