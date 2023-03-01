#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis_InterpParamBase.h"
#include "NiagaraPreviewAxis_InterpParamFloat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
public:
    UNiagaraPreviewAxis_InterpParamFloat();
};

