#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraVariable.h"
#include "NiagaraEmitterCompiledData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEmitterCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SpawnAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterSpawnIntervalVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterInterpSpawnStartDTVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterSpawnGroupVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterAgeVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterRandomSeedVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterInstanceSeedVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterTotalSpawnedParticlesVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData DataSetCompiledData;
    
    NIAGARA_API FNiagaraEmitterCompiledData();
};

