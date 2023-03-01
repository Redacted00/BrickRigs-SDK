#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "PumpBrickStaticInfo.generated.h"

class UParticleSystem;
class USoundBase;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UPumpBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PumpEmitterTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PumpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterSweepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtinguishProbability;
    
    UPumpBrickStaticInfo();
};

