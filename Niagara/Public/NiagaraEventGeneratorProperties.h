#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraEventGeneratorProperties.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEventGeneratorProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEventsPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData DataSetCompiledData;
    
    NIAGARA_API FNiagaraEventGeneratorProperties();
};

