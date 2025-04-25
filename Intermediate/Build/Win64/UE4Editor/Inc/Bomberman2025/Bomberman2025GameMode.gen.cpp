// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/Bomberman2025GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman2025GameMode() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABomberman2025GameMode_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABomberman2025GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABomba_NoRegister();
// End Cross Module References
	void ABomberman2025GameMode::StaticRegisterNativesABomberman2025GameMode()
	{
	}
	UClass* Z_Construct_UClass_ABomberman2025GameMode_NoRegister()
	{
		return ABomberman2025GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABomberman2025GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaseBomba_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClaseBomba;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberman2025GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman2025GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Copyright Epic Games, Inc. All Rights Reserved.\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Bomberman2025GameMode.h" },
		{ "ModuleRelativePath", "Bomberman2025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Copyright Epic Games, Inc. All Rights Reserved." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman2025GameMode_Statics::NewProp_ClaseBomba_MetaData[] = {
		{ "Category", "Bomberman2025GameMode" },
		{ "ModuleRelativePath", "Bomberman2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberman2025GameMode_Statics::NewProp_ClaseBomba = { "ClaseBomba", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman2025GameMode, ClaseBomba), Z_Construct_UClass_ABomba_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABomberman2025GameMode_Statics::NewProp_ClaseBomba_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman2025GameMode_Statics::NewProp_ClaseBomba_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberman2025GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman2025GameMode_Statics::NewProp_ClaseBomba,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberman2025GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman2025GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberman2025GameMode_Statics::ClassParams = {
		&ABomberman2025GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABomberman2025GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman2025GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABomberman2025GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman2025GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberman2025GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberman2025GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberman2025GameMode, 3396509961);
	template<> BOMBERMAN2025_API UClass* StaticClass<ABomberman2025GameMode>()
	{
		return ABomberman2025GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberman2025GameMode(Z_Construct_UClass_ABomberman2025GameMode, &ABomberman2025GameMode::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("ABomberman2025GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman2025GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
