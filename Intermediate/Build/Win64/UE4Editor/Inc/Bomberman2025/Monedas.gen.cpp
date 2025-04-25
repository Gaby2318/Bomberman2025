// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/Monedas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonedas() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AMonedas_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AMonedas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
// End Cross Module References
	void AMonedas::StaticRegisterNativesAMonedas()
	{
	}
	UClass* Z_Construct_UClass_AMonedas_NoRegister()
	{
		return AMonedas::StaticClass();
	}
	struct Z_Construct_UClass_AMonedas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonedas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonedas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Monedas.h" },
		{ "ModuleRelativePath", "Monedas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonedas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonedas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonedas_Statics::ClassParams = {
		&AMonedas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMonedas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonedas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonedas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonedas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonedas, 1125903498);
	template<> BOMBERMAN2025_API UClass* StaticClass<AMonedas>()
	{
		return AMonedas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonedas(Z_Construct_UClass_AMonedas, &AMonedas::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("AMonedas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonedas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
