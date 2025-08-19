// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/AI/CombatEnemy.h"

#ifdef PROJECTDREAM_CombatEnemy_generated_h
#error "CombatEnemy.generated.h already included, missing '#pragma once' in CombatEnemy.h"
#endif
#define PROJECTDREAM_CombatEnemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnEnemyDied **********************************************************
#define FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_24_DELEGATE \
PROJECTDREAM_API void FOnEnemyDied_DelegateWrapper(const FMulticastScriptDelegate& OnEnemyDied);


// ********** End Delegate FOnEnemyDied ************************************************************

// ********** Begin Class ACombatEnemy *************************************************************
#define FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckChargedAttack); \
	DECLARE_FUNCTION(execCheckCombo);


#define FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_CALLBACK_WRAPPERS
PROJECTDREAM_API UClass* Z_Construct_UClass_ACombatEnemy_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatEnemy(); \
	friend struct Z_Construct_UClass_ACombatEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_ACombatEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatEnemy, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_ACombatEnemy_NoRegister) \
	DECLARE_SERIALIZER(ACombatEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<ACombatEnemy*>(this); }


#define FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatEnemy(ACombatEnemy&&) = delete; \
	ACombatEnemy(const ACombatEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatEnemy); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACombatEnemy) \
	NO_API virtual ~ACombatEnemy();


#define FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_30_PROLOG
#define FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_CALLBACK_WRAPPERS \
	FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatEnemy;

// ********** End Class ACombatEnemy ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_Variant_Combat_AI_CombatEnemy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
