#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraParameterDataSetBindingCollection.h"
#include "NiagaraParameterStore.h"
#include "NiagaraSystemCompiledData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterStore InstanceParamStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData DataSetCompiledData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;
    
    NIAGARA_API FNiagaraSystemCompiledData();
};

