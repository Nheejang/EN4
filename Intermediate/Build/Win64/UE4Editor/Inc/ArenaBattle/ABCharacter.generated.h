// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef ARENABATTLE_ABCharacter_generated_h
#error "ABCharacter.generated.h already included, missing '#pragma once' in ABCharacter.h"
#endif
#define ARENABATTLE_ABCharacter_generated_h

#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	}


#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	}


#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABCharacter(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABCharacter(); \
public: \
	DECLARE_CLASS(AABCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABCharacter(); \
	friend ARENABATTLE_API class UClass* Z_Construct_UClass_AABCharacter(); \
public: \
	DECLARE_CLASS(AABCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABCharacter(AABCharacter&&); \
	NO_API AABCharacter(const AABCharacter&); \
public:


#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABCharacter(AABCharacter&&); \
	NO_API AABCharacter(const AABCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABCharacter)


#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AABCharacter, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__CanNextCombo() { return STRUCT_OFFSET(AABCharacter, CanNextCombo); } \
	FORCEINLINE static uint32 __PPO__IsComboInputOn() { return STRUCT_OFFSET(AABCharacter, IsComboInputOn); } \
	FORCEINLINE static uint32 __PPO__CurrentCombo() { return STRUCT_OFFSET(AABCharacter, CurrentCombo); } \
	FORCEINLINE static uint32 __PPO__MaxCombo() { return STRUCT_OFFSET(AABCharacter, MaxCombo); } \
	FORCEINLINE static uint32 __PPO__ABAnim() { return STRUCT_OFFSET(AABCharacter, ABAnim); } \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AABCharacter, AttackRange); } \
	FORCEINLINE static uint32 __PPO__AttackRadius() { return STRUCT_OFFSET(AABCharacter, AttackRadius); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(AABCharacter, CurrentState); } \
	FORCEINLINE static uint32 __PPO__bIsPlayer() { return STRUCT_OFFSET(AABCharacter, bIsPlayer); } \
	FORCEINLINE static uint32 __PPO__ABAIController() { return STRUCT_OFFSET(AABCharacter, ABAIController); } \
	FORCEINLINE static uint32 __PPO__ABPlayerController() { return STRUCT_OFFSET(AABCharacter, ABPlayerController); } \
	FORCEINLINE static uint32 __PPO__DeadTimer() { return STRUCT_OFFSET(AABCharacter, DeadTimer); }


#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_12_PROLOG
#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_RPC_WRAPPERS \
	UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_INCLASS \
	UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_INCLASS_NO_PURE_DECLS \
	UE4CPP_Source_ArenaBattle_Public_ABCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4CPP_Source_ArenaBattle_Public_ABCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
