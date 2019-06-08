// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABGamePlayWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGamePlayWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked();
	ARENABATTLE_API UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UABGamePlayWidget::StaticRegisterNativesUABGamePlayWidget()
	{
		UClass* Class = UABGamePlayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumeClicked", &UABGamePlayWidget::execOnResumeClicked },
			{ "OnRetryGameClicked", &UABGamePlayWidget::execOnRetryGameClicked },
			{ "OnReturnToTitleClicked", &UABGamePlayWidget::execOnReturnToTitleClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGamePlayWidget, "OnResumeClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGamePlayWidget, "OnRetryGameClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGamePlayWidget, "OnReturnToTitleClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABGamePlayWidget_NoRegister()
	{
		return UABGamePlayWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UABGamePlayWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UABGamePlayWidget_OnResumeClicked, "OnResumeClicked" }, // 2455840109
				{ &Z_Construct_UFunction_UABGamePlayWidget_OnRetryGameClicked, "OnRetryGameClicked" }, // 2071429169
				{ &Z_Construct_UFunction_UABGamePlayWidget_OnReturnToTitleClicked, "OnReturnToTitleClicked" }, // 114696191
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABGamePlayWidget.h" },
				{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryGameButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetryGameButton = { UE4CodeGen_Private::EPropertyClass::Object, "RetryGameButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABGamePlayWidget, RetryGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_RetryGameButton_MetaData, ARRAY_COUNT(NewProp_RetryGameButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnToTitleButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnToTitleButton = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnToTitleButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABGamePlayWidget, ReturnToTitleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_ReturnToTitleButton_MetaData, ARRAY_COUNT(NewProp_ReturnToTitleButton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ABGamePlayWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton = { UE4CodeGen_Private::EPropertyClass::Object, "ResumeButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UABGamePlayWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_ResumeButton_MetaData, ARRAY_COUNT(NewProp_ResumeButton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RetryGameButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnToTitleButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResumeButton,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UABGamePlayWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UABGamePlayWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABGamePlayWidget, 2421445212);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGamePlayWidget(Z_Construct_UClass_UABGamePlayWidget, &UABGamePlayWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABGamePlayWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGamePlayWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
