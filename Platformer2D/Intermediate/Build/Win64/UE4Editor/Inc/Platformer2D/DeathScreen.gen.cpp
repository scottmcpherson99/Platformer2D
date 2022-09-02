// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/DeathScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathScreen() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_UDeathScreen_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UDeathScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDeathScreen::execOnQuitClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeathScreen::execOnMainMenuClickedClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenuClickedClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeathScreen::execOnRetryClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetryClicked();
		P_NATIVE_END;
	}
	void UDeathScreen::StaticRegisterNativesUDeathScreen()
	{
		UClass* Class = UDeathScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMainMenuClickedClicked", &UDeathScreen::execOnMainMenuClickedClicked },
			{ "OnQuitClicked", &UDeathScreen::execOnQuitClicked },
			{ "OnRetryClicked", &UDeathScreen::execOnRetryClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeathScreen_OnMainMenuClickedClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathScreen_OnMainMenuClickedClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//open the main menu\n" },
		{ "ModuleRelativePath", "DeathScreen.h" },
		{ "ToolTip", "open the main menu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathScreen_OnMainMenuClickedClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathScreen, nullptr, "OnMainMenuClickedClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathScreen_OnMainMenuClickedClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathScreen_OnMainMenuClickedClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathScreen_OnMainMenuClickedClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathScreen_OnMainMenuClickedClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeathScreen_OnQuitClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathScreen_OnQuitClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//exit the application\n" },
		{ "ModuleRelativePath", "DeathScreen.h" },
		{ "ToolTip", "exit the application" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathScreen_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathScreen, nullptr, "OnQuitClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathScreen_OnQuitClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathScreen_OnQuitClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathScreen_OnQuitClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathScreen_OnQuitClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeathScreen_OnRetryClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathScreen_OnRetryClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <ButtonFunctions>\n//restart the level\n" },
		{ "ModuleRelativePath", "DeathScreen.h" },
		{ "ToolTip", "<ButtonFunctions>\nrestart the level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathScreen_OnRetryClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathScreen, nullptr, "OnRetryClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathScreen_OnRetryClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathScreen_OnRetryClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathScreen_OnRetryClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathScreen_OnRetryClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeathScreen_NoRegister()
	{
		return UDeathScreen::StaticClass();
	}
	struct Z_Construct_UClass_UDeathScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetryButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeathScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeathScreen_OnMainMenuClickedClicked, "OnMainMenuClickedClicked" }, // 451357112
		{ &Z_Construct_UFunction_UDeathScreen_OnQuitClicked, "OnQuitClicked" }, // 2070720814
		{ &Z_Construct_UFunction_UDeathScreen_OnRetryClicked, "OnRetryClicked" }, // 888159841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathScreen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DeathScreen.h" },
		{ "ModuleRelativePath", "DeathScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathScreen_Statics::NewProp_RetryButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DeathScreen" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Components>\n//button that will restart the level\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeathScreen.h" },
		{ "ToolTip", "<Components>\nbutton that will restart the level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeathScreen_Statics::NewProp_RetryButton = { "RetryButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathScreen, RetryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeathScreen_Statics::NewProp_RetryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreen_Statics::NewProp_RetryButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathScreen_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DeathScreen" },
		{ "Comment", "//button that will load the main menu\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeathScreen.h" },
		{ "ToolTip", "button that will load the main menu" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeathScreen_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathScreen, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeathScreen_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreen_Statics::NewProp_MainMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathScreen_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DeathScreen" },
		{ "Comment", "//button that will exit the application\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeathScreen.h" },
		{ "ToolTip", "button that will exit the application" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeathScreen_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathScreen, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeathScreen_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreen_Statics::NewProp_QuitButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeathScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathScreen_Statics::NewProp_RetryButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathScreen_Statics::NewProp_MainMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathScreen_Statics::NewProp_QuitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeathScreen_Statics::ClassParams = {
		&UDeathScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeathScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeathScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeathScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeathScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeathScreen, 516496897);
	template<> PLATFORMER2D_API UClass* StaticClass<UDeathScreen>()
	{
		return UDeathScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeathScreen(Z_Construct_UClass_UDeathScreen, &UDeathScreen::StaticClass, TEXT("/Script/Platformer2D"), TEXT("UDeathScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
