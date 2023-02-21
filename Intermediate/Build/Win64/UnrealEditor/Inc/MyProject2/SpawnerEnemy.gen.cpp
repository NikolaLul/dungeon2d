// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/SpawnerEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerEnemy() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_ASpawnerEnemy_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ASpawnerEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter_NoRegister();
// End Cross Module References
	void ASpawnerEnemy::StaticRegisterNativesASpawnerEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnerEnemy);
	UClass* Z_Construct_UClass_ASpawnerEnemy_NoRegister()
	{
		return ASpawnerEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnerEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyVariable_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MyVariable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnerEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnerEnemy.h" },
		{ "ModuleRelativePath", "Public/SpawnerEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerEnemy_Statics::NewProp_MyVariable_MetaData[] = {
		{ "Category", "SpawnerEnemy" },
		{ "ModuleRelativePath", "Public/SpawnerEnemy.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnerEnemy_Statics::NewProp_MyVariable = { "MyVariable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerEnemy, MyVariable), Z_Construct_UClass_APaperCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnerEnemy_Statics::NewProp_MyVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerEnemy_Statics::NewProp_MyVariable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnerEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerEnemy_Statics::NewProp_MyVariable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnerEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnerEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnerEnemy_Statics::ClassParams = {
		&ASpawnerEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnerEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnerEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnerEnemy()
	{
		if (!Z_Registration_Info_UClass_ASpawnerEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnerEnemy.OuterSingleton, Z_Construct_UClass_ASpawnerEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnerEnemy.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<ASpawnerEnemy>()
	{
		return ASpawnerEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnerEnemy);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_SpawnerEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_SpawnerEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnerEnemy, ASpawnerEnemy::StaticClass, TEXT("ASpawnerEnemy"), &Z_Registration_Info_UClass_ASpawnerEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnerEnemy), 746246334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_SpawnerEnemy_h_3318738491(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_SpawnerEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_SpawnerEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
