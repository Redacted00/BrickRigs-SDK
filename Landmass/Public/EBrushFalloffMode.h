#pragma once
#include "CoreMinimal.h"
#include "EBrushFalloffMode.generated.h"

UENUM(BlueprintType)
enum class EBrushFalloffMode : uint8 {
    Angle,
    Width,
};

