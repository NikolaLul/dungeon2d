// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/MyEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnemyCharacter() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyEnemyCharacter_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyEnemyCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	DEFINE_FUNCTION(AMyEnemyCharacter::execGetDamageAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDamageAmount();
		P_NATIVE_END;
	}
	void AMyEnemyCharacter::StaticRegisterNativesAMyEnemyCharacter()
	{
		UClass* Class = AMyEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamageAmount", &AMyEnemyCharacter::execGetDamageAmount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics
	{
		struct MyEnemyCharacter_eventGetDamageAmount_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEnemyCharacter_eventGetDamageAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemyCharacter, nullptr, "GetDamageAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::MyEnemyCharacter_eventGetDamageAmount_Parms), Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyEnemyCharacter);
	UClass* Z_Construct_UClass_AMyEnemyCharacter_NoRegister()
	{
		return AMyEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyEnemyCharacter_GetDamageAmount, "GetDamageAmount" }, // 2479179756
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/MyEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemyCharacter_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "MyEnemyCharacter" },
		{ "ModuleRelativePath", "Public/MyEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyEnemyCharacter_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyEnemyCharacter, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_AMyEnemyCharacter_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemyCharacter_Statics::NewProp_DamageAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemyCharacter_Statics::NewProp_DamageAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyEnemyCharacter_Statics::ClassParams = {
		&AMyEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyEnemyCharacter.OuterSingleton, Z_Construct_UClass_AMyEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyEnemyCharacter.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<AMyEnemyCharacter>()
	{
		return AMyEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemyCharacter);
	struct Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyEnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyEnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyEnemyCharacter, AMyEnemyCharacter::StaticClass, TEXT("AMyEnemyCharacter"), &Z_Registration_Info_UClass_AMyEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEnemyCharacter), 371911174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyEnemyCharacter_h_3802216220(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyEnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
