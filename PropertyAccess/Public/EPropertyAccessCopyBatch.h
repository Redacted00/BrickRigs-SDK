#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessCopyBatch.generated.h"

UENUM(BlueprintType)
enum class EPropertyAccessCopyBatch : uint8 {
    InternalUnbatched,
    ExternalUnbatched,
    InternalBatched,
    ExternalBatched,
    Count,
};

