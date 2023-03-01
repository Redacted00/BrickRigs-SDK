#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraPrecompileContainer.generated.h"

class UNiagaraScript;
class UNiagaraSystem;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraPrecompileContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraScript*> Scripts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* System;
    
    UNiagaraPrecompileContainer();
};

