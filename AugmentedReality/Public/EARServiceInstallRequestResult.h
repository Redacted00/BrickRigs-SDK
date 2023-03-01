#pragma once
#include "CoreMinimal.h"
#include "EARServiceInstallRequestResult.generated.h"

UENUM(BlueprintType)
enum class EARServiceInstallRequestResult : uint8 {
    Installed,
    DeviceNotCompatible,
    UserDeclinedInstallation,
    FatalError,
};

