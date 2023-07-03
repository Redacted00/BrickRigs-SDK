#pragma once
#include "CoreMinimal.h"
#include "EChatMessageType.generated.h"

UENUM(BlueprintType)
enum class EChatMessageType : uint8 {
    None,
    Message,
    Join,
    Leave,
    Kick,
    JoinBanned,
    Unban,
    Death,
    MatchSettings,
    VehicleSpawn,
};

