#pragma once
#include "CoreMinimal.h"
#include "EBrickUIStyleState.generated.h"

UENUM(BlueprintType)
enum class EBrickUIStyleState : uint8 {
    Default,
    Button,
    Pressed,
    Focused,
    Marquee,
    Foreground,
    ForegroundPressed,
    ForegroundFocused,
    Background,
    Custom,
    Max,
};

