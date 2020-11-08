// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGSaveGame;
struct FRPGItemSlot;
class URPGItem;
#ifdef ACTIONRPG_RPGTypes_generated_h
#error "RPGTypes.generated.h already included, missing '#pragma once' in RPGTypes.h"
#endif
#define ACTIONRPG_RPGTypes_generated_h

#define ActionRPG_Source_ActionRPG_Public_RPGTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRPGItemData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ACTIONRPG_API UScriptStruct* StaticStruct<struct FRPGItemData>();

#define ActionRPG_Source_ActionRPG_Public_RPGTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRPGItemSlot_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ACTIONRPG_API UScriptStruct* StaticStruct<struct FRPGItemSlot>();

#define ActionRPG_Source_ActionRPG_Public_RPGTypes_h_141_DELEGATE \
struct _Script_ActionRPG_eventOnSaveGameLoaded_Parms \
{ \
	URPGSaveGame* SaveGame; \
}; \
static inline void FOnSaveGameLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGameLoaded, URPGSaveGame* SaveGame) \
{ \
	_Script_ActionRPG_eventOnSaveGameLoaded_Parms Parms; \
	Parms.SaveGame=SaveGame; \
	OnSaveGameLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRPG_Source_ActionRPG_Public_RPGTypes_h_137_DELEGATE \
static inline void FOnInventoryLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryLoaded) \
{ \
	OnInventoryLoaded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ActionRPG_Source_ActionRPG_Public_RPGTypes_h_133_DELEGATE \
struct _Script_ActionRPG_eventOnSlottedItemChanged_Parms \
{ \
	FRPGItemSlot ItemSlot; \
	URPGItem* Item; \
}; \
static inline void FOnSlottedItemChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSlottedItemChanged, FRPGItemSlot ItemSlot, URPGItem* Item) \
{ \
	_Script_ActionRPG_eventOnSlottedItemChanged_Parms Parms; \
	Parms.ItemSlot=ItemSlot; \
	Parms.Item=Item; \
	OnSlottedItemChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRPG_Source_ActionRPG_Public_RPGTypes_h_129_DELEGATE \
struct _Script_ActionRPG_eventOnInventoryItemChanged_Parms \
{ \
	bool bAdded; \
	URPGItem* Item; \
}; \
static inline void FOnInventoryItemChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryItemChanged, bool bAdded, URPGItem* Item) \
{ \
	_Script_ActionRPG_eventOnInventoryItemChanged_Parms Parms; \
	Parms.bAdded=bAdded ? true : false; \
	Parms.Item=Item; \
	OnInventoryItemChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_RPGTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
