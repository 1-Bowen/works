// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "teamproj/teamprojHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeteamprojHUD() {}
// Cross Module References
	TEAMPROJ_API UClass* Z_Construct_UClass_AteamprojHUD_NoRegister();
	TEAMPROJ_API UClass* Z_Construct_UClass_AteamprojHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_teamproj();
// End Cross Module References
	void AteamprojHUD::StaticRegisterNativesAteamprojHUD()
	{
	}
	UClass* Z_Construct_UClass_AteamprojHUD_NoRegister()
	{
		return AteamprojHUD::StaticClass();
	}
	struct Z_Construct_UClass_AteamprojHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AteamprojHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_teamproj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AteamprojHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "teamprojHUD.h" },
		{ "ModuleRelativePath", "teamprojHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AteamprojHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AteamprojHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AteamprojHUD_Statics::ClassParams = {
		&AteamprojHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AteamprojHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AteamprojHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AteamprojHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AteamprojHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AteamprojHUD, 96440905);
	template<> TEAMPROJ_API UClass* StaticClass<AteamprojHUD>()
	{
		return AteamprojHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AteamprojHUD(Z_Construct_UClass_AteamprojHUD, &AteamprojHUD::StaticClass, TEXT("/Script/teamproj"), TEXT("AteamprojHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AteamprojHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
