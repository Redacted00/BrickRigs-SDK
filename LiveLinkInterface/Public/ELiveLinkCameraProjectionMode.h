#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkCameraProjectionMode.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkCameraProjectionMode : uint8 {
    Perspective,
    Orthographic,
};

