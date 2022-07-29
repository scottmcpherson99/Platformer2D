// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Collectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectable() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACollectable();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
// End Cross Module References
	void ACollectable::StaticRegisterNativesACollectable()
	{
	}
	UClass* Z_Construct_UClass_ACollectable_NoRegister()
	{
		return ACollectable::StaticClass();
	}
	struct Z_Construct_UClass_ACollectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_audioManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperSpriteActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Collectable.h" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_spriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpriteComponent" },
		{ "Comment", "/** Sprite component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collectable.h" },
		{ "ToolTip", "Sprite component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_spriteComponent = { "spriteComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, spriteComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_spriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_spriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** TriggerBox component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collectable.h" },
		{ "ToolTip", "TriggerBox component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_audioManager_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Audio>\n//handles playing audio\n" },
		{ "ModuleRelativePath", "Collectable.h" },
		{ "ToolTip", "<Audio>\nhandles playing audio" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_audioManager = { "audioManager", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollectable, audioManager), Z_Construct_UClass_AAudioManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_audioManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_audioManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_spriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_TriggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_audioManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollectable_Statics::ClassParams = {
		&ACollectable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACollectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollectable, 2857874710);
	template<> PLATFORMER2D_API UClass* StaticClass<ACollectable>()
	{
		return ACollectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollectable(Z_Construct_UClass_ACollectable, &ACollectable::StaticClass, TEXT("/Script/Platformer2D"), TEXT("ACollectable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
