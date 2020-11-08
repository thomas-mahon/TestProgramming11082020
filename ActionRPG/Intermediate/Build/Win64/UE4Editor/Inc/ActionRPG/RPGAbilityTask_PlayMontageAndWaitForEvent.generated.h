// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayEventData;
class UGameplayAbility;
class UAnimMontage;
struct FGameplayTagContainer;
class URPGAbilityTask_PlayMontageAndWaitForEvent;
#ifdef ACTIONRPG_RPGAbilityTask_PlayMontageAndWaitForEvent_generated_h
#error "RPGAbilityTask_PlayMontageAndWaitForEvent.generated.h already included, missing '#pragma once' in RPGAbilityTask_PlayMontageAndWaitForEvent.h"
#endif
#define ACTIONRPG_RPGAbilityTask_PlayMontageAndWaitForEvent_generated_h

#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_12_DELEGATE \
struct _Script_ActionRPG_eventRPGPlayMontageAndWaitForEventDelegate_Parms \
{ \
	FGameplayTag EventTag; \
	FGameplayEventData EventData; \
}; \
static inline void FRPGPlayMontageAndWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& RPGPlayMontageAndWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData) \
{ \
	_Script_ActionRPG_eventRPGPlayMontageAndWaitForEventDelegate_Parms Parms; \
	Parms.EventTag=EventTag; \
	Parms.EventData=EventData; \
	RPGPlayMontageAndWaitForEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent);


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent);


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAbilityTask_PlayMontageAndWaitForEvent(); \
	friend struct Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(URPGAbilityTask_PlayMontageAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGAbilityTask_PlayMontageAndWaitForEvent)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesURPGAbilityTask_PlayMontageAndWaitForEvent(); \
	friend struct Z_Construct_UClass_URPGAbilityTask_PlayMontageAndWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(URPGAbilityTask_PlayMontageAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGAbilityTask_PlayMontageAndWaitForEvent)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAbilityTask_PlayMontageAndWaitForEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAbilityTask_PlayMontageAndWaitForEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAbilityTask_PlayMontageAndWaitForEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAbilityTask_PlayMontageAndWaitForEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAbilityTask_PlayMontageAndWaitForEvent(URPGAbilityTask_PlayMontageAndWaitForEvent&&); \
	NO_API URPGAbilityTask_PlayMontageAndWaitForEvent(const URPGAbilityTask_PlayMontageAndWaitForEvent&); \
public:


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAbilityTask_PlayMontageAndWaitForEvent(URPGAbilityTask_PlayMontageAndWaitForEvent&&); \
	NO_API URPGAbilityTask_PlayMontageAndWaitForEvent(const URPGAbilityTask_PlayMontageAndWaitForEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAbilityTask_PlayMontageAndWaitForEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAbilityTask_PlayMontageAndWaitForEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAbilityTask_PlayMontageAndWaitForEvent)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MontageToPlay() { return STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, MontageToPlay); } \
	FORCEINLINE static uint32 __PPO__EventTags() { return STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, EventTags); } \
	FORCEINLINE static uint32 __PPO__Rate() { return STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, Rate); } \
	FORCEINLINE static uint32 __PPO__StartSection() { return STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, StartSection); } \
	FORCEINLINE static uint32 __PPO__AnimRootMotionTranslationScale() { return STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, AnimRootMotionTranslationScale); } \
	FORCEINLINE static uint32 __PPO__bStopWhenAbilityEnds() { return STRUCT_OFFSET(URPGAbilityTask_PlayMontageAndWaitForEvent, bStopWhenAbilityEnds); }


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_20_PROLOG
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_INCLASS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGAbilityTask_PlayMontageAndWaitForEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_Abilities_RPGAbilityTask_PlayMontageAndWaitForEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
