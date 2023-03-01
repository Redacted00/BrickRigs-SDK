#pragma once
#include "CoreMinimal.h"
#include "EBuoyancyEvent.generated.h"

UENUM(BlueprintType)
enum class EBuoyancyEvent : uint8 {
    EnteredWaterBody,
    ExitedWaterBody,
};

