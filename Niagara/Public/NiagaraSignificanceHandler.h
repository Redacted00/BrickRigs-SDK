#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraSignificanceHandler.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraSignificanceHandler : public UObject {
    GENERATED_BODY()
public:
    UNiagaraSignificanceHandler();
};

