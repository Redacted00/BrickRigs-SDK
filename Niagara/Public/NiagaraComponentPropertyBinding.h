#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraComponentPropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraComponentPropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding AttributeBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraTypeDefinition PropertyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MetadataSetterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PropertySetterParameterDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNiagaraVariable WritableValue;
    
    NIAGARA_API FNiagaraComponentPropertyBinding();
};

