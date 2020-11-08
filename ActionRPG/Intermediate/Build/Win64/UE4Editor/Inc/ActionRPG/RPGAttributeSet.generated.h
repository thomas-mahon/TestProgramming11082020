// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ACTIONRPG_RPGAttributeSet_generated_h
#error "RPGAttributeSet.generated.h already included, missing '#pragma once' in RPGAttributeSet.h"
#endif
#define ACTIONRPG_RPGAttributeSet_generated_h

#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MoveSpeed); \
	DECLARE_FUNCTION(execOnRep_DefensePower); \
	DECLARE_FUNCTION(execOnRep_AttackPower); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MoveSpeed); \
	DECLARE_FUNCTION(execOnRep_DefensePower); \
	DECLARE_FUNCTION(execOnRep_AttackPower); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAttributeSet(); \
	friend struct Z_Construct_UClass_URPGAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URPGAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		AttackPower, \
		DefensePower, \
		MoveSpeed, \
		NETFIELD_REP_END=MoveSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URPGAttributeSet) \
public:


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURPGAttributeSet(); \
	friend struct Z_Construct_UClass_URPGAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URPGAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		AttackPower, \
		DefensePower, \
		MoveSpeed, \
		NETFIELD_REP_END=MoveSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URPGAttributeSet) \
public:


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAttributeSet(URPGAttributeSet&&); \
	NO_API URPGAttributeSet(const URPGAttributeSet&); \
public:


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAttributeSet(URPGAttributeSet&&); \
	NO_API URPGAttributeSet(const URPGAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGAttributeSet)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_18_PROLOG
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_INCLASS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_Abilities_RPGAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
