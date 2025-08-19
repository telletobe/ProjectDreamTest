// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMG/UserInventorySlot.h"

#ifdef PROJECTDREAM_UserInventorySlot_generated_h
#error "UserInventorySlot.generated.h already included, missing '#pragma once' in UserInventorySlot.h"
#endif
#define PROJECTDREAM_UserInventorySlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameItemData;

// ********** Begin Class UUserInventorySlot *******************************************************
#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateData);


PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventorySlot_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserInventorySlot(); \
	friend struct Z_Construct_UClass_UUserInventorySlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_UUserInventorySlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserInventorySlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_UUserInventorySlot_NoRegister) \
	DECLARE_SERIALIZER(UUserInventorySlot)


#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserInventorySlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserInventorySlot(UUserInventorySlot&&) = delete; \
	UUserInventorySlot(const UUserInventorySlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserInventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserInventorySlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserInventorySlot) \
	NO_API virtual ~UUserInventorySlot();


#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h_20_PROLOG
#define FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h_23_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserInventorySlot;

// ********** End Class UUserInventorySlot *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_UMG_UserInventorySlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
