#pragma once
#include "CoreMinimal.h"
#include "EUGCContentVersion.generated.h"

UENUM(BlueprintType)
enum class EUGCContentVersion : uint8 {
    Default,
    AutoSave,
    Backup,
    Max,
};

