#pragma once
#include "CoreMinimal.h"
#include "EXRDeviceConnectionResult.generated.h"

UENUM(BlueprintType)
namespace EXRDeviceConnectionResult {
    enum Type {
        NoTrackingSystem,
        FeatureNotSupported,
        NoValidViewport,
        MiscFailure,
        Success,
    };
}

