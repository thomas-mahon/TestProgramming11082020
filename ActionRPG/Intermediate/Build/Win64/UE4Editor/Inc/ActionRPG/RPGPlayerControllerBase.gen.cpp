// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPlayerControllerBase() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_ARPGPlayerControllerBase_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_ARPGPlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGItem_NoRegister();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSlot();
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature();
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature();
	ACTIONRPG_API UFunction* Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGInventoryInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execLoadInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execSaveInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execFillEmptySlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillEmptySlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execGetSlottedItems)
	{
		P_GET_TARRAY_REF(URPGItem*,Z_Param_Out_Items);
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_ItemType);
		P_GET_UBOOL(Z_Param_bOutputEmptyIndexes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSlottedItems(Z_Param_Out_Items,Z_Param_ItemType,Z_Param_bOutputEmptyIndexes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execGetSlottedItem)
	{
		P_GET_STRUCT(FRPGItemSlot,Z_Param_ItemSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGItem**)Z_Param__Result=P_THIS->GetSlottedItem(Z_Param_ItemSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execSetSlottedItem)
	{
		P_GET_STRUCT(FRPGItemSlot,Z_Param_ItemSlot);
		P_GET_OBJECT(URPGItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSlottedItem(Z_Param_ItemSlot,Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execGetInventoryItemData)
	{
		P_GET_OBJECT(URPGItem,Z_Param_Item);
		P_GET_STRUCT_REF(FRPGItemData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInventoryItemData(Z_Param_Item,Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execGetInventoryItemCount)
	{
		P_GET_OBJECT(URPGItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInventoryItemCount(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execGetInventoryItems)
	{
		P_GET_TARRAY_REF(URPGItem*,Z_Param_Out_Items);
		P_GET_STRUCT(FPrimaryAssetType,Z_Param_ItemType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInventoryItems(Z_Param_Out_Items,Z_Param_ItemType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execRemoveInventoryItem)
	{
		P_GET_OBJECT(URPGItem,Z_Param_RemovedItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveInventoryItem(Z_Param_RemovedItem,Z_Param_RemoveCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerControllerBase::execAddInventoryItem)
	{
		P_GET_OBJECT(URPGItem,Z_Param_NewItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemLevel);
		P_GET_UBOOL(Z_Param_bAutoSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddInventoryItem(Z_Param_NewItem,Z_Param_ItemCount,Z_Param_ItemLevel,Z_Param_bAutoSlot);
		P_NATIVE_END;
	}
	static FName NAME_ARPGPlayerControllerBase_InventoryItemChanged = FName(TEXT("InventoryItemChanged"));
	void ARPGPlayerControllerBase::InventoryItemChanged(bool bAdded, URPGItem* Item)
	{
		RPGPlayerControllerBase_eventInventoryItemChanged_Parms Parms;
		Parms.bAdded=bAdded ? true : false;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerControllerBase_InventoryItemChanged),&Parms);
	}
	static FName NAME_ARPGPlayerControllerBase_SlottedItemChanged = FName(TEXT("SlottedItemChanged"));
	void ARPGPlayerControllerBase::SlottedItemChanged(FRPGItemSlot ItemSlot, URPGItem* Item)
	{
		RPGPlayerControllerBase_eventSlottedItemChanged_Parms Parms;
		Parms.ItemSlot=ItemSlot;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerControllerBase_SlottedItemChanged),&Parms);
	}
	void ARPGPlayerControllerBase::StaticRegisterNativesARPGPlayerControllerBase()
	{
		UClass* Class = ARPGPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInventoryItem", &ARPGPlayerControllerBase::execAddInventoryItem },
			{ "FillEmptySlots", &ARPGPlayerControllerBase::execFillEmptySlots },
			{ "GetInventoryItemCount", &ARPGPlayerControllerBase::execGetInventoryItemCount },
			{ "GetInventoryItemData", &ARPGPlayerControllerBase::execGetInventoryItemData },
			{ "GetInventoryItems", &ARPGPlayerControllerBase::execGetInventoryItems },
			{ "GetSlottedItem", &ARPGPlayerControllerBase::execGetSlottedItem },
			{ "GetSlottedItems", &ARPGPlayerControllerBase::execGetSlottedItems },
			{ "LoadInventory", &ARPGPlayerControllerBase::execLoadInventory },
			{ "RemoveInventoryItem", &ARPGPlayerControllerBase::execRemoveInventoryItem },
			{ "SaveInventory", &ARPGPlayerControllerBase::execSaveInventory },
			{ "SetSlottedItem", &ARPGPlayerControllerBase::execSetSlottedItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics
	{
		struct RPGPlayerControllerBase_eventAddInventoryItem_Parms
		{
			URPGItem* NewItem;
			int32 ItemCount;
			int32 ItemLevel;
			bool bAutoSlot;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventAddInventoryItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventAddInventoryItem_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_bAutoSlot_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventAddInventoryItem_Parms*)Obj)->bAutoSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_bAutoSlot = { "bAutoSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventAddInventoryItem_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_bAutoSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_ItemLevel = { "ItemLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventAddInventoryItem_Parms, ItemLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventAddInventoryItem_Parms, ItemCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventAddInventoryItem_Parms, NewItem), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_bAutoSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_ItemLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_ItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Adds a new inventory item, will add it to an empty slot if possible. If the item supports count you can add more than one count. It will also update the level when adding if required */" },
		{ "CPP_Default_bAutoSlot", "true" },
		{ "CPP_Default_ItemCount", "1" },
		{ "CPP_Default_ItemLevel", "1" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Adds a new inventory item, will add it to an empty slot if possible. If the item supports count you can add more than one count. It will also update the level when adding if required" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "AddInventoryItem", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventAddInventoryItem_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_FillEmptySlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_FillEmptySlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Fills in any empty slots with items in inventory */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Fills in any empty slots with items in inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_FillEmptySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "FillEmptySlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_FillEmptySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_FillEmptySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_FillEmptySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_FillEmptySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics
	{
		struct RPGPlayerControllerBase_eventGetInventoryItemCount_Parms
		{
			URPGItem* Item;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetInventoryItemCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetInventoryItemCount_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Returns number of instances of this item found in the inventory. This uses count from GetItemData */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Returns number of instances of this item found in the inventory. This uses count from GetItemData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "GetInventoryItemCount", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventGetInventoryItemCount_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics
	{
		struct RPGPlayerControllerBase_eventGetInventoryItemData_Parms
		{
			URPGItem* Item;
			FRPGItemData ItemData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventGetInventoryItemData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventGetInventoryItemData_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetInventoryItemData_Parms, ItemData), Z_Construct_UScriptStruct_FRPGItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetInventoryItemData_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Returns the item data associated with an item. Returns false if none found */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Returns the item data associated with an item. Returns false if none found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "GetInventoryItemData", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventGetInventoryItemData_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics
	{
		struct RPGPlayerControllerBase_eventGetInventoryItems_Parms
		{
			TArray<URPGItem*> Items;
			FPrimaryAssetType ItemType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetInventoryItems_Parms, ItemType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetInventoryItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::NewProp_Items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Returns all inventory items of a given type. If none is passed as type it will return all */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Returns all inventory items of a given type. If none is passed as type it will return all" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "GetInventoryItems", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventGetInventoryItems_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics
	{
		struct RPGPlayerControllerBase_eventGetSlottedItem_Parms
		{
			FRPGItemSlot ItemSlot;
			URPGItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetSlottedItem_Parms, ReturnValue), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetSlottedItem_Parms, ItemSlot), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::NewProp_ItemSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Returns item in slot, or null if empty */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Returns item in slot, or null if empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "GetSlottedItem", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventGetSlottedItem_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics
	{
		struct RPGPlayerControllerBase_eventGetSlottedItems_Parms
		{
			TArray<URPGItem*> Items;
			FPrimaryAssetType ItemType;
			bool bOutputEmptyIndexes;
		};
		static void NewProp_bOutputEmptyIndexes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputEmptyIndexes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_bOutputEmptyIndexes_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventGetSlottedItems_Parms*)Obj)->bOutputEmptyIndexes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_bOutputEmptyIndexes = { "bOutputEmptyIndexes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventGetSlottedItems_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_bOutputEmptyIndexes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetSlottedItems_Parms, ItemType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventGetSlottedItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_bOutputEmptyIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::NewProp_Items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Returns all slotted items of a given type. If none is passed as type it will return all */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Returns all slotted items of a given type. If none is passed as type it will return all" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "GetSlottedItems", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventGetSlottedItems_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventInventoryItemChanged_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::NewProp_bAdded_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventInventoryItemChanged_Parms*)Obj)->bAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::NewProp_bAdded = { "bAdded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventInventoryItemChanged_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::NewProp_bAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::NewProp_bAdded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Called after the inventory was changed and we notified all delegates */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Called after the inventory was changed and we notified all delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "InventoryItemChanged", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventInventoryItemChanged_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics
	{
		struct RPGPlayerControllerBase_eventLoadInventory_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventLoadInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventLoadInventory_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Loads inventory from save game on game instance, this will replace arrays */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Loads inventory from save game on game instance, this will replace arrays" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "LoadInventory", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventLoadInventory_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics
	{
		struct RPGPlayerControllerBase_eventRemoveInventoryItem_Parms
		{
			URPGItem* RemovedItem;
			int32 RemoveCount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventRemoveInventoryItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventRemoveInventoryItem_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::NewProp_RemoveCount = { "RemoveCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventRemoveInventoryItem_Parms, RemoveCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::NewProp_RemovedItem = { "RemovedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventRemoveInventoryItem_Parms, RemovedItem), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::NewProp_RemoveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::NewProp_RemovedItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Remove an inventory item, will also remove from slots. A remove count of <= 0 means to remove all copies */" },
		{ "CPP_Default_RemoveCount", "1" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Remove an inventory item, will also remove from slots. A remove count of <= 0 means to remove all copies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "RemoveInventoryItem", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventRemoveInventoryItem_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics
	{
		struct RPGPlayerControllerBase_eventSaveInventory_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventSaveInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventSaveInventory_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Manually save the inventory, this is called from add/remove functions automatically */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Manually save the inventory, this is called from add/remove functions automatically" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "SaveInventory", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventSaveInventory_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics
	{
		struct RPGPlayerControllerBase_eventSetSlottedItem_Parms
		{
			FRPGItemSlot ItemSlot;
			URPGItem* Item;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGPlayerControllerBase_eventSetSlottedItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerControllerBase_eventSetSlottedItem_Parms), &Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventSetSlottedItem_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventSetSlottedItem_Parms, ItemSlot), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::NewProp_ItemSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Sets slot to item, will remove from other slots if necessary. If passing null this will empty the slot */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Sets slot to item, will remove from other slots if necessary. If passing null this will empty the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "SetSlottedItem", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventSetSlottedItem_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventSlottedItemChanged_Parms, Item), Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerControllerBase_eventSlottedItemChanged_Parms, ItemSlot), Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::NewProp_ItemSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Called after an item was equipped and we notified all delegates */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Called after an item was equipped and we notified all delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerControllerBase, nullptr, "SlottedItemChanged", nullptr, nullptr, sizeof(RPGPlayerControllerBase_eventSlottedItemChanged_Parms), Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGPlayerControllerBase_NoRegister()
	{
		return ARPGPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInventoryLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSlottedItemChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSlottedItemChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInventoryItemChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryItemChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlottedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SlottedItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlottedItems_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlottedItems_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InventoryData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_AddInventoryItem, "AddInventoryItem" }, // 422721916
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_FillEmptySlots, "FillEmptySlots" }, // 1056652450
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemCount, "GetInventoryItemCount" }, // 1879645508
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItemData, "GetInventoryItemData" }, // 2387016559
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_GetInventoryItems, "GetInventoryItems" }, // 3518966979
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItem, "GetSlottedItem" }, // 2724262713
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_GetSlottedItems, "GetSlottedItems" }, // 2269093729
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_InventoryItemChanged, "InventoryItemChanged" }, // 2995800175
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_LoadInventory, "LoadInventory" }, // 2929332438
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_RemoveInventoryItem, "RemoveInventoryItem" }, // 3659979496
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_SaveInventory, "SaveInventory" }, // 2959442219
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_SetSlottedItem, "SetSlottedItem" }, // 2319592416
		{ &Z_Construct_UFunction_ARPGPlayerControllerBase_SlottedItemChanged, "SlottedItemChanged" }, // 340421301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for PlayerController, should be blueprinted */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RPGPlayerControllerBase.h" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Base class for PlayerController, should be blueprinted" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryLoaded_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Delegate called when the inventory has been loaded/reloaded */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Delegate called when the inventory has been loaded/reloaded" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryLoaded = { "OnInventoryLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerControllerBase, OnInventoryLoaded), Z_Construct_UDelegateFunction_ActionRPG_OnInventoryLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnSlottedItemChanged_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Delegate called when an inventory slot has changed */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Delegate called when an inventory slot has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnSlottedItemChanged = { "OnSlottedItemChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerControllerBase, OnSlottedItemChanged), Z_Construct_UDelegateFunction_ActionRPG_OnSlottedItemChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnSlottedItemChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnSlottedItemChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryItemChanged_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Delegate called when an inventory item has been added or removed */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Delegate called when an inventory item has been added or removed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryItemChanged = { "OnInventoryItemChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerControllerBase, OnInventoryItemChanged), Z_Construct_UDelegateFunction_ActionRPG_OnInventoryItemChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryItemChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryItemChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Map of slot, from type/num to item, initialized from ItemSlotsPerType on RPGGameInstanceBase */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Map of slot, from type/num to item, initialized from ItemSlotsPerType on RPGGameInstanceBase" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems = { "SlottedItems", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerControllerBase, SlottedItems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems_Key_KeyProp = { "SlottedItems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems_ValueProp = { "SlottedItems", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Map of all items owned by this player, from definition to data */" },
		{ "ModuleRelativePath", "Public/RPGPlayerControllerBase.h" },
		{ "ToolTip", "Map of all items owned by this player, from definition to data" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerControllerBase, InventoryData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData_Key_KeyProp = { "InventoryData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URPGItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData_ValueProp = { "InventoryData", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRPGItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGPlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnSlottedItemChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_OnInventoryItemChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_SlottedItems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerControllerBase_Statics::NewProp_InventoryData_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URPGInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(ARPGPlayerControllerBase, IRPGInventoryInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGPlayerControllerBase_Statics::ClassParams = {
		&ARPGPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGPlayerControllerBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGPlayerControllerBase, 4109548476);
	template<> ACTIONRPG_API UClass* StaticClass<ARPGPlayerControllerBase>()
	{
		return ARPGPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGPlayerControllerBase(Z_Construct_UClass_ARPGPlayerControllerBase, &ARPGPlayerControllerBase::StaticClass, TEXT("/Script/ActionRPG"), TEXT("ARPGPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
