// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/PacmanEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanEnemy() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanEnemy_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void APacmanEnemy::StaticRegisterNativesAPacmanEnemy()
	{
	}
	UClass* Z_Construct_UClass_APacmanEnemy_NoRegister()
	{
		return APacmanEnemy::StaticClass();
	}
	struct Z_Construct_UClass_APacmanEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PacmanEnemy.h" },
		{ "ModuleRelativePath", "PacmanEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacmanEnemy_Statics::ClassParams = {
		&APacmanEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacmanEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacmanEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacmanEnemy, 892926600);
	template<> PACMAN_API UClass* StaticClass<APacmanEnemy>()
	{
		return APacmanEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacmanEnemy(Z_Construct_UClass_APacmanEnemy, &APacmanEnemy::StaticClass, TEXT("/Script/Pacman"), TEXT("APacmanEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
