#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Fence.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API AFence : public AActor {
    GENERATED_BODY()
public:
    AFence();
};

