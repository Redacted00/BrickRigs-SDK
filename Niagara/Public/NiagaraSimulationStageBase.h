#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraMergeable -FallbackName=NiagaraMergeable
#include "NiagaraSimulationStageBase.generated.h"

class UNiagaraScript;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraSimulationStageBase : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraScript* Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SimulationStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UNiagaraSimulationStageBase();
};

