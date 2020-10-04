// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LASTSTAND_LastStandCharacter_generated_h
#error "LastStandCharacter.generated.h already included, missing '#pragma once' in LastStandCharacter.h"
#endif
#define LASTSTAND_LastStandCharacter_generated_h

#define LastStand_Source_LastStand_LastStandCharacter_h_12_SPARSE_DATA
#define LastStand_Source_LastStand_LastStandCharacter_h_12_RPC_WRAPPERS
#define LastStand_Source_LastStand_LastStandCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define LastStand_Source_LastStand_LastStandCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALastStandCharacter(); \
	friend struct Z_Construct_UClass_ALastStandCharacter_Statics; \
public: \
	DECLARE_CLASS(ALastStandCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LastStand"), NO_API) \
	DECLARE_SERIALIZER(ALastStandCharacter)


#define LastStand_Source_LastStand_LastStandCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALastStandCharacter(); \
	friend struct Z_Construct_UClass_ALastStandCharacter_Statics; \
public: \
	DECLARE_CLASS(ALastStandCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LastStand"), NO_API) \
	DECLARE_SERIALIZER(ALastStandCharacter)


#define LastStand_Source_LastStand_LastStandCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALastStandCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALastStandCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALastStandCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALastStandCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALastStandCharacter(ALastStandCharacter&&); \
	NO_API ALastStandCharacter(const ALastStandCharacter&); \
public:


#define LastStand_Source_LastStand_LastStandCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALastStandCharacter(ALastStandCharacter&&); \
	NO_API ALastStandCharacter(const ALastStandCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALastStandCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALastStandCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALastStandCharacter)


#define LastStand_Source_LastStand_LastStandCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ALastStandCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ALastStandCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ALastStandCharacter, CursorToWorld); }


#define LastStand_Source_LastStand_LastStandCharacter_h_9_PROLOG
#define LastStand_Source_LastStand_LastStandCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastStand_Source_LastStand_LastStandCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	LastStand_Source_LastStand_LastStandCharacter_h_12_SPARSE_DATA \
	LastStand_Source_LastStand_LastStandCharacter_h_12_RPC_WRAPPERS \
	LastStand_Source_LastStand_LastStandCharacter_h_12_INCLASS \
	LastStand_Source_LastStand_LastStandCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LastStand_Source_LastStand_LastStandCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastStand_Source_LastStand_LastStandCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	LastStand_Source_LastStand_LastStandCharacter_h_12_SPARSE_DATA \
	LastStand_Source_LastStand_LastStandCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LastStand_Source_LastStand_LastStandCharacter_h_12_INCLASS_NO_PURE_DECLS \
	LastStand_Source_LastStand_LastStandCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LASTSTAND_API UClass* StaticClass<class ALastStandCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LastStand_Source_LastStand_LastStandCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
