#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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

