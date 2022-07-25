// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
#ifdef PLATFORMER2D_AudioManager_generated_h
#error "AudioManager.generated.h already included, missing '#pragma once' in AudioManager.h"
#endif
#define PLATFORMER2D_AudioManager_generated_h

#define Platformer2D_Source_Platformer2D_AudioManager_h_12_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_AudioManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayLoopingAudio);


#define Platformer2D_Source_Platformer2D_AudioManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayLoopingAudio);


#define Platformer2D_Source_Platformer2D_AudioManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAudioManager(); \
	friend struct Z_Construct_UClass_AAudioManager_Statics; \
public: \
	DECLARE_CLASS(AAudioManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AAudioManager)


#define Platformer2D_Source_Platformer2D_AudioManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAudioManager(); \
	friend struct Z_Construct_UClass_AAudioManager_Statics; \
public: \
	DECLARE_CLASS(AAudioManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AAudioManager)


#define Platformer2D_Source_Platformer2D_AudioManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAudioManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioManager(AAudioManager&&); \
	NO_API AAudioManager(const AAudioManager&); \
public:


#define Platformer2D_Source_Platformer2D_AudioManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioManager(AAudioManager&&); \
	NO_API AAudioManager(const AAudioManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAudioManager)


#define Platformer2D_Source_Platformer2D_AudioManager_h_12_PRIVATE_PROPERTY_OFFSET
#define Platformer2D_Source_Platformer2D_AudioManager_h_9_PROLOG
#define Platformer2D_Source_Platformer2D_AudioManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_INCLASS \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_AudioManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_AudioManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AAudioManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_AudioManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
