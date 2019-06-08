// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGamePlayWidget_generated_h
#error "ABGamePlayWidget.generated.h already included, missing '#pragma once' in ABGamePlayWidget.h"
#endif
#define ARENABATTLE_ABGamePlayWidget_generated_h

#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRetryGameClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRetryGameClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReturnToTitleClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReturnToTitleClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResumeClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResumeClicked(); \
		P_NATIVE_END; \
	}


#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRetryGameClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRetryGameClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReturnToTitleClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReturnToTitleClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResumeClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResumeClicked(); \
		P_NATIVE_END; \
	}


#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGamePlayWidget(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABGamePlayWidget(); \
public: \
	DECLARE_CLASS(UABGamePlayWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGamePlayWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUABGamePlayWidget(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_UABGamePlayWidget(); \
public: \
	DECLARE_CLASS(UABGamePlayWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGamePlayWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGamePlayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGamePlayWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGamePlayWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGamePlayWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGamePlayWidget(UABGamePlayWidget&&); \
	NO_API UABGamePlayWidget(const UABGamePlayWidget&); \
public:


#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGamePlayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGamePlayWidget(UABGamePlayWidget&&); \
	NO_API UABGamePlayWidget(const UABGamePlayWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGamePlayWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGamePlayWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGamePlayWidget)


#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResumeButton() { return STRUCT_OFFSET(UABGamePlayWidget, ResumeButton); } \
	FORCEINLINE static uint32 __PPO__ReturnToTitleButton() { return STRUCT_OFFSET(UABGamePlayWidget, ReturnToTitleButton); } \
	FORCEINLINE static uint32 __PPO__RetryGameButton() { return STRUCT_OFFSET(UABGamePlayWidget, RetryGameButton); }


#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_12_PROLOG
#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_INCLASS \
	ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_Public_ABGamePlayWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
