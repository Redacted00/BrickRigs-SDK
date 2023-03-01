#pragma once
#include "CoreMinimal.h"
#include "EBodyCollisionResponse.generated.h"

UENUM(BlueprintType)
namespace EBodyCollisionResponse {
    enum Type {
        BodyCollision_Enabled,
        BodyCollision_Disabled,
        BodyCollision_MAX UMETA(Hidden),
    };
}

