#pragma once
#include "CoreMinimal.h"
#include "EWeightMapTargetCommon.generated.h"

UENUM(BlueprintType)
enum class EWeightMapTargetCommon : uint8 {
    None,
    MaxDistance,
    BackstopDistance,
    BackstopRadius,
    AnimDriveStiffness,
    AnimDriveDamping,
};

