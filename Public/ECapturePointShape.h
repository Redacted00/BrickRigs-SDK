#pragma once
#include "CoreMinimal.h"
#include "ECapturePointShape.generated.h"

UENUM(BlueprintType)
enum class ECapturePointShape : uint8 {
    Box,
    Sphere,
    Capsule,
};

