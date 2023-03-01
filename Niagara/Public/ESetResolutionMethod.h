#pragma once
#include "CoreMinimal.h"
#include "ESetResolutionMethod.generated.h"

UENUM()
enum class ESetResolutionMethod : int32 {
    Independent,
    MaxAxis,
    CellSize,
};

