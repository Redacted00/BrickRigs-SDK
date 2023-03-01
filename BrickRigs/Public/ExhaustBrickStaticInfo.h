#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "ExhaustBrickStaticInfo.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UExhaustBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SmokeEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BackFireEmitter;
    
    UExhaustBrickStaticInfo();
};

