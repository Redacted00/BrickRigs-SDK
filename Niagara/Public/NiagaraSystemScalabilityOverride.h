#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilityOverride.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideDistanceSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideInstanceCountSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverridePerSystemInstanceCountSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideTimeSinceRendererSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideGlobalBudgetCullingSettings: 1;
    
    NIAGARA_API FNiagaraSystemScalabilityOverride();
};

