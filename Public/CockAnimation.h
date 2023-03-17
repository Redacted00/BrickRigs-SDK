#pragma once
#include "CoreMinimal.h"
#include "ItemAnimation.h"
#include "CockAnimation.generated.h"

USTRUCT(BlueprintType)
struct FCockAnimation : public FItemAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PulledTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleasedTime;
    
    BRICKRIGS_API FCockAnimation();
};

