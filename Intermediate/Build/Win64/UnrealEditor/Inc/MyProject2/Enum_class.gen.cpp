// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/Enum_class.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnum_class() {}
// Cross Module References
	MYPROJECT2_API UEnum* Z_Construct_UEnum_MyProject2_LastMoveDirection();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_LastMoveDirection;
	static UEnum* LastMoveDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_LastMoveDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_LastMoveDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject2_LastMoveDirection, Z_Construct_UPackage__Script_MyProject2(), TEXT("LastMoveDirection"));
		}
		return Z_Registration_Info_UEnum_LastMoveDirection.OuterSingleton;
	}
	template<> MYPROJECT2_API UEnum* StaticEnum<LastMoveDirection>()
	{
		return LastMoveDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics::Enumerators[] = {
		{ "LastMoveDirection::Up", (int64)LastMoveDirection::Up },
		{ "LastMoveDirection::Down", (int64)LastMoveDirection::Down },
		{ "LastMoveDirection::Left", (int64)LastMoveDirection::Left },
		{ "LastMoveDirection::Right", (int64)LastMoveDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "Down.Comment", "/**\n * \n */" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "LastMoveDirection::Down" },
		{ "Left.Comment", "/**\n * \n */" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "LastMoveDirection::Left" },
		{ "ModuleRelativePath", "Public/Enum_class.h" },
		{ "Right.Comment", "/**\n * \n */" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "LastMoveDirection::Right" },
		{ "Up.Comment", "/**\n * \n */" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "LastMoveDirection::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyProject2,
		nullptr,
		"LastMoveDirection",
		"LastMoveDirection",
		Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MyProject2_LastMoveDirection()
	{
		if (!Z_Registration_Info_UEnum_LastMoveDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_LastMoveDirection.InnerSingleton, Z_Construct_UEnum_MyProject2_LastMoveDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_LastMoveDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_Enum_class_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_Enum_class_h_Statics::EnumInfo[] = {
		{ LastMoveDirection_StaticEnum, TEXT("LastMoveDirection"), &Z_Registration_Info_UEnum_LastMoveDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2058513047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_Enum_class_h_3068841168(TEXT("/Script/MyProject2"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_Enum_class_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Public_Enum_class_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
