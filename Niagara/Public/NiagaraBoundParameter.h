#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraBoundParameter.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraBoundParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SrcOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestOffset;
    
    NIAGARA_API FNiagaraBoundParameter();
};

