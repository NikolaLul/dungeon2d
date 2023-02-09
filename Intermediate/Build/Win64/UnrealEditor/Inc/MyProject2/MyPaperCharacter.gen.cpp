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
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPaperCharacter::execLeftOrRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftOrRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPaperCharacter::execUpOrDown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpOrDown(Z_Param_Value);
		P_NATIVE_END;
	}
	void AMyPaperCharacter::StaticRegisterNativesAMyPaperCharacter()
	{
		UClass* Class = AMyPaperCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LeftOrRight", &AMyPaperCharacter::execLeftOrRight },
			{ "UpOrDown", &AMyPaperCharacter::execUpOrDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics
	{
		struct MyPaperCharacter_eventLeftOrRight_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPaperCharacter_eventLeftOrRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPaperCharacter, nullptr, "LeftOrRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::MyPaperCharacter_eventLeftOrRight_Parms), Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics
	{
		struct MyPaperCharacter_eventUpOrDown_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPaperCharacter_eventUpOrDown_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPaperCharacter, nullptr, "UpOrDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::MyPaperCharacter_eventUpOrDown_Parms), Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPaperCharacter_UpOrDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPaperCharacter_UpOrDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPaperCharacter);
	UClass* Z_Construct_UClass_AMyPaperCharacter_NoRegister()
	{
		return AMyPaperCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyPaperCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flipbook_val_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_flipbook_val;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Idle_Up_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Idle_Up;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Idle_Down_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Idle_Down;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Idle_Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Idle_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Idle_Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Idle_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Walk_Up_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Walk_Up;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Walk_Down_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Walk_Down;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Walk_Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Walk_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Walk_Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Walk_Right;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPaperCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPaperCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPaperCharacter_LeftOrRight, "LeftOrRight" }, // 806941949
		{ &Z_Construct_UFunction_AMyPaperCharacter_UpOrDown, "UpOrDown" }, // 4107318134
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPaperCharacter.h" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_flipbook_val_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_flipbook_val = { "flipbook_val", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, flipbook_val), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_flipbook_val_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_flipbook_val_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Up_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Up = { "Idle_Up", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Idle_Up), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Up_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Down_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Down = { "Idle_Down", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Idle_Down), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Down_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Left_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Left = { "Idle_Left", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Idle_Left), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Right_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Right = { "Idle_Right", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Idle_Right), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Up_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Up = { "Walk_Up", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Walk_Up), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Up_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Down_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Down = { "Walk_Down", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Walk_Down), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Down_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Left_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Left = { "Walk_Left", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Walk_Left), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Right_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Right = { "Walk_Right", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Walk_Right), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Right_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPaperCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_flipbook_val,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Down,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Down,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Right,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPaperCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPaperCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPaperCharacter_Statics::ClassParams = {
		&AMyPaperCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPaperCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::PropPointers),
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
		{ Z_Construct_UClass_AMyPaperCharacter, AMyPaperCharacter::StaticClass, TEXT("AMyPaperCharacter"), &Z_Registration_Info_UClass_AMyPaperCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPaperCharacter), 498661656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_MyPaperCharacter_h_3706342771(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_MyPaperCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_MyPaperCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
