// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARPGCharacterBase;
class AActor;
struct FGameplayEventData;
struct FHitResult;
#ifdef ACTIONRPG_RPGTargetType_generated_h
#error "RPGTargetType.generated.h already included, missing '#pragma once' in RPGTargetType.h"
#endif
#define ACTIONRPG_RPGTargetType_generated_h

#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_RPC_WRAPPERS \
	virtual void GetTargets_Implementation(ARPGCharacterBase* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const; \
 \
	DECLARE_FUNCTION(execGetTargets);


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetTargets_Implementation(ARPGCharacterBase* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const; \
 \
	DECLARE_FUNCTION(execGetTargets);


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_EVENT_PARMS \
	struct RPGTargetType_eventGetTargets_Parms \
	{ \
		ARPGCharacterBase* TargetingCharacter; \
		AActor* TargetingActor; \
		FGameplayEventData EventData; \
		TArray<FHitResult> OutHitResults; \
		TArray<AActor*> OutActors; \
	};


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_CALLBACK_WRAPPERS
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGTargetType(); \
	friend struct Z_Construct_UClass_URPGTargetType_Statics; \
public: \
	DECLARE_CLASS(URPGTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGTargetType)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURPGTargetType(); \
	friend struct Z_Construct_UClass_URPGTargetType_Statics; \
public: \
	DECLARE_CLASS(URPGTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGTargetType)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGTargetType(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGTargetType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGTargetType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGTargetType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGTargetType(URPGTargetType&&); \
	NO_API URPGTargetType(const URPGTargetType&); \
public:


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGTargetType(URPGTargetType&&); \
	NO_API URPGTargetType(const URPGTargetType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGTargetType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGTargetType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGTargetType)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_21_PROLOG \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_EVENT_PARMS


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_CALLBACK_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_INCLASS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_CALLBACK_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGTargetType>();

#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_RPC_WRAPPERS
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGTargetType_UseOwner(); \
	friend struct Z_Construct_UClass_URPGTargetType_UseOwner_Statics; \
public: \
	DECLARE_CLASS(URPGTargetType_UseOwner, URPGTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGTargetType_UseOwner)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_INCLASS \
private: \
	static void StaticRegisterNativesURPGTargetType_UseOwner(); \
	friend struct Z_Construct_UClass_URPGTargetType_UseOwner_Statics; \
public: \
	DECLARE_CLASS(URPGTargetType_UseOwner, URPGTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGTargetType_UseOwner)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGTargetType_UseOwner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGTargetType_UseOwner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGTargetType_UseOwner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGTargetType_UseOwner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGTargetType_UseOwner(URPGTargetType_UseOwner&&); \
	NO_API URPGTargetType_UseOwner(const URPGTargetType_UseOwner&); \
public:


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGTargetType_UseOwner(URPGTargetType_UseOwner&&); \
	NO_API URPGTargetType_UseOwner(const URPGTargetType_UseOwner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGTargetType_UseOwner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGTargetType_UseOwner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGTargetType_UseOwner)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_36_PROLOG
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_INCLASS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGTargetType_UseOwner>();

#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_RPC_WRAPPERS
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGTargetType_UseEventData(); \
	friend struct Z_Construct_UClass_URPGTargetType_UseEventData_Statics; \
public: \
	DECLARE_CLASS(URPGTargetType_UseEventData, URPGTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGTargetType_UseEventData)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_INCLASS \
private: \
	static void StaticRegisterNativesURPGTargetType_UseEventData(); \
	friend struct Z_Construct_UClass_URPGTargetType_UseEventData_Statics; \
public: \
	DECLARE_CLASS(URPGTargetType_UseEventData, URPGTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGTargetType_UseEventData)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGTargetType_UseEventData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGTargetType_UseEventData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGTargetType_UseEventData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGTargetType_UseEventData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGTargetType_UseEventData(URPGTargetType_UseEventData&&); \
	NO_API URPGTargetType_UseEventData(const URPGTargetType_UseEventData&); \
public:


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGTargetType_UseEventData(URPGTargetType_UseEventData&&); \
	NO_API URPGTargetType_UseEventData(const URPGTargetType_UseEventData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGTargetType_UseEventData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGTargetType_UseEventData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGTargetType_UseEventData)


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_50_PROLOG
#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_INCLASS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGTargetType_UseEventData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_Abilities_RPGTargetType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
