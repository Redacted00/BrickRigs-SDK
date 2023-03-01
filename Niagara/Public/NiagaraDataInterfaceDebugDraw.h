#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceDebugDraw.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceDebugDraw();
};

