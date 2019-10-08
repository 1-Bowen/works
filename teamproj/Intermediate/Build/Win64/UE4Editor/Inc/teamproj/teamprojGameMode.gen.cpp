// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "teamproj/teamprojGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeteamprojGameMode() {}
// Cross Module References
	TEAMPROJ_API UClass* Z_Construct_UClass_AteamprojGameMode_NoRegister();
	TEAMPROJ_API UClass* Z_Construct_UClass_AteamprojGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_teamproj();
// End Cross Module References
	void AteamprojGameMode::StaticRegisterNativesAteamprojGameMode()
	{
	}
	UClass* Z_Construct_UClass_AteamprojGameMode_NoRegister()
	{
		return AteamprojGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AteamprojGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AteamprojGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_teamproj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AteamprojGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "teamprojGameMode.h" },
		{ "ModuleRelativePath", "teamprojGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AteamprojGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AteamprojGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AteamprojGameMode_Statics::ClassParams = {
		&AteamprojGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AteamprojGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AteamprojGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AteamprojGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AteamprojGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AteamprojGameMode, 845288803);
	template<> TEAMPROJ_API UClass* StaticClass<AteamprojGameMode>()
	{
		return AteamprojGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AteamprojGameMode(Z_Construct_UClass_AteamprojGameMode, &AteamprojGameMode::StaticClass, TEXT("/Script/teamproj"), TEXT("AteamprojGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AteamprojGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
