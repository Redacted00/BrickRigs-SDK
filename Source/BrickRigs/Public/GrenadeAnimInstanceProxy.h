#pragma once
#include "CoreMinimal.h"
#include "ItemAnimInstanceProxy.h"
#include "GrenadeAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FGrenadeAnimInstanceProxy : public FItemAnimInstanceProxy {
    GENERATED_BODY()
public:
    BRICKRIGS_API FGrenadeAnimInstanceProxy();
};

