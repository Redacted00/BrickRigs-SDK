#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid2D.h"
#include "NiagaraDataInterfaceGrid2DCollectionReader.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmitterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DIName;
    
    UNiagaraDataInterfaceGrid2DCollectionReader();
};

