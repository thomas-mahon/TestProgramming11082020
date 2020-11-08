// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/RPGSaveGame.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGSaveGame() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGSaveGame_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSlot();
	ACTIONRPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemData();
// End Cross Module References
	void URPGSaveGame::StaticRegisterNativesURPGSaveGame()
	{
	}
	UClass* Z_Construct_UClass_URPGSaveGame_NoRegister()
	{
		return URPGSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_URPGSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedDataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SavedDataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlottedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SlottedItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlottedItems_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlottedItems_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InventoryData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGSaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Object that is written to and read from the save game archive, with a data version */" },
		{ "IncludePath", "RPGSaveGame.h" },
		{ "ModuleRelativePath", "Public/RPGSaveGame.h" },
		{ "ToolTip", "Object that is written to and read from the save game archive, with a data version" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SavedDataVersion_MetaData[] = {
		{ "Comment", "/** What LatestVersion was when the archive was saved */" },
		{ "ModuleRelativePath", "Public/RPGSaveGame.h" },
		{ "ToolTip", "What LatestVersion was when the archive was saved" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SavedDataVersion = { "SavedDataVersion", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGSaveGame, SavedDataVersion), METADATA_PARAMS(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SavedDataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SavedDataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryItems_MetaData[] = {
		{ "Comment", "/** Deprecated way of storing items, this is read in but not saved out */" },
		{ "ModuleRelativePath", "Public/RPGSaveGame.h" },
		{ "ToolTip", "Deprecated way of storing items, this is read in but not saved out" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryItems = { "InventoryItems", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGSaveGame, InventoryItems_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryItems_Inner = { "InventoryItems", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGSaveGame_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/** User's unique id */" },
		{ "ModuleRelativePath", "Public/RPGSaveGame.h" },
		{ "ToolTip", "User's unique id" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGSaveGame, UserId), METADATA_PARAMS(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/** Map of slotted items */" },
		{ "ModuleRelativePath", "Public/RPGSaveGame.h" },
		{ "ToolTip", "Map of slotted items" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems = { "SlottedItems", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGSaveGame, SlottedItems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems_Key_KeyProp = { "SlottedItems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRPGItemSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems_ValueProp = { "SlottedItems", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/** Map of items to item data */" },
		{ "ModuleRelativePath", "Public/RPGSaveGame.h" },
		{ "ToolTip", "Map of items to item data" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGSaveGame, InventoryData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData_Key_KeyProp = { "InventoryData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData_ValueProp = { "InventoryData", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRPGItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SavedDataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_SlottedItems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGSaveGame_Statics::NewProp_InventoryData_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGSaveGame_Statics::ClassParams = {
		&URPGSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URPGSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGSaveGame, 3972002160);
	template<> ACTIONRPG_API UClass* StaticClass<URPGSaveGame>()
	{
		return URPGSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGSaveGame(Z_Construct_UClass_URPGSaveGame, &URPGSaveGame::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGSaveGame);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URPGSaveGame)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
