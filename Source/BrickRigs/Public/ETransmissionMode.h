#pragma once
#include "CoreMinimal.h"
#include "ETransmissionMode.generated.h"

UENUM(BlueprintType)
enum class ETransmissionMode : uint8 {
    Manual,
    Automatic,
};

