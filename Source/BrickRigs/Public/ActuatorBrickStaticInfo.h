#pragma once
#include "CoreMinimal.h"
#include "ActuatorBrickBaseStaticInfo.h"
#include "ActuatorBrickStaticInfo.generated.h"

class USoundBase;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UActuatorBrickStaticInfo : public UActuatorBrickBaseStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAngularActuator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActuationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLegacyLinearSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ActuatorSound;
    
    UActuatorBrickStaticInfo();
};

