#pragma once
#include "CoreMinimal.h"
#include "ESearchSessionType.generated.h"

UENUM(BlueprintType)
enum class ESearchSessionType : uint8 {
    Server,
    Lobby,
};

