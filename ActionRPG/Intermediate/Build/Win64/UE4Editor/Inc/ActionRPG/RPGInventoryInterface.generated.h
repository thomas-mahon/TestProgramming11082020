// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONRPG_RPGInventoryInterface_generated_h
#error "RPGInventoryInterface.generated.h already included, missing '#pragma once' in RPGInventoryInterface.h"
#endif
#define ACTIONRPG_RPGInventoryInterface_generated_h

#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_SPARSE_DATA
#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_RPC_WRAPPERS
#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONRPG_API URPGInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGInventoryInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONRPG_API, URPGInventoryInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventoryInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONRPG_API URPGInventoryInterface(URPGInventoryInterface&&); \
	ACTIONRPG_API URPGInventoryInterface(const URPGInventoryInterface&); \
public:


#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONRPG_API URPGInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONRPG_API URPGInventoryInterface(URPGInventoryInterface&&); \
	ACTIONRPG_API URPGInventoryInterface(const URPGInventoryInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONRPG_API, URPGInventoryInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventoryInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGInventoryInterface)


#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURPGInventoryInterface(); \
	friend struct Z_Construct_UClass_URPGInventoryInterface_Statics; \
public: \
	DECLARE_CLASS(URPGInventoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionRPG"), ACTIONRPG_API) \
	DECLARE_SERIALIZER(URPGInventoryInterface)


#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_GENERATED_UINTERFACE_BODY() \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_GENERATED_UINTERFACE_BODY() \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRPGInventoryInterface() {} \
public: \
	typedef URPGInventoryInterface UClassType; \
	typedef IRPGInventoryInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IRPGInventoryInterface() {} \
public: \
	typedef URPGInventoryInterface UClassType; \
	typedef IRPGInventoryInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_13_PROLOG
#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_RPC_WRAPPERS \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_SPARSE_DATA \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONRPG_API UClass* StaticClass<class URPGInventoryInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRPG_Source_ActionRPG_Public_RPGInventoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
