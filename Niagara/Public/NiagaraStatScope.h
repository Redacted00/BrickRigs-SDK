#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatScope.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatScope {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FriendlyName;
    
    NIAGARA_API FNiagaraStatScope();
};

