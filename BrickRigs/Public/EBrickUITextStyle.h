#pragma once
#include "CoreMinimal.h"
#include "EBrickUITextStyle.generated.h"

UENUM(BlueprintType)
enum class EBrickUITextStyle : uint8 {
    Default,
    Bold,
    Small,
    Large,
    Positive,
    Negative,
    Neutral,
    HUD,
    Logo,
    Custom,
    Max,
};

