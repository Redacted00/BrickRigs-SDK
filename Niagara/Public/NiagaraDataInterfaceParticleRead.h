#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraDataInterfaceParticleRead.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmitterName;
    
    UNiagaraDataInterfaceParticleRead();
};

