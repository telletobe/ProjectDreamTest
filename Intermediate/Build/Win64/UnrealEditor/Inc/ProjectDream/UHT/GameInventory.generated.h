// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSystems/Inventory/GameInventory.h"

#ifdef PROJECTDREAM_GameInventory_generated_h
#error "GameInventory.generated.h already included, missing '#pragma once' in GameInventory.h"
#endif
#define PROJECTDREAM_GameInventory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FChangeInventoryData **************************************************
#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_8_DELEGATE \
PROJECTDREAM_API void FChangeInventoryData_DelegateWrapper(const FMulticastScriptDelegate& ChangeInventoryData);


// ********** End Delegate FChangeInventoryData ****************************************************

// ********** Begin Delegate FChangeInventoryDataWithIndex *****************************************
#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_9_DELEGATE \
PROJECTDREAM_API void FChangeInventoryDataWithIndex_DelegateWrapper(const FMulticastScriptDelegate& ChangeInventoryDataWithIndex, int32 Index);


// ********** End Delegate FChangeInventoryDataWithIndex *******************************************

// ********** Begin ScriptStruct FGameItemData *****************************************************
#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameItemData_Statics; \
	PROJECTDREAM_API static class UScriptStruct* StaticStruct();


struct FGameItemData;
// ********** End ScriptStruct FGameItemData *******************************************************

// ********** Begin Class UGameInventory ***********************************************************
PROJECTDREAM_API UClass* Z_Construct_UClass_UGameInventory_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInventory(); \
	friend struct Z_Construct_UClass_UGameInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_UGameInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_UGameInventory_NoRegister) \
	DECLARE_SERIALIZER(UGameInventory)


#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameInventory(UGameInventory&&) = delete; \
	UGameInventory(const UGameInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameInventory) \
	NO_API virtual ~UGameInventory();


#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_70_PROLOG
#define FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_73_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameInventory;

// ********** End Class UGameInventory *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_GameSystems_Inventory_GameInventory_h

// ********** Begin Enum ECategory *****************************************************************
#define FOREACH_ENUM_ECATEGORY(op) \
	op(ECategory::Equipment) \
	op(ECategory::Consumable) \
	op(ECategory::Other) 

enum class ECategory : int8;
template<> struct TIsUEnumClass<ECategory> { enum { Value = true }; };
template<> PROJECTDREAM_API UEnum* StaticEnum<ECategory>();
// ********** End Enum ECategory *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
