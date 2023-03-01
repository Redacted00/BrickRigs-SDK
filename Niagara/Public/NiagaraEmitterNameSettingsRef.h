#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterNameSettingsRef.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEmitterNameSettingsRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SystemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmitterName;
    
    NIAGARA_API FNiagaraEmitterNameSettingsRef();
};

