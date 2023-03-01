#pragma once
#include "CoreMinimal.h"
#include "BrushEffectSmoothBlending.generated.h"

USTRUCT(BlueprintType)
struct FBrushEffectSmoothBlending {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerSmoothDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterSmoothDistance;
    
    LANDMASS_API FBrushEffectSmoothBlending();
};

