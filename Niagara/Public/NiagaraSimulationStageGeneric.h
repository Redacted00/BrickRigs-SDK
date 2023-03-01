#pragma once
#include "CoreMinimal.h"
#include "ENiagaraIterationSource.h"
#include "NiagaraSimulationStageBase.h"
#include "NiagaraVariableDataInterfaceBinding.h"
#include "NiagaraSimulationStageGeneric.generated.h"

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraIterationSource IterationSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Iterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisablePartialParticleUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableDataInterfaceBinding DataInterface;
    
    UNiagaraSimulationStageGeneric();
};

