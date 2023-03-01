#pragma once
#include "CoreMinimal.h"
#include "ENiagaraMeshFacingMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraMeshFacingMode : uint8 {
    Default,
    Velocity,
    CameraPosition,
    CameraPlane,
};

