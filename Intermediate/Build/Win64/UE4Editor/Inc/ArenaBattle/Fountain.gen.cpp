// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Fountain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFountain() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AFountain_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AFountain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFountain::StaticRegisterNativesAFountain()
	{
	}
	UClass* Z_Construct_UClass_AFountain_NoRegister()
	{
		return AFountain::StaticClass();
	}
	UClass* Z_Construct_UClass_AFountain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Fountain.h" },
				{ "ModuleRelativePath", "Public/Fountain.h" },
				{ "ToolTip", "?\xf0\xb8\xae\xbe? ??????\xc6\xae ????  ?\xd8\xbf? GENERATED_BODY?? ?\xd4\xb2?????" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "Stat" },
				{ "ModuleRelativePath", "Public/Fountain.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RotateSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AFountain, RotateSpeed), METADATA_PARAMS(NewProp_RotateSpeed_MetaData, ARRAY_COUNT(NewProp_RotateSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
				{ "Category", "Fountain" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Fountain.h" },
				{ "ToolTip", "?\xf0\xb8\xae\xbe? ?????? ???? ??????  ?????????? ?????\xcf\xb0? ???? uasset?\xcc\xb6??? ?????? \xc8\xae???\xda\xb8? ????.\n?\xdc\xba??????\xce\xb4? ?????? \xc3\xbc???????? ?????????? ?\xd9\xb8? ?????\xcd\xb8? \xc7\xb0??. (ex?\xc6\xb7?)\n????\xc6\xbd?\xde\xbd??? ?\xcf\xb4\xc3\xbb?, ?\xd8\xbd??\xc4\xb4? ??????, ??\xc6\xbc\xc5\xac?? ????, ???\xd7\xb8????? ???????? \xc7\xa5?\xc3\xb5?." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement = { UE4CodeGen_Private::EPropertyClass::Object, "Movement", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFountain, Movement), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(NewProp_Movement_MetaData, ARRAY_COUNT(NewProp_Movement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
				{ "Category", "ID" },
				{ "ModuleRelativePath", "Public/Fountain.h" },
				{ "ToolTip", "??\xc3\xbc?????? ?\xc6\xb7?\xc3\xb3?? UPROPERTY?? VisibleAnywhere?? ?\xd3\xbc??????\xcd\xb8? ?????\xd2\xbc? ???? ?\xd9\xb8? ??\xc3\xbc?? ???? ?\xd3\xbc????? ?????? ?? ????,\n???????? ?????\xcd\xb8? ?????? ?? ????\n?\xcc\xb4? ??\xc3\xbc?????? UStaticMeshComponent ?? ?\xd9\xb8? Component?? ?????? ?? ???\xc2\xb0? ?? ???\xd9\xb0? ?????\xcf\xb8? ??.\n       UPROPERTY(VIsibleAnywhere)\n?\xf0\xb8\xae\xbe? ?????\xcd\xbf??? ?\xd3\xbc??? ?????\xcd\xb8? ?????\xcf\xb7??? EditAnywhere ????\nCategory = ?\xd0\xb7??? ??\xc4\xa2???? \xc5\xb0???\xe5\xb8\xa6 ?\xdf\xb0??\xcf\xb8? ?????? ?\xd0\xb7? ?\xd3\xbc????? ?????? ?? ????." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFountain, ID), METADATA_PARAMS(NewProp_ID_MetaData, ARRAY_COUNT(NewProp_ID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splash_MetaData[] = {
				{ "Category", "Fountain" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Fountain.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Splash = { UE4CodeGen_Private::EPropertyClass::Object, "Splash", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFountain, Splash), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_Splash_MetaData, ARRAY_COUNT(NewProp_Splash_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[] = {
				{ "Category", "Fountain" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Fountain.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Light = { UE4CodeGen_Private::EPropertyClass::Object, "Light", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFountain, Light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(NewProp_Light_MetaData, ARRAY_COUNT(NewProp_Light_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[] = {
				{ "Category", "Fountain" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Fountain.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Water = { UE4CodeGen_Private::EPropertyClass::Object, "Water", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFountain, Water), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Water_MetaData, ARRAY_COUNT(NewProp_Water_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
				{ "Category", "Fountain" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Fountain.h" },
				{ "ToolTip", "??\xc3\xbc?\xde\xb8??? ?\xda\xb5????? (SMART_PTR ???? ????)  ??????\xc6\xae ?\xd3\xbc????? ON\n?????\xcd\xb7? ?????? ??\xc3\xbc ???? ?????\xcf\xb8? ???? ?????? ????" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Object, "Body", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFountain, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Body_MetaData, ARRAY_COUNT(NewProp_Body_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotateSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Splash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Light,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Water,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Body,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFountain>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFountain::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AFountain, 1321671448);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFountain(Z_Construct_UClass_AFountain, &AFountain::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AFountain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFountain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
