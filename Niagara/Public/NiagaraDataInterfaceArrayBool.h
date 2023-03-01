#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayBool.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> BoolData;
    
    UNiagaraDataInterfaceArrayBool();
};

