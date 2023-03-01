#pragma once
#include "CoreMinimal.h"
#include "ENDISkelMesh_GpuUniformSamplingFormat.generated.h"

UENUM(BlueprintType)
namespace ENDISkelMesh_GpuUniformSamplingFormat {
    enum Type {
        Full,
        Limited_24_8,
        Limited_23_9,
        ENDISkelMesh_MAX UMETA(Hidden),
    };
}

