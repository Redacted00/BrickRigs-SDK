#pragma once
#include "CoreMinimal.h"
#include "EXRSystemFlags.generated.h"

UENUM(BlueprintType)
namespace EXRSystemFlags {
    enum Type {
        NoFlags,
        IsAR,
        IsTablet,
        IsHeadMounted = 0x4,
        SupportsHandTracking = 0x8,
    };
}

