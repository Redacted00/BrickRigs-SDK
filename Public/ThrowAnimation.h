#pragma once
#include "CoreMinimal.h"
#include "ItemAnimation.h"
#include "ThrowAnimation.generated.h"

USTRUCT(BlueprintType)
struct FThrowAnimation : public FItemAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowTime;
    
    BRICKRIGS_API FThrowAnimation();
};

