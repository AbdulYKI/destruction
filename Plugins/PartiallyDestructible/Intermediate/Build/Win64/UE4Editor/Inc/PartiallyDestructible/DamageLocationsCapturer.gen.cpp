// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartiallyDestructible/Public/DamageLocationsCapturer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageLocationsCapturer() {}
// Cross Module References
	PARTIALLYDESTRUCTIBLE_API UClass* Z_Construct_UClass_ADamageLocationsCapturer_NoRegister();
	PARTIALLYDESTRUCTIBLE_API UClass* Z_Construct_UClass_ADamageLocationsCapturer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PartiallyDestructible();
	PARTIALLYDESTRUCTIBLE_API UClass* Z_Construct_UClass_APartiallyDestructibleActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADamageLocationsCapturer::execAddLocationToPartiallyDestructibleMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLocationToPartiallyDestructibleMesh();
		P_NATIVE_END;
	}
	void ADamageLocationsCapturer::StaticRegisterNativesADamageLocationsCapturer()
	{
		UClass* Class = ADamageLocationsCapturer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLocationToPartiallyDestructibleMesh", &ADamageLocationsCapturer::execAddLocationToPartiallyDestructibleMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADamageLocationsCapturer_AddLocationToPartiallyDestructibleMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageLocationsCapturer_AddLocationToPartiallyDestructibleMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Editor Function" },
		{ "ModuleRelativePath", "Public/DamageLocationsCapturer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADamageLocationsCapturer_AddLocationToPartiallyDestructibleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADamageLocationsCapturer, nullptr, "AddLocationToPartiallyDestructibleMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADamageLocationsCapturer_AddLocationToPartiallyDestructibleMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageLocationsCapturer_AddLocationToPartiallyDestructibleMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADamageLocationsCapturer_AddLocationToPartiallyDestructibleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADamageLocationsCapturer_AddLocationToPartiallyDestructibleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADamageLocationsCapturer_NoRegister()
	{
		return ADamageLocationsCapturer::StaticClass();
	}
	struct Z_Construct_UClass_ADamageLocationsCapturer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartiallyDestructibleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartiallyDestructibleMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageLocationsCapturer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PartiallyDestructible,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADamageLocationsCapturer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADamageLocationsCapturer_AddLocationToPartiallyDestructibleMesh, "AddLocationToPartiallyDestructibleMesh" }, // 9517781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageLocationsCapturer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageLocationsCapturer.h" },
		{ "ModuleRelativePath", "Public/DamageLocationsCapturer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageLocationsCapturer_Statics::NewProp_PartiallyDestructibleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/DamageLocationsCapturer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADamageLocationsCapturer_Statics::NewProp_PartiallyDestructibleMesh = { "PartiallyDestructibleMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageLocationsCapturer, PartiallyDestructibleMesh), Z_Construct_UClass_APartiallyDestructibleActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADamageLocationsCapturer_Statics::NewProp_PartiallyDestructibleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageLocationsCapturer_Statics::NewProp_PartiallyDestructibleMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageLocationsCapturer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageLocationsCapturer_Statics::NewProp_PartiallyDestructibleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageLocationsCapturer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageLocationsCapturer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageLocationsCapturer_Statics::ClassParams = {
		&ADamageLocationsCapturer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADamageLocationsCapturer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamageLocationsCapturer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageLocationsCapturer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageLocationsCapturer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageLocationsCapturer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamageLocationsCapturer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamageLocationsCapturer, 3731221341);
	template<> PARTIALLYDESTRUCTIBLE_API UClass* StaticClass<ADamageLocationsCapturer>()
	{
		return ADamageLocationsCapturer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamageLocationsCapturer(Z_Construct_UClass_ADamageLocationsCapturer, &ADamageLocationsCapturer::StaticClass, TEXT("/Script/PartiallyDestructible"), TEXT("ADamageLocationsCapturer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageLocationsCapturer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
