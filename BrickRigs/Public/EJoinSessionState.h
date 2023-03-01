#pragma once
#include "CoreMinimal.h"
#include "EJoinSessionState.generated.h"

UENUM(BlueprintType)
enum class EJoinSessionState : uint8 {
    None,
    JoinSession,
    ClientTravel,
    Cancelled,
};

