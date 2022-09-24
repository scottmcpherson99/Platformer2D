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
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATextRenderer_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ATextRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATextRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATextRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATextRenderer_Statics::ClassParams = {
		&ATextRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ATextRenderer, 2597001422);
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
