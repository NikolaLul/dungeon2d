// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/Spawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ASpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter_NoRegister();
// End Cross Module References
	void ASpawner::StaticRegisterNativesASpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawner);
	UClass* Z_Construct_UClass_ASpawner_NoRegister()
	{
		return ASpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASpawner_Statics
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
	UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_MyVariable_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_MyVariable = { "MyVariable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, MyVariable), Z_Construct_UClass_APaperCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_MyVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_MyVariable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_MyVariable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
		&ASpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawner()
	{
		if (!Z_Registration_Info_UClass_ASpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner.OuterSingleton, Z_Construct_UClass_ASpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawner.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<ASpawner>()
	{
		return ASpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
	struct Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_Spawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_Spawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 3095822400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_Spawner_h_4034097273(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_Spawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
