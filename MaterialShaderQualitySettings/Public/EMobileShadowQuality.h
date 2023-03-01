#pragma once
#include "CoreMinimal.h"
#include "EMobileShadowQuality.generated.h"

UENUM(BlueprintType)
enum class EMobileShadowQuality : uint8 {
    NoFiltering,
    PCF_1x1,
    PCF_2x2,
    PCF_3x3,
};

