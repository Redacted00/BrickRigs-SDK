#pragma once
#include "CoreMinimal.h"
#include "ENiagaraBindingSource.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableBase.h"
#include "NiagaraVariableAttributeBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableAttributeBinding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableBase ParamMapVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable DataSetVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable RootVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENiagaraBindingSource> BindingSourceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBindingExistsOnSource: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCachedParticleValue: 1;
    
public:
    NIAGARA_API FNiagaraVariableAttributeBinding();
};

