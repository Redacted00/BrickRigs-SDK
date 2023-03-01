#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilitySettings.h"
#include "NiagaraEmitterScalabilityOverride.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideSpawnCountScale: 1;
    
    NIAGARA_API FNiagaraEmitterScalabilityOverride();
};

