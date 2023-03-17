#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "ViewTargetSharedParams.h"
#include "ViewTargetCameraSpeedParams.generated.h"

USTRUCT(BlueprintType)
struct FViewTargetCameraSpeedParams : public FViewTargetSharedParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval SpeedRange;
    
    BRICKRIGS_API FViewTargetCameraSpeedParams();
};

