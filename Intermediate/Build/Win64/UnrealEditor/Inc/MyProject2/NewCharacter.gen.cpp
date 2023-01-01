// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/NewCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewCharacter() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_ANewCharacter_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ANewCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void ANewCharacter::StaticRegisterNativesANewCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewCharacter);
	UClass* Z_Construct_UClass_ANewCharacter_NoRegister()
	{
		return ANewCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANewCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NewCharacter.h" },
		{ "ModuleRelativePath", "Public/NewCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewCharacter_Statics::ClassParams = {
		&ANewCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewCharacter()
	{
		if (!Z_Registration_Info_UClass_ANewCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewCharacter.OuterSingleton, Z_Construct_UClass_ANewCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANewCharacter.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<ANewCharacter>()
	{
		return ANewCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewCharacter);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_NewCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_NewCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANewCharacter, ANewCharacter::StaticClass, TEXT("ANewCharacter"), &Z_Registration_Info_UClass_ANewCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewCharacter), 3297781834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_NewCharacter_h_3294744042(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_NewCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_NewCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
