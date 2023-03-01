#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemCompileRequest.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNiagaraSystemCompileRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> RootObjects;
    
    NIAGARA_API FNiagaraSystemCompileRequest();
};

