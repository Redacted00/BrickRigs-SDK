#pragma once
#include "CoreMinimal.h"
#include "EARServicePermissionRequestResult.generated.h"

UENUM(BlueprintType)
enum class EARServicePermissionRequestResult : uint8 {
    Granted,
    Denied,
};

