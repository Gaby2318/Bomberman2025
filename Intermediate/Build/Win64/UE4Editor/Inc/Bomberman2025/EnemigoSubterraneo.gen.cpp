// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/EnemigoSubterraneo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSubterraneo() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigoSubterraneo_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigoSubterraneo();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigo1();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
// End Cross Module References
	void AEnemigoSubterraneo::StaticRegisterNativesAEnemigoSubterraneo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoSubterraneo_NoRegister()
	{
		return AEnemigoSubterraneo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoSubterraneo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoSubterraneo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo1,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoSubterraneo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoSubterraneo.h" },
		{ "ModuleRelativePath", "EnemigoSubterraneo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoSubterraneo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSubterraneo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSubterraneo_Statics::ClassParams = {
		&AEnemigoSubterraneo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoSubterraneo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoSubterraneo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoSubterraneo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoSubterraneo, 92822003);
	template<> BOMBERMAN2025_API UClass* StaticClass<AEnemigoSubterraneo>()
	{
		return AEnemigoSubterraneo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoSubterraneo(Z_Construct_UClass_AEnemigoSubterraneo, &AEnemigoSubterraneo::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("AEnemigoSubterraneo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSubterraneo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
