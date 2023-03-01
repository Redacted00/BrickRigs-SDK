#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "ItemAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FItemAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    BRICKRIGS_API FItemAnimInstanceProxy();
};

