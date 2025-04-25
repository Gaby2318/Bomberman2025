// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman2025/Bomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomba() {}
// Cross Module References
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABomba_NoRegister();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABomba();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman2025();
	BOMBERMAN2025_API UClass* Z_Construct_UClass_ABomberman2025GameMode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABomba::execExplotar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explotar();
		P_NATIVE_END;
	}
	void ABomba::StaticRegisterNativesABomba()
	{
		UClass* Class = ABomba::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Explotar", &ABomba::execExplotar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABomba_Explotar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomba_Explotar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomba_Explotar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomba, nullptr, "Explotar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomba_Explotar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomba_Explotar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomba_Explotar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomba_Explotar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomba_NoRegister()
	{
		return ABomba::StaticClass();
	}
	struct Z_Construct_UClass_ABomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneracionActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneracionActual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABomba_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomba_Explotar, "Explotar" }, // 1886589129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bomba.h" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomba_Statics::NewProp_GeneracionActual_MetaData[] = {
		{ "Comment", "// Generaci?n de la bomba (controla cu?ntas nuevas va a crear)    \n" },
		{ "ModuleRelativePath", "Bomba.h" },
		{ "ToolTip", "Generaci?n de la bomba (controla cu?ntas nuevas va a crear)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_GeneracionActual = { "GeneracionActual", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomba, GeneracionActual), METADATA_PARAMS(Z_Construct_UClass_ABomba_Statics::NewProp_GeneracionActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::NewProp_GeneracionActual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomba_Statics::NewProp_GameMode_MetaData[] = {
		{ "Comment", "// Ensure GameMode is properly marked as a UPROPERTY  \n" },
		{ "ModuleRelativePath", "Bomba.h" },
		{ "ToolTip", "Ensure GameMode is properly marked as a UPROPERTY" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomba, GameMode), Z_Construct_UClass_ABomberman2025GameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomba_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomba_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_GeneracionActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_GameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomba_Statics::ClassParams = {
		&ABomba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABomba_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomba, 2798912497);
	template<> BOMBERMAN2025_API UClass* StaticClass<ABomba>()
	{
		return ABomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomba(Z_Construct_UClass_ABomba, &ABomba::StaticClass, TEXT("/Script/Bomberman2025"), TEXT("ABomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
