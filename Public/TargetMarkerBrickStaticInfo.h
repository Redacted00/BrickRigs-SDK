#pragma once
#include "CoreMinimal.h"
#include "CameraBrickStaticInfo.h"
#include "HUDIconProperties.h"
#include "TargetMarkerBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UTargetMarkerBrickStaticInfo : public UCameraBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDIconProperties ImpactPointIconProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTrajectoryIterationsPerGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrajectoryDistributionExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxGunIterationsPerFrame;
    
    UTargetMarkerBrickStaticInfo();
};

