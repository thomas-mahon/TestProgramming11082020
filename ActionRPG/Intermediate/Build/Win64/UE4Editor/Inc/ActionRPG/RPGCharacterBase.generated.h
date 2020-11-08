// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
class URPGGameplayAbility;
struct FRPGItemSlot;
struct FHitResult;
class ARPGCharacterBase;
class AActor;
#ifdef ACTIONRPG_RPGCharacterBase_generated_h
#error "RPGCharacterBase.generated.h already included, missing '#pragma once' in RPGCharacterBase.h"
#endif
#define ACTIONRPG_RPGCharacterBase_generated_h

#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCooldownRemainingForTag); \
	DECLARE_FUNCTION(execGetActiveAbilitiesWithTags); \
	DECLARE_FUNCTION(execActivateAbilitiesWithTags); \
	DECLARE_FUNCTION(execGetActiveAbilitiesWithItemSlot); \
	DECLARE_FUNCTION(execActivateAbilitiesWithItemSlot); \
	DECLARE_FUNCTION(execSetCharacterLevel); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth);


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCooldownRemainingForTag); \
	DECLARE_FUNCTION(execGetActiveAbilitiesWithTags); \
	DECLARE_FUNCTION(execActivateAbilitiesWithTags); \
	DECLARE_FUNCTION(execGetActiveAbilitiesWithItemSlot); \
	DECLARE_FUNCTION(execActivateAbilitiesWithItemSlot); \
	DECLARE_FUNCTION(execSetCharacterLevel); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth);


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_EVENT_PARMS \
	struct RPGCharacterBase_eventOnDamaged_Parms \
	{ \
		float DamageAmount; \
		FHitResult HitInfo; \
		FGameplayTagContainer DamageTags; \
		ARPGCharacterBase* InstigatorCharacter; \
		AActor* DamageCauser; \
	}; \
	struct RPGCharacterBase_eventOnHealthChanged_Parms \
	{ \
		float DeltaValue; \
		FGameplayTagContainer EventTags; \
	}; \
	struct RPGCharacterBase_eventOnManaChanged_Parms \
	{ \
		float DeltaValue; \
		FGameplayTagContainer EventTags; \
	}; \
	struct RPGCharacterBase_eventOnMoveSpeedChanged_Parms \
	{ \
		float DeltaValue; \
		FGameplayTagContainer EventTags; \
	};


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_CALLBACK_WRAPPERS
#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGCharacterBase(); \
	friend struct Z_Construct_UClass_ARPGCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacterBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterLevel=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesARPGCharacterBase(); \
	friend struct Z_Construct_UClass_ARPGCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacterBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterLevel=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGCharacterBase(ARPGCharacterBase&&); \
	NO_API ARPGCharacterBase(const ARPGCharacterBase&); \
public:


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGCharacterBase(ARPGCharacterBase&&); \
	NO_API ARPGCharacterBase(const ARPGCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGCharacterBase)


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterLevel() { return STRUCT_OFFSET(ARPGCharacterBase, CharacterLevel); } \
	FORCEINLINE static uint32 __PPO__GameplayAbilities() { return STRUCT_OFFSET(ARPGCharacterBase, GameplayAbilities); } \
	FORCEINLINE static uint32 __PPO__DefaultSlottedAbilities() { return STRUCT_OFFSET(ARPGCharacterBase, DefaultSlottedAbilities); } \
	FORCEINLINE static uint32 __PPO__PassiveGameplayEffects() { return STRUCT_OFFSET(ARPGCharacterBase, PassiveGameplayEffects); } \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(ARPGCharacterBase, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(ARPGCharacterBase, AttributeSet); } \
	FORCEINLINE static uint32 __PPO__InventorySource() { return STRUCT_OFFSET(ARPGCharacterBase, InventorySource); } \
	FORCEINLINE static uint32 __PPO__bAbilitiesInitialized() { return STRUCT_OFFSET(ARPGCharacterBase, bAbilitiesInitialized); } \
	FORCEINLINE static uint32 __PPO__SlottedAbilities() { return STRUCT_OFFSET(ARPGCharacterBase, SlottedAbilities); }


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_18_PROLOG \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_EVENT_PARMS


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_CALLBACK_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_INCLASS \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_CALLBACK_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class ARPGCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_RPGCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
