// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/BloqueCuarzo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueCuarzo() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABloqueCuarzo_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABloqueCuarzo();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
// End Cross Module References
	void ABloqueCuarzo::StaticRegisterNativesABloqueCuarzo()
	{
	}
	UClass* Z_Construct_UClass_ABloqueCuarzo_NoRegister()
	{
		return ABloqueCuarzo::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueCuarzo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueCuarzo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueCuarzo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueCuarzo.h" },
		{ "ModuleRelativePath", "BloqueCuarzo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueCuarzo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueCuarzo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueCuarzo_Statics::ClassParams = {
		&ABloqueCuarzo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueCuarzo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCuarzo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueCuarzo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueCuarzo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueCuarzo, 1380229468);
	template<> BOMBERMAN2025_API UClass* StaticClass<ABloqueCuarzo>()
	{
		return ABloqueCuarzo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueCuarzo(Z_Construct_UClass_ABloqueCuarzo, &ABloqueCuarzo::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("ABloqueCuarzo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueCuarzo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
