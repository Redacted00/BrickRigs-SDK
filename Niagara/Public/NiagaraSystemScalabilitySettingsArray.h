#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilitySettingsArray.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemScalabilitySettingsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSystemScalabilitySettings> Settings;
    
    NIAGARA_API FNiagaraSystemScalabilitySettingsArray();
};

