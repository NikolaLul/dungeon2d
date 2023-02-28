// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_MyPaperCharacter_generated_h
#error "MyPaperCharacter.generated.h already included, missing '#pragma once' in MyPaperCharacter.h"
#endif
#define MYPROJECT2_MyPaperCharacter_generated_h

#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_SPARSE_DATA
#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execHit); \
	DECLARE_FUNCTION(execLeftOrRight); \
	DECLARE_FUNCTION(execUpOrDown);


#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execHit); \
	DECLARE_FUNCTION(execLeftOrRight); \
	DECLARE_FUNCTION(execUpOrDown);


#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPaperCharacter(); \
	friend struct Z_Construct_UClass_AMyPaperCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPaperCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyPaperCharacter)


#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMyPaperCharacter(); \
	friend struct Z_Construct_UClass_AMyPaperCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPaperCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyPaperCharacter)


#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPaperCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPaperCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPaperCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPaperCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPaperCharacter(AMyPaperCharacter&&); \
	NO_API AMyPaperCharacter(const AMyPaperCharacter&); \
public:


#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPaperCharacter(AMyPaperCharacter&&); \
	NO_API AMyPaperCharacter(const AMyPaperCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPaperCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPaperCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPaperCharacter)


#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_18_PROLOG
#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_SPARSE_DATA \
	FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_RPC_WRAPPERS \
	FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_INCLASS \
	FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_SPARSE_DATA \
	FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMyPaperCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjectGit_Source_MyProject2_Public_MyPaperCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
