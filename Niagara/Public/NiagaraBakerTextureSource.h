#pragma once
#include "CoreMinimal.h"
#include "NiagaraBakerTextureSource.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraBakerTextureSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceName;
    
    NIAGARA_API FNiagaraBakerTextureSource();
};

