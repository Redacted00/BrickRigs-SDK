#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilityOverride.h"
#include "NiagaraEmitterScalabilityOverrides.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEmitterScalabilityOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraEmitterScalabilityOverride> Overrides;
    
    NIAGARA_API FNiagaraEmitterScalabilityOverrides();
};

