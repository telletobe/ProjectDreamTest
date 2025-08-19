// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/GameSystems/DreamGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDreamGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PROJECTDREAM_API UClass* Z_Construct_UClass_UDreamGameInstance();
PROJECTDREAM_API UClass* Z_Construct_UClass_UDreamGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDreamGameInstance *******************************************************
void UDreamGameInstance::StaticRegisterNativesUDreamGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDreamGameInstance;
UClass* UDreamGameInstance::GetPrivateStaticClass()
{
	using TClass = UDreamGameInstance;
	if (!Z_Registration_Info_UClass_UDreamGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DreamGameInstance"),
			Z_Registration_Info_UClass_UDreamGameInstance.InnerSingleton,
			StaticRegisterNativesUDreamGameInstance,
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
	return Z_Registration_Info_UClass_UDreamGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UDreamGameInstance_NoRegister()
{
	return UDreamGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDreamGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameSystems/DreamGameInstance.h" },
		{ "ModuleRelativePath", "GameSystems/DreamGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDreamGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamGameInstance_Statics::ClassParams = {
	&UDreamGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamGameInstance()
{
	if (!Z_Registration_Info_UClass_UDreamGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamGameInstance.OuterSingleton, Z_Construct_UClass_UDreamGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamGameInstance.OuterSingleton;
}
UDreamGameInstance::UDreamGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamGameInstance);
UDreamGameInstance::~UDreamGameInstance() {}
// ********** End Class UDreamGameInstance *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h__Script_ProjectDream_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamGameInstance, UDreamGameInstance::StaticClass, TEXT("UDreamGameInstance"), &Z_Registration_Info_UClass_UDreamGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamGameInstance), 3962248704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h__Script_ProjectDream_787956403(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h__Script_ProjectDream_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
