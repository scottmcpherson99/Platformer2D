// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/TextRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderer() {}
// Cross Module References
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_TextRendered();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATextRenderer_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATextRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	static UEnum* TextRendered_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_TextRendered, Z_Construct_UPackage__Script_Platformer2D(), TEXT("TextRendered"));
		}
		return Singleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<TextRendered>()
	{
		return TextRendered_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextRendered(TextRendered_StaticEnum, TEXT("/Script/Platformer2D"), TEXT("TextRendered"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Platformer2D_TextRendered_Hash() { return 3164308625U; }
	UEnum* Z_Construct_UEnum_Platformer2D_TextRendered()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Platformer2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextRendered"), 0, Get_Z_Construct_UEnum_Platformer2D_TextRendered_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Pickup", (int64)Pickup },
				{ "EnemyIntro", (int64)EnemyIntro },
				{ "BreakableTile", (int64)BreakableTile },
				{ "Movingplatform", (int64)Movingplatform },
				{ "FallingTile", (int64)FallingTile },
				{ "Spikes", (int64)Spikes },
				{ "Door", (int64)Door },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BreakableTile.DisplayName", "BreakableTile" },
				{ "BreakableTile.Name", "BreakableTile" },
				{ "Door.DisplayName", "Door" },
				{ "Door.Name", "Door" },
				{ "EnemyIntro.DisplayName", "EnemyIntro" },
				{ "EnemyIntro.Name", "EnemyIntro" },
				{ "FallingTile.DisplayName", "FallingTile" },
				{ "FallingTile.Name", "FallingTile" },
				{ "ModuleRelativePath", "TextRenderer.h" },
				{ "Movingplatform.DisplayName", "MovingPlatform" },
				{ "Movingplatform.Name", "Movingplatform" },
				{ "Pickup.DisplayName", "Pickup" },
				{ "Pickup.Name", "Pickup" },
				{ "Spikes.DisplayName", "Spikes" },
				{ "Spikes.Name", "Spikes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
				nullptr,
				"TextRendered",
				"TextRendered",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ATextRenderer::StaticRegisterNativesATextRenderer()
	{
	}
	UClass* Z_Construct_UClass_ATextRenderer_NoRegister()
	{
		return ATextRenderer::StaticClass();
	}
	struct Z_Construct_UClass_ATextRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneComp__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneComp_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textRenderComp__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_textRenderComp_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textRendered_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_textRendered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATextRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TextRenderer.h" },
		{ "ModuleRelativePath", "TextRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderer_Statics::NewProp_sceneComp__MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TextRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextRenderer_Statics::NewProp_sceneComp_ = { "sceneComp_", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATextRenderer, sceneComp_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATextRenderer_Statics::NewProp_sceneComp__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderer_Statics::NewProp_sceneComp__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRenderComp__MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TextRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRenderComp_ = { "textRenderComp_", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATextRenderer, textRenderComp_), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRenderComp__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRenderComp__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRendered_MetaData[] = {
		{ "Category", "Text to render" },
		{ "Comment", "//enum to specify what text to render\n" },
		{ "ModuleRelativePath", "TextRenderer.h" },
		{ "ToolTip", "enum to specify what text to render" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRendered = { "textRendered", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATextRenderer, textRendered), Z_Construct_UEnum_Platformer2D_TextRendered, METADATA_PARAMS(Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRendered_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATextRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderer_Statics::NewProp_sceneComp_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRenderComp_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderer_Statics::NewProp_textRendered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATextRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATextRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATextRenderer_Statics::ClassParams = {
		&ATextRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATextRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATextRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATextRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATextRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATextRenderer, 2682992242);
	template<> PLATFORMER2D_API UClass* StaticClass<ATextRenderer>()
	{
		return ATextRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATextRenderer(Z_Construct_UClass_ATextRenderer, &ATextRenderer::StaticClass, TEXT("/Script/Platformer2D"), TEXT("ATextRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATextRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
