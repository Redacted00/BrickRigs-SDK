#pragma once
#include "CoreMinimal.h"
#include "EFrictionCombineMode.generated.h"

UENUM(BlueprintType)
namespace EFrictionCombineMode {
    enum Type {
        Average,
        Min,
        Multiply,
        Max,
    };
}

