// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSystems/Inventory/GameItem.h"

#ifdef PROJECTDREAM_GameItem_generated_h
#error "GameItem.generated.h already included, missing '#pragma once' in GameItem.h"
#endif
#define PROJECTDREAM_GameItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ACharacter;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AGameItem ****************************************************************
#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxEnd); \
	DECLARE_FUNCTION(execOnBoxBegin); \
	DECLARE_FUNCTION(execInteract);


PROJECTDREAM_API UClass* Z_Construct_UClass_AGameItem_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameItem(); \
	friend struct Z_Construct_UClass_AGameItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_AGameItem_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_AGameItem_NoRegister) \
	DECLARE_SERIALIZER(AGameItem)


#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameItem(AGameItem&&) = delete; \
	AGameItem(const AGameItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameItem) \
	NO_API virtual ~AGameItem();


#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h_12_PROLOG
#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameItem;

// ********** End Class AGameItem ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
