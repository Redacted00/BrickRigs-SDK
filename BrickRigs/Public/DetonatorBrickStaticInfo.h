#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "DetonatorBrickStaticInfo.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UDetonatorBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TriggerEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTriggerEmitterDrawDistance;
    
    UDetonatorBrickStaticInfo();
};

