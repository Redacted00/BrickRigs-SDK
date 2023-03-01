#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ENiagaraRibbonUVDistributionMode.h"
#include "ENiagaraRibbonUVEdgeMode.h"
#include "NiagaraRibbonUVSettings.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRibbonUVSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraRibbonUVDistributionMode DistributionMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraRibbonUVEdgeMode LeadingEdgeMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraRibbonUVEdgeMode TrailingEdgeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TilingLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePerParticleUOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePerParticleVRangeOverride;
    
    NIAGARA_API FNiagaraRibbonUVSettings();
};

