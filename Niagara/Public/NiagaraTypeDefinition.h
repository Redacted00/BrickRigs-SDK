#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraTypeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ClassStructOrEnum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 UnderlyingType;
    
    FNiagaraTypeDefinition();
};

