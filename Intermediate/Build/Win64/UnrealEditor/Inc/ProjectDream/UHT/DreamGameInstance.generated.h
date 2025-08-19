// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSystems/DreamGameInstance.h"

#ifdef PROJECTDREAM_DreamGameInstance_generated_h
#error "DreamGameInstance.generated.h already included, missing '#pragma once' in DreamGameInstance.h"
#endif
#define PROJECTDREAM_DreamGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDreamGameInstance *******************************************************
PROJECTDREAM_API UClass* Z_Construct_UClass_UDreamGameInstance_NoRegister();

#define FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDreamGameInstance(); \
	friend struct Z_Construct_UClass_UDreamGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDREAM_API UClass* Z_Construct_UClass_UDreamGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UDreamGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectDream"), Z_Construct_UClass_UDreamGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UDreamGameInstance)


#define FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDreamGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDreamGameInstance(UDreamGameInstance&&) = delete; \
	UDreamGameInstance(const UDreamGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDreamGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDreamGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDreamGameInstance) \
	NO_API virtual ~UDreamGameInstance();


#define FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h_14_PROLOG
#define FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDreamGameInstance;

// ********** End Class UDreamGameInstance *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectDream_Source_ProjectDream_GameSystems_DreamGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
