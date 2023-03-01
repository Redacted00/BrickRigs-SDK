#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterDataSetBinding.h"
#include "NiagaraParameterDataSetBindingCollection.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraParameterDataSetBindingCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParameterDataSetBinding> FloatOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParameterDataSetBinding> Int32Offsets;
    
    NIAGARA_API FNiagaraParameterDataSetBindingCollection();
};

