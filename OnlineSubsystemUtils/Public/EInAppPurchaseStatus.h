#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseStatus.generated.h"

UENUM(BlueprintType)
enum class EInAppPurchaseStatus : uint8 {
    Invalid,
    Failed,
    Deferred,
    Canceled,
    Purchased,
    Restored,
};

