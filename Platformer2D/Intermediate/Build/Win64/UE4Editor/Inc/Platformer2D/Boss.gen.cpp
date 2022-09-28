// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Boss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss() {}
// Cross Module References
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EBossAIState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABoss_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABoss();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemyBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EBossAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EBossAIState, Z_Construct_UPackage__Script_Platformer2D(), TEXT("EBossAIState"));
		}
		return Singleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EBossAIState>()
	{
		return EBossAIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBossAIState(EBossAIState_StaticEnum, TEXT("/Script/Platformer2D"), TEXT("EBossAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Platformer2D_EBossAIState_Hash() { return 729775914U; }
	UEnum* Z_Construct_UEnum_Platformer2D_EBossAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Platformer2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBossAIState"), 0, Get_Z_Construct_UEnum_Platformer2D_EBossAIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBossAIState::EATTACKPLAYER", (int64)EBossAIState::EATTACKPLAYER },
				{ "EBossAIState::EWANDER", (int64)EBossAIState::EWANDER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "EATTACKPLAYER.Comment", "/**\n * \n */" },
				{ "EATTACKPLAYER.DisplayName", "AttackPlayer" },
				{ "EATTACKPLAYER.Name", "EBossAIState::EATTACKPLAYER" },
				{ "EWANDER.Comment", "/**\n * \n */" },
				{ "EWANDER.DisplayName", "Wander" },
				{ "EWANDER.Name", "EBossAIState::EWANDER" },
				{ "ModuleRelativePath", "Boss.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
				nullptr,
				"EBossAIState",
				"EBossAIState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABoss::execBezierTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BezierTimelineProgress(Z_Param_value);
		P_NATIVE_END;
	}
	void ABoss::StaticRegisterNativesABoss()
	{
		UClass* Class = ABoss::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BezierTimelineProgress", &ABoss::execBezierTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics
	{
		struct Boss_eventBezierTimelineProgress_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boss_eventBezierTimelineProgress_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoss, nullptr, "BezierTimelineProgress", nullptr, nullptr, sizeof(Boss_eventBezierTimelineProgress_Parms), Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoss_BezierTimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoss_BezierTimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoss_NoRegister()
	{
		return ABoss::StaticClass();
	}
	struct Z_Construct_UClass_ABoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BezierCurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BezierCurveFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upperLeftBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_upperLeftBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lowerRightBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lowerRightBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoss_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoss_BezierTimelineProgress, "BezierTimelineProgress" }, // 2097428211
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Boss.h" },
		{ "ModuleRelativePath", "Boss.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_BezierCurveFloat_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Movement>\n//timeline actor\n" },
		{ "ModuleRelativePath", "Boss.h" },
		{ "ToolTip", "<Movement>\ntimeline actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_BezierCurveFloat = { "BezierCurveFloat", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, BezierCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_BezierCurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_BezierCurveFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_upperLeftBound_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Attributes>\n" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Boss.h" },
		{ "ToolTip", "<Attributes>" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_upperLeftBound = { "upperLeftBound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, upperLeftBound), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_upperLeftBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_upperLeftBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_lowerRightBound_MetaData[] = {
		{ "Category", "Spawn" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_lowerRightBound = { "lowerRightBound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, lowerRightBound), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_lowerRightBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_lowerRightBound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_BezierCurveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_upperLeftBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_lowerRightBound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Statics::ClassParams = {
		&ABoss::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoss, 2903538685);
	template<> PLATFORMER2D_API UClass* StaticClass<ABoss>()
	{
		return ABoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoss(Z_Construct_UClass_ABoss, &ABoss::StaticClass, TEXT("/Script/Platformer2D"), TEXT("ABoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
