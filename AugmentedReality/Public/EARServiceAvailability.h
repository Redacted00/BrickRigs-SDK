#pragma once
#include "CoreMinimal.h"
#include "EARServiceAvailability.generated.h"

UENUM(BlueprintType)
enum class EARServiceAvailability : uint8 {
    UnknownError,
    UnknownChecking,
    UnknownTimedOut,
    UnsupportedDeviceNotCapable,
    SupportedNotInstalled,
    SupportedVersionTooOld,
    SupportedInstalled,
};

