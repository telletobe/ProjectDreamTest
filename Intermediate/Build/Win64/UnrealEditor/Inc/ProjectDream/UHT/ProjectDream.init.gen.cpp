// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDream_init() {}
	PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature();
	PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature();
	PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnEnemyDied__DelegateSignature();
	PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature();
	PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature();
	PROJECTDREAM_API UFunction* Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectDream;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectDream()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectDream.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryData__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDream_ChangeInventoryDataWithIndex__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDream_OnEnemyDied__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDream_OnInteractAction__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDream_OnInventoryEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDream_OnReadyInventory__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectDream",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x48A7F0D5,
				0x4192C743,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectDream.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectDream.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectDream(Z_Construct_UPackage__Script_ProjectDream, TEXT("/Script/ProjectDream"), Z_Registration_Info_UPackage__Script_ProjectDream, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x48A7F0D5, 0x4192C743));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
