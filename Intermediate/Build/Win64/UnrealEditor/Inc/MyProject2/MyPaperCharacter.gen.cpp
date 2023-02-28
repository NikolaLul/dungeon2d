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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPaperCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPaperCharacter::execHit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hit(Z_Param_Value);
		P_NATIVE_END;
	}
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
			{ "GetHealth", &AMyPaperCharacter::execGetHealth },
			{ "Hit", &AMyPaperCharacter::execHit },
			{ "LeftOrRight", &AMyPaperCharacter::execLeftOrRight },
			{ "UpOrDown", &AMyPaperCharacter::execUpOrDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics
	{
		struct MyPaperCharacter_eventGetHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPaperCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPaperCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::MyPaperCharacter_eventGetHealth_Parms), Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPaperCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPaperCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics
	{
		struct MyPaperCharacter_eventHit_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPaperCharacter_eventHit_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPaperCharacter, nullptr, "Hit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::MyPaperCharacter_eventHit_Parms), Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPaperCharacter_Hit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPaperCharacter_Hit_Statics::FuncParams);
		}
		return ReturnFunction;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hitting_Up_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hitting_Up;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hitting_Down_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hitting_Down;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hitting_Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hitting_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hitting_Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hitting_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Death_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Death_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPaperCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPaperCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPaperCharacter_GetHealth, "GetHealth" }, // 4077121911
		{ &Z_Construct_UFunction_AMyPaperCharacter_Hit, "Hit" }, // 468640431
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, HealthBarWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_HealthBarWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_HealthBarWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Health_MetaData)) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Up_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Up = { "Hitting_Up", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Hitting_Up), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Up_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Down_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Down = { "Hitting_Down", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Hitting_Down), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Down_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Left_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Left = { "Hitting_Left", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Hitting_Left), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Right_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Right = { "Hitting_Right", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Hitting_Right), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Death_Animation_MetaData[] = {
		{ "Category", "MyPaperCharacter" },
		{ "ModuleRelativePath", "Public/MyPaperCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Death_Animation = { "Death_Animation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPaperCharacter, Death_Animation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Death_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Death_Animation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPaperCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_HealthBarWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_flipbook_val,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Down,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Idle_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Down,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Walk_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Down,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Hitting_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPaperCharacter_Statics::NewProp_Death_Animation,
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
	struct Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPaperCharacter, AMyPaperCharacter::StaticClass, TEXT("AMyPaperCharacter"), &Z_Registration_Info_UClass_AMyPaperCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPaperCharacter), 3200560977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_4282465857(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
