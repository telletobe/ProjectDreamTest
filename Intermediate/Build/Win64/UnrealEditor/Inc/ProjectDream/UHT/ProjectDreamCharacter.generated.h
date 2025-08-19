// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectDreamCharacter.h"

#ifdef PROJECTDREAM_ProjectDreamCharacter_generated_h
#error "ProjectDreamCharacter.generated.h already included, missing '#pragma once' in ProjectDreamCharacter.h"
#endif
#define PROJECTDREAM_ProjectDreamCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACharacter;
class UGameInventory;

// ********** Begin Delegate FOnInventoryEvent *****************************************************
#define FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_16_DELEGATE \
PROJECTDREAM_API void FOnInventoryEvent_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryEvent);


// ********** End Delegate FOnInventoryEvent *******************************************************

// ********** Begin Delegate FOnInteractAction *****************************************************
#define FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_17_DELEGATE \
PROJECTDREAM_API void FOnInteractAction_DelegateWrapper(const FMulticastScriptDelegate& OnInteractAction, ACharacter* Interactor);


// ********** End Delegate FOnInteractAction *******************************************************

// ********** Begin Delegate FOnReadyInventory *****************************************************
#define FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_18_DELEGATE \
PROJECTDREAM_API void FOnReadyInventory_DelegateWrapper(const FMulticastScriptDelegate& OnReadyInventory, UGameInventory* PlayerInventory);


// ********** End Delegate FOnReadyInventory *******************************************************

// ********** Begin Class AProjectDreamCharacter ***************************************************
#define FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamCharacter_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectDreamCharacter(); \
	friend struct Z_Construct_UClass_AProjectDreamCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectDreamCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_AProjectDreamCharacter_NoRegister) \
	DECLARE_SERIALIZER(AProjectDreamCharacter)


#define FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectDreamCharacter(AProjectDreamCharacter&&) = delete; \
	AProjectDreamCharacter(const AProjectDreamCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDreamCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDreamCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProjectDreamCharacter) \
	NO_API virtual ~AProjectDreamCharacter();


#define FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_24_PROLOG
#define FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectDreamCharacter;

// ********** End Class AProjectDreamCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
