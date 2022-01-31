// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartiallyDestructible/Public/PartiallyDestructibleActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartiallyDestructibleActor() {}
// Cross Module References
	PARTIALLYDESTRUCTIBLE_API UClass* Z_Construct_UClass_APartiallyDestructibleActor_NoRegister();
	PARTIALLYDESTRUCTIBLE_API UClass* Z_Construct_UClass_APartiallyDestructibleActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PartiallyDestructible();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APartiallyDestructibleActor::execAddLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartiallyDestructibleActor::execApplyDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage();
		P_NATIVE_END;
	}
	void APartiallyDestructibleActor::StaticRegisterNativesAPartiallyDestructibleActor()
	{
		UClass* Class = APartiallyDestructibleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLocation", &APartiallyDestructibleActor::execAddLocation },
			{ "ApplyDamage", &APartiallyDestructibleActor::execApplyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APartiallyDestructibleActor_AddLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartiallyDestructibleActor_AddLocation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartiallyDestructibleActor_AddLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartiallyDestructibleActor, nullptr, "AddLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartiallyDestructibleActor_AddLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartiallyDestructibleActor_AddLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartiallyDestructibleActor_AddLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartiallyDestructibleActor_AddLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartiallyDestructibleActor_ApplyDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartiallyDestructibleActor_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartiallyDestructibleActor_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartiallyDestructibleActor, nullptr, "ApplyDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartiallyDestructibleActor_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartiallyDestructibleActor_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartiallyDestructibleActor_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartiallyDestructibleActor_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APartiallyDestructibleActor_NoRegister()
	{
		return APartiallyDestructibleActor::StaticClass();
	}
	struct Z_Construct_UClass_APartiallyDestructibleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RelativeLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnifiedImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnifiedImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnifiedDamagePerHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnifiedDamagePerHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnifiedDamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnifiedDamageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnifiedImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnifiedImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLocations_MetaData[];
#endif
		static void NewProp_bDrawDebugLocations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestructibleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyImpulse_MetaData[];
#endif
		static void NewProp_bApplyImpulse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyImpulse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartiallyDestructibleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PartiallyDestructible,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APartiallyDestructibleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APartiallyDestructibleActor_AddLocation, "AddLocation" }, // 2491191623
		{ &Z_Construct_UFunction_APartiallyDestructibleActor_ApplyDamage, "ApplyDamage" }, // 95662293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PartiallyDestructibleActor.h" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_RelativeLocations_Inner = { "RelativeLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_RelativeLocations_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_RelativeLocations = { "RelativeLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleActor, RelativeLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_RelativeLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_RelativeLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulse_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulse = { "UnifiedImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleActor, UnifiedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_NewLocation_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleActor, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_NewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamagePerHit_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamagePerHit = { "UnifiedDamagePerHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleActor, UnifiedDamagePerHit), METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamagePerHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamagePerHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamageRadius_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamageRadius = { "UnifiedDamageRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleActor, UnifiedDamageRadius), METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamageRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulseStrength_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulseStrength = { "UnifiedImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleActor, UnifiedImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bDrawDebugLocations_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	void Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bDrawDebugLocations_SetBit(void* Obj)
	{
		((APartiallyDestructibleActor*)Obj)->bDrawDebugLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bDrawDebugLocations = { "bDrawDebugLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APartiallyDestructibleActor), &Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bDrawDebugLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bDrawDebugLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bDrawDebugLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_DestructibleComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_DestructibleComp = { "DestructibleComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleActor, DestructibleComp), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_DestructibleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_DestructibleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bApplyImpulse_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleActor.h" },
	};
#endif
	void Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bApplyImpulse_SetBit(void* Obj)
	{
		((APartiallyDestructibleActor*)Obj)->bApplyImpulse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bApplyImpulse = { "bApplyImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APartiallyDestructibleActor), &Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bApplyImpulse_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bApplyImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bApplyImpulse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartiallyDestructibleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_RelativeLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_RelativeLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamagePerHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedDamageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_UnifiedImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bDrawDebugLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_DestructibleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleActor_Statics::NewProp_bApplyImpulse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartiallyDestructibleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartiallyDestructibleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APartiallyDestructibleActor_Statics::ClassParams = {
		&APartiallyDestructibleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APartiallyDestructibleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APartiallyDestructibleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APartiallyDestructibleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APartiallyDestructibleActor, 3869468109);
	template<> PARTIALLYDESTRUCTIBLE_API UClass* StaticClass<APartiallyDestructibleActor>()
	{
		return APartiallyDestructibleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APartiallyDestructibleActor(Z_Construct_UClass_APartiallyDestructibleActor, &APartiallyDestructibleActor::StaticClass, TEXT("/Script/PartiallyDestructible"), TEXT("APartiallyDestructibleActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartiallyDestructibleActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
