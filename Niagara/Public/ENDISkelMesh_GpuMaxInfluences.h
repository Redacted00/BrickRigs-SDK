#pragma once
#include "CoreMinimal.h"
#include "ENDISkelMesh_GpuMaxInfluences.generated.h"

UENUM(BlueprintType)
namespace ENDISkelMesh_GpuMaxInfluences {
    enum Type {
        AllowMax4,
        AllowMax8,
        Unlimited,
        ENDISkelMesh_MAX UMETA(Hidden),
    };
}

