#pragma once
#include "CoreMinimal.h"
#include "NiagaraDebugHUDVariable.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraDebugHUDVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FNiagaraDebugHUDVariable();
};

