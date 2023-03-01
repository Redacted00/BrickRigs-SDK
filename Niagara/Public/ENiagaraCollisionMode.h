#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCollisionMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraCollisionMode : uint8 {
    None,
    SceneGeometry,
    DepthBuffer,
    DistanceField,
};

