#pragma once
#include "CoreMinimal.h"
#include "BrushEffectBlurring.generated.h"

USTRUCT(BlueprintType)
struct FBrushEffectBlurring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlurShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Radius;
    
    LANDMASS_API FBrushEffectBlurring();
};

