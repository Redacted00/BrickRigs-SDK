#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraVariable.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariable : public FNiagaraVariableBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> VarData;
    
public:
    NIAGARA_API FNiagaraVariable();
};
FORCEINLINE uint32 GetTypeHash(const FNiagaraVariable) { return 0; }

