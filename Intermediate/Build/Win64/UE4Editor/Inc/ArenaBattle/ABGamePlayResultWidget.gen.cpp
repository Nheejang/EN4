// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ABGamePlayResultWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGamePlayResultWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayResultWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayResultWidget();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGamePlayWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABGamePlayResultWidget::StaticRegisterNativesUABGamePlayResultWidget()
	{
	}
	UClass* Z_Construct_UClass_UABGamePlayResultWidget_NoRegister()
	{
		return UABGamePlayResultWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UABGamePlayResultWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UABGamePlayWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ABGamePlayResultWidget.h" },
				{ "ModuleRelativePath", "Public/ABGamePlayResultWidget.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UABGamePlayResultWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UABGamePlayResultWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABGamePlayResultWidget, 3650453562);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGamePlayResultWidget(Z_Construct_UClass_UABGamePlayResultWidget, &UABGamePlayResultWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABGamePlayResultWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGamePlayResultWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
