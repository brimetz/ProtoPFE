// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LASTSTAND_SurvivalPlayerPawn_generated_h
#error "SurvivalPlayerPawn.generated.h already included, missing '#pragma once' in SurvivalPlayerPawn.h"
#endif
#define LASTSTAND_SurvivalPlayerPawn_generated_h

#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_SPARSE_DATA
#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_RPC_WRAPPERS
#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalPlayerPawn(); \
	friend struct Z_Construct_UClass_ASurvivalPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ASurvivalPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LastStand"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalPlayerPawn)


#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalPlayerPawn(); \
	friend struct Z_Construct_UClass_ASurvivalPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ASurvivalPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LastStand"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalPlayerPawn)


#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalPlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalPlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalPlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalPlayerPawn(ASurvivalPlayerPawn&&); \
	NO_API ASurvivalPlayerPawn(const ASurvivalPlayerPawn&); \
public:


#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalPlayerPawn(ASurvivalPlayerPawn&&); \
	NO_API ASurvivalPlayerPawn(const ASurvivalPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalPlayerPawn)


#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_camera() { return STRUCT_OFFSET(ASurvivalPlayerPawn, m_camera); } \
	FORCEINLINE static uint32 __PPO__m_cameraBoom() { return STRUCT_OFFSET(ASurvivalPlayerPawn, m_cameraBoom); } \
	FORCEINLINE static uint32 __PPO__m_cursorToWorld() { return STRUCT_OFFSET(ASurvivalPlayerPawn, m_cursorToWorld); }


#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_13_PROLOG
#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_SPARSE_DATA \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_RPC_WRAPPERS \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_INCLASS \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_SPARSE_DATA \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_INCLASS_NO_PURE_DECLS \
	LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LASTSTAND_API UClass* StaticClass<class ASurvivalPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LastStand_Source_LastStand_Survival_Player_SurvivalPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
