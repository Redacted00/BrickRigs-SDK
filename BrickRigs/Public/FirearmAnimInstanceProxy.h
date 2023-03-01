#pragma once
#include "CoreMinimal.h"
#include "ItemAnimInstanceProxy.h"
#include "FirearmAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FFirearmAnimInstanceProxy : public FItemAnimInstanceProxy {
    GENERATED_BODY()
public:
    BRICKRIGS_API FFirearmAnimInstanceProxy();
};

