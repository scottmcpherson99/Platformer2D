// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_SaveGameStats_generated_h
#error "SaveGameStats.generated.h already included, missing '#pragma once' in SaveGameStats.h"
#endif
#define PLATFORMER2D_SaveGameStats_generated_h

#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_RPC_WRAPPERS
#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameStats(); \
	friend struct Z_Construct_UClass_USaveGameStats_Statics; \
public: \
	DECLARE_CLASS(USaveGameStats, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(USaveGameStats)


#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameStats(); \
	friend struct Z_Construct_UClass_USaveGameStats_Statics; \
public: \
	DECLARE_CLASS(USaveGameStats, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(USaveGameStats)


#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameStats(USaveGameStats&&); \
	NO_API USaveGameStats(const USaveGameStats&); \
public:


#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameStats(USaveGameStats&&); \
	NO_API USaveGameStats(const USaveGameStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameStats)


#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__lives() { return STRUCT_OFFSET(USaveGameStats, lives); } \
	FORCEINLINE static uint32 __PPO__coins() { return STRUCT_OFFSET(USaveGameStats, coins); } \
	FORCEINLINE static uint32 __PPO__bullets() { return STRUCT_OFFSET(USaveGameStats, bullets); } \
	FORCEINLINE static uint32 __PPO__levelName() { return STRUCT_OFFSET(USaveGameStats, levelName); }


#define Platformer2D_Source_Platformer2D_SaveGameStats_h_12_PROLOG
#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_INCLASS \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_SaveGameStats_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_SaveGameStats_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class USaveGameStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_SaveGameStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
