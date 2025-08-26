// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/GameSystems/Inventory/InventoryDropCatcher.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryDropCatcher() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UGameInventory_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UInventoryDropCatcher();
PROJECTDREAM_API UClass* Z_Construct_UClass_UInventoryDropCatcher_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoryDropCatcher ****************************************************
void UInventoryDropCatcher::StaticRegisterNativesUInventoryDropCatcher()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryDropCatcher;
UClass* UInventoryDropCatcher::GetPrivateStaticClass()
{
	using TClass = UInventoryDropCatcher;
	if (!Z_Registration_Info_UClass_UInventoryDropCatcher.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryDropCatcher"),
			Z_Registration_Info_UClass_UInventoryDropCatcher.InnerSingleton,
			StaticRegisterNativesUInventoryDropCatcher,
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
	return Z_Registration_Info_UClass_UInventoryDropCatcher.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryDropCatcher_NoRegister()
{
	return UInventoryDropCatcher::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryDropCatcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameSystems/Inventory/InventoryDropCatcher.h" },
		{ "ModuleRelativePath", "GameSystems/Inventory/InventoryDropCatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryRef_MetaData[] = {
		{ "ModuleRelativePath", "GameSystems/Inventory/InventoryDropCatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCRef_MetaData[] = {
		{ "ModuleRelativePath", "GameSystems/Inventory/InventoryDropCatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InventoryRef;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PCRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryDropCatcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInventoryDropCatcher_Statics::NewProp_InventoryRef = { "InventoryRef", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryDropCatcher, InventoryRef), Z_Construct_UClass_UGameInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryRef_MetaData), NewProp_InventoryRef_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInventoryDropCatcher_Statics::NewProp_PCRef = { "PCRef", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryDropCatcher, PCRef), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCRef_MetaData), NewProp_PCRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryDropCatcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryDropCatcher_Statics::NewProp_InventoryRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryDropCatcher_Statics::NewProp_PCRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryDropCatcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryDropCatcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryDropCatcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryDropCatcher_Statics::ClassParams = {
	&UInventoryDropCatcher::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryDropCatcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryDropCatcher_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryDropCatcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryDropCatcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryDropCatcher()
{
	if (!Z_Registration_Info_UClass_UInventoryDropCatcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryDropCatcher.OuterSingleton, Z_Construct_UClass_UInventoryDropCatcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryDropCatcher.OuterSingleton;
}
UInventoryDropCatcher::UInventoryDropCatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryDropCatcher);
UInventoryDropCatcher::~UInventoryDropCatcher() {}
// ********** End Class UInventoryDropCatcher ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h__Script_ProjectDream_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryDropCatcher, UInventoryDropCatcher::StaticClass, TEXT("UInventoryDropCatcher"), &Z_Registration_Info_UClass_UInventoryDropCatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryDropCatcher), 119459611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h__Script_ProjectDream_3664399369(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h__Script_ProjectDream_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
