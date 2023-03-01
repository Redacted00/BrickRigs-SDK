#pragma once
#include "CoreMinimal.h"
#include "ItemAnimation.h"
#include "FireAnimation.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FFireAnimation : public FItemAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* FireEmptyMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> FireEmptySequence;
    
    BRICKRIGS_API FFireAnimation();
};

