#pragma once
#include "CoreMinimal.h"
#include "EBrushBlendType.h"
#include "LandmassBrushEffectsList.h"
#include "LandmassFalloffSettings.h"
#include "LandmassTerrainCarvingSettings.generated.h"

USTRUCT(BlueprintType)
struct FLandmassTerrainCarvingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrushBlendType BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandmassFalloffSettings FalloffSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandmassBrushEffectsList Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    LANDMASS_API FLandmassTerrainCarvingSettings();
};

