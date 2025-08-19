// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/ProjectDreamGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectDreamGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamGameMode();
PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDream();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectDreamGameMode ****************************************************
void AProjectDreamGameMode::StaticRegisterNativesAProjectDreamGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectDreamGameMode;
UClass* AProjectDreamGameMode::GetPrivateStaticClass()
{
	using TClass = AProjectDreamGameMode;
	if (!Z_Registration_Info_UClass_AProjectDreamGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectDreamGameMode"),
			Z_Registration_Info_UClass_AProjectDreamGameMode.InnerSingleton,
			StaticRegisterNativesAProjectDreamGameMode,
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
	return Z_Registration_Info_UClass_AProjectDreamGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectDreamGameMode_NoRegister()
{
	return AProjectDreamGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectDreamGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectDreamGameMode.h" },
		{ "ModuleRelativePath", "ProjectDreamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectDreamGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectDreamGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectDreamGameMode_Statics::ClassParams = {
	&AProjectDreamGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectDreamGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectDreamGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectDreamGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectDreamGameMode.OuterSingleton, Z_Construct_UClass_AProjectDreamGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectDreamGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDreamGameMode);
AProjectDreamGameMode::~AProjectDreamGameMode() {}
// ********** End Class AProjectDreamGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h__Script_ProjectDream_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectDreamGameMode, AProjectDreamGameMode::StaticClass, TEXT("AProjectDreamGameMode"), &Z_Registration_Info_UClass_AProjectDreamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectDreamGameMode), 2053350659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h__Script_ProjectDream_3534376523(TEXT("/Script/ProjectDream"),
	Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h__Script_ProjectDream_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h__Script_ProjectDream_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
