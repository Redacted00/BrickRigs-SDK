#pragma once
#include "CoreMinimal.h"
#include "EPlaneComponentDebugMode.generated.h"

UENUM(BlueprintType)
enum class EPlaneComponentDebugMode : uint8 {
    None,
    ShowNetworkRole,
    ShowClassification,
};

