#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterfaceWater.generated.h"

class AWaterBody;

UCLASS(Blueprintable, EditInlineNew)
class WATER_API UNiagaraDataInterfaceWater : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterBody* SourceBody;
    
public:
    UNiagaraDataInterfaceWater();
};

