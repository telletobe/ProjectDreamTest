// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMG/UserInventory.h"

#ifdef PROJECTDREAM_UserInventory_generated_h
#error "UserInventory.generated.h already included, missing '#pragma once' in UserInventory.h"
#endif
#define PROJECTDREAM_UserInventory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGameInventory;

// ********** Begin Class UUserInventory ***********************************************************
#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBindInventory); \
	DECLARE_FUNCTION(execUpdateInventoryUIWithIdxTwoParams); \
	DECLARE_FUNCTION(execUpdateInventoryUIWithIdx); \
	DECLARE_FUNCTION(execUpdateInventoryUI); \
	DECLARE_FUNCTION(execOnOffInventory);


PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventory_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserInventory(); \
	friend struct Z_Construct_UClass_UUserInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserInventory, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_UUserInventory_NoRegister) \
	DECLARE_SERIALIZER(UUserInventory)


#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserInventory(UUserInventory&&) = delete; \
	UUserInventory(const UUserInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserInventory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserInventory) \
	NO_API virtual ~UUserInventory();


#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h_13_PROLOG
#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserInventory;

// ********** End Class UUserInventory *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_UMG_UserInventory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
