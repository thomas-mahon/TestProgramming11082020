// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGItem;
struct FPrimaryAssetType;
struct FRPGItemSlot;
struct FRPGItemData;
#ifdef ACTIONRPG_RPGPlayerControllerBase_generated_h
#error "RPGPlayerControllerBase.generated.h already included, missing '#pragma once' in RPGPlayerControllerBase.h"
#endif
#define ACTIONRPG_RPGPlayerControllerBase_generated_h

#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadInventory); \
	DECLARE_FUNCTION(execSaveInventory); \
	DECLARE_FUNCTION(execFillEmptySlots); \
	DECLARE_FUNCTION(execGetSlottedItems); \
	DECLARE_FUNCTION(execGetSlottedItem); \
	DECLARE_FUNCTION(execSetSlottedItem); \
	DECLARE_FUNCTION(execGetInventoryItemData); \
	DECLARE_FUNCTION(execGetInventoryItemCount); \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execRemoveInventoryItem); \
	DECLARE_FUNCTION(execAddInventoryItem);


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadInventory); \
	DECLARE_FUNCTION(execSaveInventory); \
	DECLARE_FUNCTION(execFillEmptySlots); \
	DECLARE_FUNCTION(execGetSlottedItems); \
	DECLARE_FUNCTION(execGetSlottedItem); \
	DECLARE_FUNCTION(execSetSlottedItem); \
	DECLARE_FUNCTION(execGetInventoryItemData); \
	DECLARE_FUNCTION(execGetInventoryItemCount); \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execRemoveInventoryItem); \
	DECLARE_FUNCTION(execAddInventoryItem);


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_EVENT_PARMS \
	struct RPGPlayerControllerBase_eventInventoryItemChanged_Parms \
	{ \
		bool bAdded; \
		URPGItem* Item; \
	}; \
	struct RPGPlayerControllerBase_eventSlottedItemChanged_Parms \
	{ \
		FRPGItemSlot ItemSlot; \
		URPGItem* Item; \
	};


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_CALLBACK_WRAPPERS
#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGPlayerControllerBase(); \
	friend struct Z_Construct_UClass_ARPGPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerControllerBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGPlayerControllerBase*>(this); }


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARPGPlayerControllerBase(); \
	friend struct Z_Construct_UClass_ARPGPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerControllerBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGPlayerControllerBase*>(this); }


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGPlayerControllerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGPlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPlayerControllerBase(ARPGPlayerControllerBase&&); \
	NO_API ARPGPlayerControllerBase(const ARPGPlayerControllerBase&); \
public:


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPlayerControllerBase(ARPGPlayerControllerBase&&); \
	NO_API ARPGPlayerControllerBase(const ARPGPlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGPlayerControllerBase)


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_PRIVATE_PROPERTY_OFFSET
#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_11_PROLOG \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_EVENT_PARMS


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_CALLBACK_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_INCLASS \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_PRIVATE_PROPERTY_OFFSET \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_CALLBACK_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_INCLASS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class ARPGPlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_RPGPlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
