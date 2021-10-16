// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Pacdot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacdot() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacdot_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacdot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void APacdot::StaticRegisterNativesAPacdot()
	{
	}
	UClass* Z_Construct_UClass_APacdot_NoRegister()
	{
		return APacdot::StaticClass();
	}
	struct Z_Construct_UClass_APacdot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacdotDisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacdotDisplayMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacdotCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacdotCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacdot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacdot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pacdot.h" },
		{ "ModuleRelativePath", "Pacdot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh_MetaData[] = {
		{ "Category", "Pacdot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pacdot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh = { "PacdotDisplayMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacdot, PacdotDisplayMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollision_MetaData[] = {
		{ "Category", "Pacdot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pacdot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollision = { "PacdotCollision", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacdot, PacdotCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacdot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacdot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacdot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacdot_Statics::ClassParams = {
		&APacdot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APacdot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacdot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacdot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacdot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacdot, 1756782346);
	template<> PACMAN_API UClass* StaticClass<APacdot>()
	{
		return APacdot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacdot(Z_Construct_UClass_APacdot, &APacdot::StaticClass, TEXT("/Script/Pacman"), TEXT("APacdot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacdot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
