#pragma once
#include "CoreMinimal.h"
#include "NiagaraMaterialOverride.generated.h"

class UMaterialInterface;
class UNiagaraRendererProperties;

USTRUCT(BlueprintType)
struct FNiagaraMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaterialSubIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraRendererProperties* EmitterRendererProperty;
    
    NIAGARA_API FNiagaraMaterialOverride();
};

