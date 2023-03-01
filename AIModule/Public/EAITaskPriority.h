#pragma once
#include "CoreMinimal.h"
#include "EAITaskPriority.generated.h"

UENUM(BlueprintType)
enum class EAITaskPriority : uint8 {
    Lowest,
    Low = 0x40,
    AutonomousAI = 0x7F,
    High = 0xC0,
    Ultimate = 0xFE,
};

