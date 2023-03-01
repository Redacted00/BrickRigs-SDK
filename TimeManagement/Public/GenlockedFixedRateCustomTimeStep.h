#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "GenlockedCustomTimeStep.h"
#include "GenlockedFixedRateCustomTimeStep.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TIMEMANAGEMENT_API UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
    UGenlockedFixedRateCustomTimeStep();
};

