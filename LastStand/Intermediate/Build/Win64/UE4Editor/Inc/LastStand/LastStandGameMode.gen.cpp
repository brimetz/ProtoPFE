// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LastStand/LastStandGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLastStandGameMode() {}
// Cross Module References
	LASTSTAND_API UClass* Z_Construct_UClass_ALastStandGameMode_NoRegister();
	LASTSTAND_API UClass* Z_Construct_UClass_ALastStandGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LastStand();
// End Cross Module References
	void ALastStandGameMode::StaticRegisterNativesALastStandGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALastStandGameMode_NoRegister()
	{
		return ALastStandGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALastStandGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALastStandGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LastStand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALastStandGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LastStandGameMode.h" },
		{ "ModuleRelativePath", "LastStandGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALastStandGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALastStandGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALastStandGameMode_Statics::ClassParams = {
		&ALastStandGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALastStandGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALastStandGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALastStandGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALastStandGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALastStandGameMode, 3773566561);
	template<> LASTSTAND_API UClass* StaticClass<ALastStandGameMode>()
	{
		return ALastStandGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALastStandGameMode(Z_Construct_UClass_ALastStandGameMode, &ALastStandGameMode::StaticClass, TEXT("/Script/LastStand"), TEXT("ALastStandGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALastStandGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
