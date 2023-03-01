#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceCollisionQuery.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceCollisionQuery();
};

