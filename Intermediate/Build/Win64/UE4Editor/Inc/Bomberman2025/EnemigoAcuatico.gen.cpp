// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/EnemigoAcuatico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAcuatico() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigoAcuatico_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigoAcuatico();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigo1();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
// End Cross Module References
	void AEnemigoAcuatico::StaticRegisterNativesAEnemigoAcuatico()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAcuatico_NoRegister()
	{
		return AEnemigoAcuatico::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAcuatico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAcuatico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo1,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAcuatico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAcuatico.h" },
		{ "ModuleRelativePath", "EnemigoAcuatico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAcuatico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAcuatico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAcuatico_Statics::ClassParams = {
		&AEnemigoAcuatico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAcuatico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAcuatico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAcuatico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAcuatico, 574584848);
	template<> BOMBERMAN2025_API UClass* StaticClass<AEnemigoAcuatico>()
	{
		return AEnemigoAcuatico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAcuatico(Z_Construct_UClass_AEnemigoAcuatico, &AEnemigoAcuatico::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("AEnemigoAcuatico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAcuatico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
