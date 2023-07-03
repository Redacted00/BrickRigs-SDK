#pragma once
#include "CoreMinimal.h"
#include "EBrickUIStyleState.generated.h"

UENUM(BlueprintType)
enum class EBrickUIStyleState : uint8 {
    Default,
    Button,
    Pressed,
    Focused,
    Selected,
    FocusedSelected,
    Marquee,
    Foreground,
    ForegroundPressed,
    ForegroundFocused,
    ForegroundSelected,
    ForegroundFocusedSelected,
    Background,
    Custom,
    Max,
};

