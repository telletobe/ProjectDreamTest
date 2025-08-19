// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/WorldTimeController/WorldTimeController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWorldTimeController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
PROJECTDREAM_API UClass* Z_Construct_UClass_UWorldTimeController();
PROJECTDREAM_API UClass* Z_Construct_UClass_UWorldTimeController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWorldTimeController *****************************************************
void UWorldTimeController::StaticRegisterNativesUWorldTimeController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWorldTimeController;
UClass* UWorldTimeController::GetPrivateStaticClass()
{
	using TClass = UWorldTimeController;
	if (!Z_Registration_Info_UClass_UWorldTimeController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WorldTimeController"),
			Z_Registration_Info_UClass_UWorldTimeController.InnerSingleton,
			StaticRegisterNativesUWorldTimeController,
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
	return Z_Registration_Info_UClass_UWorldTimeController.InnerSingleton;
}
UClass* Z_Construct_UClass_UWorldTimeController_NoRegister()
{
	return UWorldTimeController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWorldTimeController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WorldTimeController/WorldTimeController.h" },
		{ "ModuleRelativePath", "WorldTimeController/WorldTimeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunLight_MetaData[] = {
		{ "Category", "Actors" },
		{ "ModuleRelativePath", "WorldTimeController/WorldTimeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunPitchCureve_MetaData[] = {
		{ "Category", "Curves | Sun" },
		{ "ModuleRelativePath", "WorldTimeController/WorldTimeController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SunLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SunPitchCureve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldTimeController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UWorldTimeController_Statics::NewProp_SunLight = { "SunLight", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldTimeController, SunLight), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunLight_MetaData), NewProp_SunLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldTimeController_Statics::NewProp_SunPitchCureve = { "SunPitchCureve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldTimeController, SunPitchCureve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunPitchCureve_MetaData), NewProp_SunPitchCureve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldTimeController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTimeController_Statics::NewProp_SunLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldTimeController_Statics::NewProp_SunPitchCureve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTimeController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldTimeController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTimeController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldTimeController_Statics::ClassParams = {
	&UWorldTimeController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldTimeController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTimeController_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldTimeController_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldTimeController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldTimeController()
{
	if (!Z_Registration_Info_UClass_UWorldTimeController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldTimeController.OuterSingleton, Z_Construct_UClass_UWorldTimeController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldTimeController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldTimeController);
UWorldTimeController::~UWorldTimeController() {}
// ********** End Class UWorldTimeController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_WorldTimeController_WorldTimeController_h__Script_ProjectDream_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldTimeController, UWorldTimeController::StaticClass, TEXT("UWorldTimeController"), &Z_Registration_Info_UClass_UWorldTimeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldTimeController), 2977273716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_WorldTimeController_WorldTimeController_h__Script_ProjectDream_1915109501(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_WorldTimeController_WorldTimeController_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_WorldTimeController_WorldTimeController_h__Script_ProjectDream_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
