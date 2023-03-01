#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NiagaraActor.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, MinimalAPI)
class ANiagaraActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnSystemFinish: 1;
    
public:
    ANiagaraActor();
    UFUNCTION(BlueprintCallable)
    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
    
};

