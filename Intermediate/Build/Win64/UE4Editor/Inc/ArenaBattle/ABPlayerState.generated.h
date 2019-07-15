// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABPlayerState_generated_h
#error "ABPlayerState.generated.h already included, missing '#pragma once' in ABPlayerState.h"
#endif
#define ARENABATTLE_ABPlayerState_generated_h

#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_RPC_WRAPPERS
#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABPlayerState(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABPlayerState(); \
public: \
	DECLARE_CLASS(AABPlayerState, APlayerState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABPlayerState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAABPlayerState(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABPlayerState(); \
public: \
	DECLARE_CLASS(AABPlayerState, APlayerState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABPlayerState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABPlayerState(AABPlayerState&&); \
	NO_API AABPlayerState(const AABPlayerState&); \
public:


#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABPlayerState(AABPlayerState&&); \
	NO_API AABPlayerState(const AABPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABPlayerState)


#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameScore() { return STRUCT_OFFSET(AABPlayerState, GameScore); } \
	FORCEINLINE static uint32 __PPO__CharacterLevel() { return STRUCT_OFFSET(AABPlayerState, CharacterLevel); } \
	FORCEINLINE static uint32 __PPO__Exp() { return STRUCT_OFFSET(AABPlayerState, Exp); } \
	FORCEINLINE static uint32 __PPO__GameHighScore() { return STRUCT_OFFSET(AABPlayerState, GameHighScore); } \
	FORCEINLINE static uint32 __PPO__CharacterIndex() { return STRUCT_OFFSET(AABPlayerState, CharacterIndex); }


#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_13_PROLOG
#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_RPC_WRAPPERS \
	UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_INCLASS \
	UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4CPP_Source_ArenaBattle_Public_ABPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
