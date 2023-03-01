#pragma once
#include "CoreMinimal.h"
#include "EARSpatialMeshUsageFlags.generated.h"

UENUM(BlueprintType)
enum class EARSpatialMeshUsageFlags : uint8 {
    NotApplicable,
    Visible,
    Collision,
};

