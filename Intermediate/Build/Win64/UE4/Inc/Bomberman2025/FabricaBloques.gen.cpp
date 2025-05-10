// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/FabricaBloques.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloques() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AFabricaBloques_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_AFabricaBloques();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
// End Cross Module References
	void AFabricaBloques::StaticRegisterNativesAFabricaBloques()
	{
	}
	UClass* Z_Construct_UClass_AFabricaBloques_NoRegister()
	{
		return AFabricaBloques::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaBloques_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaBloques_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaBloques_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaBloques.h" },
		{ "ModuleRelativePath", "FabricaBloques.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaBloques_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloques>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloques_Statics::ClassParams = {
		&AFabricaBloques::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaBloques_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloques_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaBloques()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaBloques_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaBloques, 551081780);
	template<> BOMBERMAN2025_API UClass* StaticClass<AFabricaBloques>()
	{
		return AFabricaBloques::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaBloques(Z_Construct_UClass_AFabricaBloques, &AFabricaBloques::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("AFabricaBloques"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloques);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
