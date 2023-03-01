#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinitionHandle.h"
#include "NiagaraVariableBase.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraTypeDefinitionHandle TypeDefHandle;
    
public:
    NIAGARA_API FNiagaraVariableBase();
};

