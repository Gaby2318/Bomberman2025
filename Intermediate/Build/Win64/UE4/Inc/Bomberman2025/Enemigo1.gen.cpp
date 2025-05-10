// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/Enemigo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo1() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigo1_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AEnemigo1();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
// End Cross Module References
	void AEnemigo1::StaticRegisterNativesAEnemigo1()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo1_NoRegister()
	{
		return AEnemigo1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Salud_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Salud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Danio_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Danio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemigo1.h" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1_Statics::NewProp_Salud_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemigo1_Statics::NewProp_Salud = { "Salud", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo1, Salud), METADATA_PARAMS(Z_Construct_UClass_AEnemigo1_Statics::NewProp_Salud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::NewProp_Salud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1_Statics::NewProp_Danio_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemigo1_Statics::NewProp_Danio = { "Danio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo1, Danio), METADATA_PARAMS(Z_Construct_UClass_AEnemigo1_Statics::NewProp_Danio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::NewProp_Danio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo1_Statics::NewProp_Salud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo1_Statics::NewProp_Danio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo1_Statics::ClassParams = {
		&AEnemigo1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigo1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo1, 1285303494);
	template<> BOMBERMAN2025_API UClass* StaticClass<AEnemigo1>()
	{
		return AEnemigo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo1(Z_Construct_UClass_AEnemigo1, &AEnemigo1::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("AEnemigo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
