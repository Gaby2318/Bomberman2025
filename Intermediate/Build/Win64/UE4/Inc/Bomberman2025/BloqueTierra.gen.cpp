// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/BloqueTierra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueTierra() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABloqueTierra_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABloqueTierra();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
// End Cross Module References
	void ABloqueTierra::StaticRegisterNativesABloqueTierra()
	{
	}
	UClass* Z_Construct_UClass_ABloqueTierra_NoRegister()
	{
		return ABloqueTierra::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueTierra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueTierra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueTierra_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BloqueTierra.h" },
		{ "ModuleRelativePath", "BloqueTierra.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueTierra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueTierra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueTierra_Statics::ClassParams = {
		&ABloqueTierra::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueTierra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTierra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueTierra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueTierra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueTierra, 2955741462);
	template<> BOMBERMAN2025_API UClass* StaticClass<ABloqueTierra>()
	{
		return ABloqueTierra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueTierra(Z_Construct_UClass_ABloqueTierra, &ABloqueTierra::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("ABloqueTierra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueTierra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
