// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectDreamGameMode.h"

#ifdef PROJECTDREAM_ProjectDreamGameMode_generated_h
#error "ProjectDreamGameMode.generated.h already included, missing '#pragma once' in ProjectDreamGameMode.h"
#endif
#define PROJECTDREAM_ProjectDreamGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProjectDreamGameMode ****************************************************
PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamGameMode_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectDreamGameMode(); \
	friend struct Z_Construct_UClass_AProjectDreamGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AProjectDreamGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_AProjectDreamGameMode_NoRegister) \
	DECLARE_SERIALIZER(AProjectDreamGameMode)


#define FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProjectDreamGameMode(AProjectDreamGameMode&&) = delete; \
	AProjectDreamGameMode(const AProjectDreamGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDreamGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDreamGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProjectDreamGameMode) \
	NO_API virtual ~AProjectDreamGameMode();


#define FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h_12_PROLOG
#define FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProjectDreamGameMode;

// ********** End Class AProjectDreamGameMode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_ProjectDreamGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
