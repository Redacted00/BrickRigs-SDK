#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis.h"
#include "NiagaraPreviewAxis_InterpParamBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    UNiagaraPreviewAxis_InterpParamBase();
};

