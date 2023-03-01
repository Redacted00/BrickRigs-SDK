#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "ViewTargetSharedParams.h"
#include "ViewTargetZoomParams.generated.h"

USTRUCT(BlueprintType)
struct FViewTargetZoomParams : public FViewTargetSharedParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ZoomRange;
    
    BRICKRIGS_API FViewTargetZoomParams();
};

