// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "destruction/Public/PartiallyDestructibleMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartiallyDestructibleMesh() {}
// Cross Module References
	DESTRUCTION_API UClass* Z_Construct_UClass_APartiallyDestructibleMesh_NoRegister();
	DESTRUCTION_API UClass* Z_Construct_UClass_APartiallyDestructibleMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_destruction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APartiallyDestructibleMesh::execAddLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLocation(Z_Param_Out_Loc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartiallyDestructibleMesh::execApplyDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage();
		P_NATIVE_END;
	}
	void APartiallyDestructibleMesh::StaticRegisterNativesAPartiallyDestructibleMesh()
	{
		UClass* Class = APartiallyDestructibleMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLocation", &APartiallyDestructibleMesh::execAddLocation },
			{ "ApplyDamage", &APartiallyDestructibleMesh::execApplyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics
	{
		struct PartiallyDestructibleMesh_eventAddLocation_Parms
		{
			FVector Loc;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::NewProp_Loc = { "Loc", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartiallyDestructibleMesh_eventAddLocation_Parms, Loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::NewProp_Loc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartiallyDestructibleMesh, nullptr, "AddLocation", nullptr, nullptr, sizeof(PartiallyDestructibleMesh_eventAddLocation_Parms), Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartiallyDestructibleMesh_ApplyDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartiallyDestructibleMesh_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartiallyDestructibleMesh_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartiallyDestructibleMesh, nullptr, "ApplyDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartiallyDestructibleMesh_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartiallyDestructibleMesh_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartiallyDestructibleMesh_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartiallyDestructibleMesh_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APartiallyDestructibleMesh_NoRegister()
	{
		return APartiallyDestructibleMesh::StaticClass();
	}
	struct Z_Construct_UClass_APartiallyDestructibleMesh_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyImpulse_MetaData[];
#endif
		static void NewProp_bApplyImpulse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyImpulse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartiallyDestructibleMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_destruction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APartiallyDestructibleMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APartiallyDestructibleMesh_AddLocation, "AddLocation" }, // 3906300713
		{ &Z_Construct_UFunction_APartiallyDestructibleMesh_ApplyDamage, "ApplyDamage" }, // 1466515892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PartiallyDestructibleMesh.h" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_RelativeLocations_Inner = { "RelativeLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_RelativeLocations_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_RelativeLocations = { "RelativeLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleMesh, RelativeLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_RelativeLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_RelativeLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_Impulse_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleMesh, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_Impulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamagePerHit_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamagePerHit = { "DamagePerHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleMesh, DamagePerHit), METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamagePerHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamagePerHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamageRadius_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleMesh, DamageRadius), METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamageRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "Damage & Impulse" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleMesh, ImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_ImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bDrawDebugLocations_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	void Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bDrawDebugLocations_SetBit(void* Obj)
	{
		((APartiallyDestructibleMesh*)Obj)->bDrawDebugLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bDrawDebugLocations = { "bDrawDebugLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APartiallyDestructibleMesh), &Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bDrawDebugLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bDrawDebugLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bDrawDebugLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DestructibleComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DestructibleComp = { "DestructibleComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartiallyDestructibleMesh, DestructibleComp), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DestructibleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DestructibleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bApplyImpulse_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/PartiallyDestructibleMesh.h" },
	};
#endif
	void Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bApplyImpulse_SetBit(void* Obj)
	{
		((APartiallyDestructibleMesh*)Obj)->bApplyImpulse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bApplyImpulse = { "bApplyImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APartiallyDestructibleMesh), &Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bApplyImpulse_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bApplyImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bApplyImpulse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartiallyDestructibleMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_RelativeLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_RelativeLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_Impulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamagePerHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DamageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_ImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bDrawDebugLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_DestructibleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartiallyDestructibleMesh_Statics::NewProp_bApplyImpulse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartiallyDestructibleMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartiallyDestructibleMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APartiallyDestructibleMesh_Statics::ClassParams = {
		&APartiallyDestructibleMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APartiallyDestructibleMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APartiallyDestructibleMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APartiallyDestructibleMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APartiallyDestructibleMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APartiallyDestructibleMesh, 2034898251);
	template<> DESTRUCTION_API UClass* StaticClass<APartiallyDestructibleMesh>()
	{
		return APartiallyDestructibleMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APartiallyDestructibleMesh(Z_Construct_UClass_APartiallyDestructibleMesh, &APartiallyDestructibleMesh::StaticClass, TEXT("/Script/destruction"), TEXT("APartiallyDestructibleMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartiallyDestructibleMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
