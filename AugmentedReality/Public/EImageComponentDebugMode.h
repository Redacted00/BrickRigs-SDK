#pragma once
#include "CoreMinimal.h"
#include "EImageComponentDebugMode.generated.h"

UENUM(BlueprintType)
enum class EImageComponentDebugMode : uint8 {
    None,
    ShowDetectedImage,
};

