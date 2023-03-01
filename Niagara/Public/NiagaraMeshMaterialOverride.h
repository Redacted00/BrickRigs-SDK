#pragma once
#include "CoreMinimal.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraMeshMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraMeshMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ExplicitMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding UserParamBinding;
    
    FNiagaraMeshMaterialOverride();
};

