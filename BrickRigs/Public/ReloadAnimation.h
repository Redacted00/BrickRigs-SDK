#pragma once
#include "CoreMinimal.h"
#include "ItemAnimation.h"
#include "ReloadAnimation.generated.h"

USTRUCT(BlueprintType)
struct FReloadAnimation : public FItemAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabMagTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsertedTime;
    
    BRICKRIGS_API FReloadAnimation();
};

