// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_Enum_class_generated_h
#error "Enum_class.generated.h already included, missing '#pragma once' in Enum_class.h"
#endif
#define MYPROJECT2_Enum_class_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_Public_Enum_class_h


#define FOREACH_ENUM_LASTMOVEDIRECTION(op) \
	op(LastMoveDirection::Up) \
	op(LastMoveDirection::Down) \
	op(LastMoveDirection::Left) \
	op(LastMoveDirection::Right) 

enum class LastMoveDirection;
template<> MYPROJECT2_API UEnum* StaticEnum<LastMoveDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
