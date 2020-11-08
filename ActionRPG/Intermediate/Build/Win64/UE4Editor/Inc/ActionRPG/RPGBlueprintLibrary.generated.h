// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRPGGameplayEffectContainerSpec;
struct FActiveGameplayEffectHandle;
struct FHitResult;
class AActor;
struct FRPGItemSlot;
#ifdef ACTIONRPG_RPGBlueprintLibrary_generated_h
#error "RPGBlueprintLibrary.generated.h already included, missing '#pragma once' in RPGBlueprintLibrary.h"
#endif
#define ACTIONRPG_RPGBlueprintLibrary_generated_h

#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProjectVersion); \
	DECLARE_FUNCTION(execApplyExternalEffectContainerSpec); \
	DECLARE_FUNCTION(execAddTargetsToEffectContainerSpec); \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveTargets); \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveEffects); \
	DECLARE_FUNCTION(execIsValidItemSlot); \
	DECLARE_FUNCTION(execNotEqual_RPGItemSlot); \
	DECLARE_FUNCTION(execEqualEqual_RPGItemSlot); \
	DECLARE_FUNCTION(execIsInEditor); \
	DECLARE_FUNCTION(execStopLoadingScreen); \
	DECLARE_FUNCTION(execPlayLoadingScreen);


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProjectVersion); \
	DECLARE_FUNCTION(execApplyExternalEffectContainerSpec); \
	DECLARE_FUNCTION(execAddTargetsToEffectContainerSpec); \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveTargets); \
	DECLARE_FUNCTION(execDoesEffectContainerSpecHaveEffects); \
	DECLARE_FUNCTION(execIsValidItemSlot); \
	DECLARE_FUNCTION(execNotEqual_RPGItemSlot); \
	DECLARE_FUNCTION(execEqualEqual_RPGItemSlot); \
	DECLARE_FUNCTION(execIsInEditor); \
	DECLARE_FUNCTION(execStopLoadingScreen); \
	DECLARE_FUNCTION(execPlayLoadingScreen);


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGBlueprintLibrary(); \
	friend struct Z_Construct_UClass_URPGBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(URPGBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGBlueprintLibrary)


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURPGBlueprintLibrary(); \
	friend struct Z_Construct_UClass_URPGBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(URPGBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGBlueprintLibrary)


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGBlueprintLibrary(URPGBlueprintLibrary&&); \
	NO_API URPGBlueprintLibrary(const URPGBlueprintLibrary&); \
public:


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGBlueprintLibrary(URPGBlueprintLibrary&&); \
	NO_API URPGBlueprintLibrary(const URPGBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGBlueprintLibrary)


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_14_PROLOG
#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_INCLASS \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RPGBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_RPGBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
