#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis_InterpParamBase.h"
#include "NiagaraPreviewAxis_InterpParamInt32.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
public:
    UNiagaraPreviewAxis_InterpParamInt32();
};

