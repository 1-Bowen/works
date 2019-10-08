// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMPROJ_teamprojCharacter_generated_h
#error "teamprojCharacter.generated.h already included, missing '#pragma once' in teamprojCharacter.h"
#endif
#define TEAMPROJ_teamprojCharacter_generated_h

#define teamproj_Source_teamproj_teamprojCharacter_h_14_RPC_WRAPPERS
#define teamproj_Source_teamproj_teamprojCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define teamproj_Source_teamproj_teamprojCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAteamprojCharacter(); \
	friend struct Z_Construct_UClass_AteamprojCharacter_Statics; \
public: \
	DECLARE_CLASS(AteamprojCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/teamproj"), NO_API) \
	DECLARE_SERIALIZER(AteamprojCharacter)


#define teamproj_Source_teamproj_teamprojCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAteamprojCharacter(); \
	friend struct Z_Construct_UClass_AteamprojCharacter_Statics; \
public: \
	DECLARE_CLASS(AteamprojCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/teamproj"), NO_API) \
	DECLARE_SERIALIZER(AteamprojCharacter)


#define teamproj_Source_teamproj_teamprojCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AteamprojCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AteamprojCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AteamprojCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AteamprojCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AteamprojCharacter(AteamprojCharacter&&); \
	NO_API AteamprojCharacter(const AteamprojCharacter&); \
public:


#define teamproj_Source_teamproj_teamprojCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AteamprojCharacter(AteamprojCharacter&&); \
	NO_API AteamprojCharacter(const AteamprojCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AteamprojCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AteamprojCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AteamprojCharacter)


#define teamproj_Source_teamproj_teamprojCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AteamprojCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AteamprojCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AteamprojCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AteamprojCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AteamprojCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AteamprojCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AteamprojCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AteamprojCharacter, L_MotionController); }


#define teamproj_Source_teamproj_teamprojCharacter_h_11_PROLOG
#define teamproj_Source_teamproj_teamprojCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	teamproj_Source_teamproj_teamprojCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	teamproj_Source_teamproj_teamprojCharacter_h_14_RPC_WRAPPERS \
	teamproj_Source_teamproj_teamprojCharacter_h_14_INCLASS \
	teamproj_Source_teamproj_teamprojCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define teamproj_Source_teamproj_teamprojCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	teamproj_Source_teamproj_teamprojCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	teamproj_Source_teamproj_teamprojCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	teamproj_Source_teamproj_teamprojCharacter_h_14_INCLASS_NO_PURE_DECLS \
	teamproj_Source_teamproj_teamprojCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAMPROJ_API UClass* StaticClass<class AteamprojCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID teamproj_Source_teamproj_teamprojCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
