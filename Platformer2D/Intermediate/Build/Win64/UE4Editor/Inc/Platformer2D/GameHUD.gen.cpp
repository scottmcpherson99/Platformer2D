// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/GameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UGameHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UGameHUD::StaticRegisterNativesUGameHUD()
	{
	}
	UClass* Z_Construct_UClass_UGameHUD_NoRegister()
	{
		return UGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_UGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLives_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerLives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameHUD.h" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerCoins_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHUD" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Components>\n//button that will start a new game\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameHUD.h" },
		{ "ToolTip", "<Components>\nbutton that will start a new game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerCoins = { "PlayerCoins", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHUD, PlayerCoins), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerCoins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerLives_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHUD" },
		{ "Comment", "//button that will show the game settings\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameHUD.h" },
		{ "ToolTip", "button that will show the game settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerLives = { "PlayerLives", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHUD, PlayerLives), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerLives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerLives_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_Statics::NewProp_PlayerLives,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHUD_Statics::ClassParams = {
		&UGameHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHUD, 963039733);
	template<> PLATFORMER2D_API UClass* StaticClass<UGameHUD>()
	{
		return UGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHUD(Z_Construct_UClass_UGameHUD, &UGameHUD::StaticClass, TEXT("/Script/Platformer2D"), TEXT("UGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
