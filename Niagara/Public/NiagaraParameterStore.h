#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableWithOffset.h"
#include "NiagaraParameterStore.generated.h"

class UNiagaraDataInterface;
class UObject;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraParameterStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ParameterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraDataInterface*> DataInterfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UObjects;
    
public:
    FNiagaraParameterStore();
};

