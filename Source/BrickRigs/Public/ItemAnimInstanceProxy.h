#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "ItemAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FItemAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    BRICKRIGS_API FItemAnimInstanceProxy();
};

