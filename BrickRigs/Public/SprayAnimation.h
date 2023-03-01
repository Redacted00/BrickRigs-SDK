#pragma once
#include "CoreMinimal.h"
#include "ItemAnimation.h"
#include "SprayAnimation.generated.h"

USTRUCT(BlueprintType)
struct FSprayAnimation : public FItemAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprayTime;
    
    BRICKRIGS_API FSprayAnimation();
};

