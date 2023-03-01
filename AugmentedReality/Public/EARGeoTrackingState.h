#pragma once
#include "CoreMinimal.h"
#include "EARGeoTrackingState.generated.h"

UENUM(BlueprintType)
enum class EARGeoTrackingState : uint8 {
    Initializing,
    Localized,
    Localizing,
    NotAvailable,
};

