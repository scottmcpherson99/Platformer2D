// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_MobilePlatform_generated_h
#error "MobilePlatform.generated.h already included, missing '#pragma once' in MobilePlatform.h"
#endif
#define PLATFORMER2D_MobilePlatform_generated_h

#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_SPARSE_DATA
#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTimelineProgress);


#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimelineProgress);


#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMobilePlatform(); \
	friend struct Z_Construct_UClass_AMobilePlatform_Statics; \
public: \
	DECLARE_CLASS(AMobilePlatform, ATileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AMobilePlatform)


#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMobilePlatform(); \
	friend struct Z_Construct_UClass_AMobilePlatform_Statics; \
public: \
	DECLARE_CLASS(AMobilePlatform, ATileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AMobilePlatform)


#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMobilePlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMobilePlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMobilePlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMobilePlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMobilePlatform(AMobilePlatform&&); \
	NO_API AMobilePlatform(const AMobilePlatform&); \
public:


#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMobilePlatform(AMobilePlatform&&); \
	NO_API AMobilePlatform(const AMobilePlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMobilePlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMobilePlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMobilePlatform)


#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__platformMesh() { return STRUCT_OFFSET(AMobilePlatform, platformMesh); } \
	FORCEINLINE static uint32 __PPO__CurveFloat() { return STRUCT_OFFSET(AMobilePlatform, CurveFloat); } \
	FORCEINLINE static uint32 __PPO__StartLoc() { return STRUCT_OFFSET(AMobilePlatform, StartLoc); } \
	FORCEINLINE static uint32 __PPO__EndLoc() { return STRUCT_OFFSET(AMobilePlatform, EndLoc); }


#define Platformer2D_Source_Platformer2D_MobilePlatform_h_13_PROLOG
#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_RPC_WRAPPERS \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_INCLASS \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer2D_Source_Platformer2D_MobilePlatform_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_PRIVATE_PROPERTY_OFFSET \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_SPARSE_DATA \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_INCLASS_NO_PURE_DECLS \
	Platformer2D_Source_Platformer2D_MobilePlatform_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AMobilePlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer2D_Source_Platformer2D_MobilePlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
