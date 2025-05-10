// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/EnemigoAnimal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAnimal() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigoAnimal_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigoAnimal();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
// End Cross Module References
	void AEnemigoAnimal::StaticRegisterNativesAEnemigoAnimal()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAnimal_NoRegister()
	{
		return AEnemigoAnimal::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAnimal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAnimal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAnimal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoAnimal.h" },
		{ "ModuleRelativePath", "EnemigoAnimal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAnimal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAnimal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAnimal_Statics::ClassParams = {
		&AEnemigoAnimal::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAnimal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAnimal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAnimal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAnimal, 2673600918);
	template<> BOMBERMAN2025_API UClass* StaticClass<AEnemigoAnimal>()
	{
		return AEnemigoAnimal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAnimal(Z_Construct_UClass_AEnemigoAnimal, &AEnemigoAnimal::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("AEnemigoAnimal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAnimal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
