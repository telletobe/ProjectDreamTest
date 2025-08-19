// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectDreamPlayerController.h"

#ifdef PROJECTDREAM_ProjectDreamPlayerController_generated_h
#error "ProjectDreamPlayerController.generated.h already included, missing '#pragma once' in ProjectDreamPlayerController.h"
#endif
#define PROJECTDREAM_ProjectDreamPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectDreamPlayerController ********************************************
PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamPlayerController_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_ProjectDreamPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectDreamPlayerController(); \
	friend struct Z_Construct_UClass_AProjectDreamPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectDreamPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_AProjectDreamPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AProjectDreamPlayerController)


#define FID_ProjectDream_Source_ProjectDream_ProjectDreamPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectDreamPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectDreamPlayerController(AProjectDreamPlayerController&&) = delete; \
	AProjectDreamPlayerController(const AProjectDreamPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDreamPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDreamPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectDreamPlayerController) \
	NO_API virtual ~AProjectDreamPlayerController();


#define FID_ProjectDream_Source_ProjectDream_ProjectDreamPlayerController_h_15_PROLOG
#define FID_ProjectDream_Source_ProjectDream_ProjectDreamPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_ProjectDreamPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_ProjectDreamPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectDreamPlayerController;

// ********** End Class AProjectDreamPlayerController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_ProjectDreamPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
