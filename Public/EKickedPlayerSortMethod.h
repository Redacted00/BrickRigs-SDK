#pragma once
#include "CoreMinimal.h"
#include "EKickedPlayerSortMethod.generated.h"

UENUM(BlueprintType)
enum class EKickedPlayerSortMethod : uint8 {
    PlayerName,
    PlayerNameAsc,
    KickDate,
    KickDateAsc,
    TimeRemaining,
    TimeRemainingAsc,
};

