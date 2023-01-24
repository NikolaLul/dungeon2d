#pragma once

#include "UObject/Class.h"

UENUM()
enum class LastMoveDirection {
	Up UMETA(DisplayName = "Up"),
	Down UMETA(DisplayName = "Down"),
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right")
};