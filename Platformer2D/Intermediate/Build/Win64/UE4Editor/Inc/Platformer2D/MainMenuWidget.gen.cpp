// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MainMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UMainMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UControlsWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenuWidget::execOnBackClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnHowToPlayClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHowToPlayClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnControlsClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControlsClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnQuitClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuWidget::execOnNewGameClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewGameClicked();
		P_NATIVE_END;
	}
	void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
	{
		UClass* Class = UMainMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackClicked", &UMainMenuWidget::execOnBackClicked },
			{ "OnControlsClicked", &UMainMenuWidget::execOnControlsClicked },
			{ "OnHowToPlayClicked", &UMainMenuWidget::execOnHowToPlayClicked },
			{ "OnNewGameClicked", &UMainMenuWidget::execOnNewGameClicked },
			{ "OnQuitClicked", &UMainMenuWidget::execOnQuitClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnBackClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnBackClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//go back to the main menu\n" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "go back to the main menu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnBackClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnBackClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnBackClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnBackClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnBackClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnBackClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnControlsClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnControlsClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//show the game settings\n" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "show the game settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnControlsClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnControlsClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnControlsClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnControlsClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnControlsClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnControlsClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnHowToPlayClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnHowToPlayClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//show the how to play screen\n" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "show the how to play screen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnHowToPlayClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnHowToPlayClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnHowToPlayClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnHowToPlayClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnHowToPlayClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnHowToPlayClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnNewGameClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnNewGameClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <ButtonFunctions>\n//start a new game\n" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "<ButtonFunctions>\nstart a new game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnNewGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnNewGameClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnNewGameClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnNewGameClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnNewGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnNewGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//exit the application\n" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "exit the application" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnQuitClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
	{
		return UMainMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FadeOutAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlsButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HowToPlayButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HowToPlayButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleBlock2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleBlock2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FadeImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlsWidgetHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controlsWidgetHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_OnBackClicked, "OnBackClicked" }, // 2693071451
		{ &Z_Construct_UFunction_UMainMenuWidget_OnControlsClicked, "OnControlsClicked" }, // 3795223650
		{ &Z_Construct_UFunction_UMainMenuWidget_OnHowToPlayClicked, "OnHowToPlayClicked" }, // 1972344359
		{ &Z_Construct_UFunction_UMainMenuWidget_OnNewGameClicked, "OnNewGameClicked" }, // 3976869829
		{ &Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked, "OnQuitClicked" }, // 921431760
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainMenuWidget.h" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeOutAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Comment", "//title animation\n" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "title animation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeOutAnimation = { "FadeOutAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, FadeOutAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeOutAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeOutAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_NewGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Components>\n//button that will start a new game\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "<Components>\nbutton that will start a new game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_NewGameButton = { "NewGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, NewGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_NewGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_NewGameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ControlsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//button that will show the game controls\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "button that will show the game controls" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ControlsButton = { "ControlsButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, ControlsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ControlsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ControlsButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_HowToPlayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//button that will show how to play the game\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "button that will show how to play the game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_HowToPlayButton = { "HowToPlayButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, HowToPlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_HowToPlayButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_HowToPlayButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//button that will exit the application\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "button that will exit the application" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//button that will exit the application\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "button that will exit the application" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_BackButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//title\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "title" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock = { "TitleBlock", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, TitleBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//title\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "title" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock2 = { "TitleBlock2", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, TitleBlock2), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//fade out image\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "fade out image" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeImage = { "FadeImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, FadeImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_controlsWidgetHUD_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuWidget" },
		{ "Comment", "//death screen hud to be played upon players death\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuWidget.h" },
		{ "ToolTip", "death screen hud to be played upon players death" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_controlsWidgetHUD = { "controlsWidgetHUD", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuWidget, controlsWidgetHUD), Z_Construct_UClass_UControlsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_controlsWidgetHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_controlsWidgetHUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeOutAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_NewGameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_ControlsButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_HowToPlayButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_BackButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_TitleBlock2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_FadeImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_controlsWidgetHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
		&UMainMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenuWidget, 1148628537);
	template<> PLATFORMER2D_API UClass* StaticClass<UMainMenuWidget>()
	{
		return UMainMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuWidget(Z_Construct_UClass_UMainMenuWidget, &UMainMenuWidget::StaticClass, TEXT("/Script/Platformer2D"), TEXT("UMainMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
