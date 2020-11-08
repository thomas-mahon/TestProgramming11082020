// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Public/Abilities/RPGTargetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGTargetType() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGTargetType_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGTargetType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	ACTIONRPG_API UClass* Z_Construct_UClass_ARPGCharacterBase_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGTargetType_UseOwner_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGTargetType_UseOwner();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGTargetType_UseEventData_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_URPGTargetType_UseEventData();
// End Cross Module References
	DEFINE_FUNCTION(URPGTargetType::execGetTargets)
	{
		P_GET_OBJECT(ARPGCharacterBase,Z_Param_TargetingCharacter);
		P_GET_OBJECT(AActor,Z_Param_TargetingActor);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHitResults);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargets_Implementation(Z_Param_TargetingCharacter,Z_Param_TargetingActor,Z_Param_EventData,Z_Param_Out_OutHitResults,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	static FName NAME_URPGTargetType_GetTargets = FName(TEXT("GetTargets"));
	void URPGTargetType::GetTargets(ARPGCharacterBase* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const
	{
		RPGTargetType_eventGetTargets_Parms Parms;
		Parms.TargetingCharacter=TargetingCharacter;
		Parms.TargetingActor=TargetingActor;
		Parms.EventData=EventData;
		Parms.OutHitResults=OutHitResults;
		Parms.OutActors=OutActors;
		const_cast<URPGTargetType*>(this)->ProcessEvent(FindFunctionChecked(NAME_URPGTargetType_GetTargets),&Parms);
		OutHitResults=Parms.OutHitResults;
		OutActors=Parms.OutActors;
	}
	void URPGTargetType::StaticRegisterNativesURPGTargetType()
	{
		UClass* Class = URPGTargetType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargets", &URPGTargetType::execGetTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGTargetType_GetTargets_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetingActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetingCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGTargetType_eventGetTargets_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGTargetType_eventGetTargets_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGTargetType_eventGetTargets_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_TargetingActor = { "TargetingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGTargetType_eventGetTargets_Parms, TargetingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_TargetingCharacter = { "TargetingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGTargetType_eventGetTargets_Parms, TargetingCharacter), Z_Construct_UClass_ARPGCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_OutHitResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_EventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_TargetingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::NewProp_TargetingCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called to determine targets to apply gameplay effects to */" },
		{ "ModuleRelativePath", "Public/Abilities/RPGTargetType.h" },
		{ "ToolTip", "Called to determine targets to apply gameplay effects to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGTargetType, nullptr, "GetTargets", nullptr, nullptr, sizeof(RPGTargetType_eventGetTargets_Parms), Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGTargetType_GetTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGTargetType_GetTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGTargetType_NoRegister()
	{
		return URPGTargetType::StaticClass();
	}
	struct Z_Construct_UClass_URPGTargetType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGTargetType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGTargetType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGTargetType_GetTargets, "GetTargets" }, // 2958250287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGTargetType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class that is used to determine targeting for abilities\n * It is meant to be blueprinted to run target logic\n * This does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\n * This can be used as a basis for a game-specific targeting blueprint\n * If your targeting is more complicated you may need to instance into the world once or as a pooled actor\n */" },
		{ "IncludePath", "Abilities/RPGTargetType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/RPGTargetType.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Class that is used to determine targeting for abilities\nIt is meant to be blueprinted to run target logic\nThis does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\nThis can be used as a basis for a game-specific targeting blueprint\nIf your targeting is more complicated you may need to instance into the world once or as a pooled actor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGTargetType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGTargetType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGTargetType_Statics::ClassParams = {
		&URPGTargetType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGTargetType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGTargetType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGTargetType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGTargetType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGTargetType, 1658494986);
	template<> ACTIONRPG_API UClass* StaticClass<URPGTargetType>()
	{
		return URPGTargetType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGTargetType(Z_Construct_UClass_URPGTargetType, &URPGTargetType::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGTargetType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGTargetType);
	void URPGTargetType_UseOwner::StaticRegisterNativesURPGTargetType_UseOwner()
	{
	}
	UClass* Z_Construct_UClass_URPGTargetType_UseOwner_NoRegister()
	{
		return URPGTargetType_UseOwner::StaticClass();
	}
	struct Z_Construct_UClass_URPGTargetType_UseOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGTargetType_UseOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URPGTargetType,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGTargetType_UseOwner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Trivial target type that uses the owner */" },
		{ "IncludePath", "Abilities/RPGTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Abilities/RPGTargetType.h" },
		{ "ToolTip", "Trivial target type that uses the owner" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGTargetType_UseOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGTargetType_UseOwner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGTargetType_UseOwner_Statics::ClassParams = {
		&URPGTargetType_UseOwner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGTargetType_UseOwner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGTargetType_UseOwner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGTargetType_UseOwner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGTargetType_UseOwner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGTargetType_UseOwner, 2753245736);
	template<> ACTIONRPG_API UClass* StaticClass<URPGTargetType_UseOwner>()
	{
		return URPGTargetType_UseOwner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGTargetType_UseOwner(Z_Construct_UClass_URPGTargetType_UseOwner, &URPGTargetType_UseOwner::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGTargetType_UseOwner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGTargetType_UseOwner);
	void URPGTargetType_UseEventData::StaticRegisterNativesURPGTargetType_UseEventData()
	{
	}
	UClass* Z_Construct_UClass_URPGTargetType_UseEventData_NoRegister()
	{
		return URPGTargetType_UseEventData::StaticClass();
	}
	struct Z_Construct_UClass_URPGTargetType_UseEventData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGTargetType_UseEventData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URPGTargetType,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGTargetType_UseEventData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Trivial target type that pulls the target out of the event data */" },
		{ "IncludePath", "Abilities/RPGTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Abilities/RPGTargetType.h" },
		{ "ToolTip", "Trivial target type that pulls the target out of the event data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGTargetType_UseEventData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGTargetType_UseEventData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGTargetType_UseEventData_Statics::ClassParams = {
		&URPGTargetType_UseEventData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGTargetType_UseEventData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGTargetType_UseEventData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGTargetType_UseEventData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGTargetType_UseEventData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGTargetType_UseEventData, 1359727515);
	template<> ACTIONRPG_API UClass* StaticClass<URPGTargetType_UseEventData>()
	{
		return URPGTargetType_UseEventData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGTargetType_UseEventData(Z_Construct_UClass_URPGTargetType_UseEventData, &URPGTargetType_UseEventData::StaticClass, TEXT("/Script/ActionRPG"), TEXT("URPGTargetType_UseEventData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGTargetType_UseEventData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
