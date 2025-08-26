// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSystems/Inventory/InventoryDropCatcher.h"

#ifdef PROJECTDREAM_InventoryDropCatcher_generated_h
#error "InventoryDropCatcher.generated.h already included, missing '#pragma once' in InventoryDropCatcher.h"
#endif
#define PROJECTDREAM_InventoryDropCatcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInventoryDropCatcher ****************************************************
PROJECTDREAM_API UClass* Z_Construct_UClass_UInventoryDropCatcher_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryDropCatcher(); \
	friend struct Z_Construct_UClass_UInventoryDropCatcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_UInventoryDropCatcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryDropCatcher, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_UInventoryDropCatcher_NoRegister) \
	DECLARE_SERIALIZER(UInventoryDropCatcher)


#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryDropCatcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryDropCatcher(UInventoryDropCatcher&&) = delete; \
	UInventoryDropCatcher(const UInventoryDropCatcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryDropCatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryDropCatcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryDropCatcher) \
	NO_API virtual ~UInventoryDropCatcher();


#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h_12_PROLOG
#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryDropCatcher;

// ********** End Class UInventoryDropCatcher ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_InventoryDropCatcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
