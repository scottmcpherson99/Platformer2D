// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/InPlayGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInPlayGameModeBase() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_AInPlayGameModeBase_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AInPlayGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AAudioManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AInPlayGameModeBase::StaticRegisterNativesAInPlayGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AInPlayGameModeBase_NoRegister()
	{
		return AInPlayGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AInPlayGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_audioManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backgroundMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_backgroundMusic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInPlayGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInPlayGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InPlayGameModeBase.h" },
		{ "ModuleRelativePath", "InPlayGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_GameHUDWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Widgets>\n//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "InPlayGameModeBase.h" },
		{ "ToolTip", "<Widgets>\nwidget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_GameHUDWidget = { "GameHUDWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInPlayGameModeBase, GameHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_GameHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_GameHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_audioManager_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Audio>\n//handles playing audio\n" },
		{ "ModuleRelativePath", "InPlayGameModeBase.h" },
		{ "ToolTip", "<Audio>\nhandles playing audio" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_audioManager = { "audioManager", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInPlayGameModeBase, audioManager), Z_Construct_UClass_AAudioManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_audioManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_audioManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_backgroundMusic_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "//background music\n" },
		{ "ModuleRelativePath", "InPlayGameModeBase.h" },
		{ "ToolTip", "background music" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_backgroundMusic = { "backgroundMusic", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInPlayGameModeBase, backgroundMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_backgroundMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_backgroundMusic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInPlayGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_GameHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_audioManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInPlayGameModeBase_Statics::NewProp_backgroundMusic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInPlayGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInPlayGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInPlayGameModeBase_Statics::ClassParams = {
		&AInPlayGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInPlayGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInPlayGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInPlayGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInPlayGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInPlayGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInPlayGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInPlayGameModeBase, 705149911);
	template<> PLATFORMER2D_API UClass* StaticClass<AInPlayGameModeBase>()
	{
		return AInPlayGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInPlayGameModeBase(Z_Construct_UClass_AInPlayGameModeBase, &AInPlayGameModeBase::StaticClass, TEXT("/Script/Platformer2D"), TEXT("AInPlayGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInPlayGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
