#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterface2DArrayTexture.generated.h"

class UTexture2DArray;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DArray* Texture;
    
    UNiagaraDataInterface2DArrayTexture();
};

