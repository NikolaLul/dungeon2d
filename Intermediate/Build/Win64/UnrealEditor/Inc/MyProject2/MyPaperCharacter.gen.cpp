// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/MyPaperCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPaperCharacter() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyPaperCharacter_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyPaperCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void AMyPaperCharacter::StaticRegisterNativesAMyPaperCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPaperCharacter);
	UClass* Z_Construct_UClass_AMyPaperCharacter_NoRegister()
	{
		return AMyPaperCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyPaperCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPaperCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPaperCharacter.h" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPaperCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPaperCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPaperCharacter_Statics::ClassParams = {
		&AMyPaperCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPaperCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyPaperCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPaperCharacter.OuterSingleton, Z_Construct_UClass_AMyPaperCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPaperCharacter.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<AMyPaperCharacter>()
	{
		return AMyPaperCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPaperCharacter);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_MyPaperCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_MyPaperCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPaperCharacter, AMyPaperCharacter::StaticClass, TEXT("AMyPaperCharacter"), &Z_Registration_Info_UClass_AMyPaperCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPaperCharacter), 1925050464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_MyPaperCharacter_h_3429653568(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_MyPaperCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_MyPaperCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
