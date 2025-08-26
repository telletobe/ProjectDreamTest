// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/UMG/ProjectDreamHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectDreamHUD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamHUD();
PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamHUD_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UInventoryDropCatcher_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventory_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventorySlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectDreamHUD *********************************************************
void AProjectDreamHUD::StaticRegisterNativesAProjectDreamHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectDreamHUD;
UClass* AProjectDreamHUD::GetPrivateStaticClass()
{
	using TClass = AProjectDreamHUD;
	if (!Z_Registration_Info_UClass_AProjectDreamHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectDreamHUD"),
			Z_Registration_Info_UClass_AProjectDreamHUD.InnerSingleton,
			StaticRegisterNativesAProjectDreamHUD,
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
	return Z_Registration_Info_UClass_AProjectDreamHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectDreamHUD_NoRegister()
{
	return AProjectDreamHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectDreamHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UMG/ProjectDreamHUD.h" },
		{ "ModuleRelativePath", "UMG/ProjectDreamHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWidgetClass_MetaData[] = {
		{ "Category", "UMG" },
		{ "ModuleRelativePath", "UMG/ProjectDreamHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/ProjectDreamHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotWidgetClass_MetaData[] = {
		{ "Category", "UMG" },
		{ "ModuleRelativePath", "UMG/ProjectDreamHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/ProjectDreamHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropCatcherWidgetClass_MetaData[] = {
		{ "Category", "ProjectDreamHUD" },
		{ "ModuleRelativePath", "UMG/ProjectDreamHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropCatcherWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG/ProjectDreamHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventorySlotWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySlotWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropCatcherWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropCatcherWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectDreamHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_InventoryWidgetClass = { "InventoryWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamHUD, InventoryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryWidgetClass_MetaData), NewProp_InventoryWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_InventoryWidget = { "InventoryWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamHUD, InventoryWidget), Z_Construct_UClass_UUserInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryWidget_MetaData), NewProp_InventoryWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_InventorySlotWidgetClass = { "InventorySlotWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamHUD, InventorySlotWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserInventorySlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotWidgetClass_MetaData), NewProp_InventorySlotWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_InventorySlotWidget = { "InventorySlotWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamHUD, InventorySlotWidget), Z_Construct_UClass_UUserInventorySlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotWidget_MetaData), NewProp_InventorySlotWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_DropCatcherWidgetClass = { "DropCatcherWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamHUD, DropCatcherWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryDropCatcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropCatcherWidgetClass_MetaData), NewProp_DropCatcherWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_DropCatcherWidget = { "DropCatcherWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectDreamHUD, DropCatcherWidget), Z_Construct_UClass_UInventoryDropCatcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropCatcherWidget_MetaData), NewProp_DropCatcherWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectDreamHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_InventoryWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_InventoryWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_InventorySlotWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_InventorySlotWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_DropCatcherWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectDreamHUD_Statics::NewProp_DropCatcherWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectDreamHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectDreamHUD_Statics::ClassParams = {
	&AProjectDreamHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectDreamHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamHUD_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectDreamHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectDreamHUD()
{
	if (!Z_Registration_Info_UClass_AProjectDreamHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectDreamHUD.OuterSingleton, Z_Construct_UClass_AProjectDreamHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectDreamHUD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDreamHUD);
AProjectDreamHUD::~AProjectDreamHUD() {}
// ********** End Class AProjectDreamHUD ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_ProjectDreamHUD_h__Script_ProjectDream_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectDreamHUD, AProjectDreamHUD::StaticClass, TEXT("AProjectDreamHUD"), &Z_Registration_Info_UClass_AProjectDreamHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectDreamHUD), 1670916189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_ProjectDreamHUD_h__Script_ProjectDream_113292874(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_ProjectDreamHUD_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_UMG_ProjectDreamHUD_h__Script_ProjectDream_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
