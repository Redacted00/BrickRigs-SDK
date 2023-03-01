#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemUpdateContext.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSystemUpdateContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ComponentsToReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ComponentsToReInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> SystemSimsToDestroy;
    
public:
    FNiagaraSystemUpdateContext();
};

