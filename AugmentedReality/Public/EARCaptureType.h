#pragma once
#include "CoreMinimal.h"
#include "EARCaptureType.generated.h"

UENUM(BlueprintType)
enum class EARCaptureType : uint8 {
    Camera,
    QRCode,
    SpatialMapping,
    SceneUnderstanding,
    HandMesh,
};

