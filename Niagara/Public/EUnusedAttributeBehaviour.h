#pragma once
#include "CoreMinimal.h"
#include "EUnusedAttributeBehaviour.generated.h"

UENUM(BlueprintType)
enum class EUnusedAttributeBehaviour : uint8 {
    Copy,
    Zero,
    None,
    MarkInvalid,
    PassThrough,
};

