#pragma once
#include "CoreMinimal.h"
#include "EServerSortMethod.generated.h"

UENUM(BlueprintType)
enum class EServerSortMethod : uint8 {
    Name,
    Map,
    GameMode,
    Players,
    PlayersAsc,
    Ping,
};

