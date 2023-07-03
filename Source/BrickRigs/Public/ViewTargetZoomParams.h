#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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

