#pragma once
#include "CoreMinimal.h"
#include "BrushEffectBlurring.h"
#include "BrushEffectCurlNoise.h"
#include "BrushEffectDisplacement.h"
#include "BrushEffectSmoothBlending.h"
#include "BrushEffectTerracing.h"
#include "LandmassBrushEffectsList.generated.h"

USTRUCT(BlueprintType)
struct FLandmassBrushEffectsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrushEffectBlurring Blurring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrushEffectCurlNoise CurlNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrushEffectDisplacement Displacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrushEffectSmoothBlending SmoothBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrushEffectTerracing Terracing;
    
    LANDMASS_API FLandmassBrushEffectsList();
};

