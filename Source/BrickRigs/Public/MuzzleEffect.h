#pragma once
#include "CoreMinimal.h"
#include "MuzzleEffect.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FMuzzleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Emitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Sound;
    
    BRICKRIGS_API FMuzzleEffect();
};

