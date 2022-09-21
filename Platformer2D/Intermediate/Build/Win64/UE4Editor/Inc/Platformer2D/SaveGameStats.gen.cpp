// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/SaveGameStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameStats() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_USaveGameStats_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_USaveGameStats();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void USaveGameStats::StaticRegisterNativesUSaveGameStats()
	{
	}
	UClass* Z_Construct_UClass_USaveGameStats_NoRegister()
	{
		return USaveGameStats::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lives_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coins_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_coins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bullets_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bullets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_levelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGameStats.h" },
		{ "ModuleRelativePath", "SaveGameStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStats_Statics::NewProp_lives_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Attributes>\n// the player's lives total\n" },
		{ "ModuleRelativePath", "SaveGameStats.h" },
		{ "ToolTip", "<Attributes>\nthe player's lives total" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameStats_Statics::NewProp_lives = { "lives", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameStats, lives), METADATA_PARAMS(Z_Construct_UClass_USaveGameStats_Statics::NewProp_lives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStats_Statics::NewProp_lives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStats_Statics::NewProp_coins_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "//the players coin total\n" },
		{ "ModuleRelativePath", "SaveGameStats.h" },
		{ "ToolTip", "the players coin total" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameStats_Statics::NewProp_coins = { "coins", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameStats, coins), METADATA_PARAMS(Z_Construct_UClass_USaveGameStats_Statics::NewProp_coins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStats_Statics::NewProp_coins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStats_Statics::NewProp_bullets_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "//the players bullet total\n" },
		{ "ModuleRelativePath", "SaveGameStats.h" },
		{ "ToolTip", "the players bullet total" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameStats_Statics::NewProp_bullets = { "bullets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameStats, bullets), METADATA_PARAMS(Z_Construct_UClass_USaveGameStats_Statics::NewProp_bullets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStats_Statics::NewProp_bullets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStats_Statics::NewProp_levelName_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// the level name the player reached\n" },
		{ "ModuleRelativePath", "SaveGameStats.h" },
		{ "ToolTip", "the level name the player reached" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USaveGameStats_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameStats, levelName), METADATA_PARAMS(Z_Construct_UClass_USaveGameStats_Statics::NewProp_levelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStats_Statics::NewProp_levelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameStats_Statics::NewProp_lives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameStats_Statics::NewProp_coins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameStats_Statics::NewProp_bullets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameStats_Statics::NewProp_levelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameStats_Statics::ClassParams = {
		&USaveGameStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStats_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameStats, 1101258848);
	template<> PLATFORMER2D_API UClass* StaticClass<USaveGameStats>()
	{
		return USaveGameStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameStats(Z_Construct_UClass_USaveGameStats, &USaveGameStats::StaticClass, TEXT("/Script/Platformer2D"), TEXT("USaveGameStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
