#pragma once
#include "CoreMinimal.h"
#include "EARGeoTrackingAccuracy.generated.h"

UENUM(BlueprintType)
enum class EARGeoTrackingAccuracy : uint8 {
    Undetermined,
    Low,
    Medium,
    High,
};

