#pragma once
#include "CoreMinimal.h"
#include "EBrickUISpacingStyle.generated.h"

UENUM(BlueprintType)
enum class EBrickUISpacingStyle : uint8 {
    Small,
    Medium,
    Large,
    Custom,
    Max,
};

