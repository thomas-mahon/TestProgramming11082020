// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONRPG_RPGItem_generated_h
#error "RPGItem.generated.h already included, missing '#pragma once' in RPGItem.h"
#endif
#define ACTIONRPG_RPGItem_generated_h

#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIdentifierString); \
	DECLARE_FUNCTION(execIsConsumable);


#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIdentifierString); \
	DECLARE_FUNCTION(execIsConsumable);


#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGItem(); \
	friend struct Z_Construct_UClass_URPGItem_Statics; \
public: \
	DECLARE_CLASS(URPGItem, UPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGItem)


#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURPGItem(); \
	friend struct Z_Construct_UClass_URPGItem_Statics; \
public: \
	DECLARE_CLASS(URPGItem, UPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGItem)


#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGItem(URPGItem&&); \
	NO_API URPGItem(const URPGItem&); \
public:


#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGItem(URPGItem&&); \
	NO_API URPGItem(const URPGItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGItem)


#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_14_PROLOG
#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_INCLASS \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_Items_RPGItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
