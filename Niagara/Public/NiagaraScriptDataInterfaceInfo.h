#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraScriptDataInterfaceInfo.generated.h"

class UNiagaraDataInterface;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraScriptDataInterfaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataInterface* DataInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserPtrIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraTypeDefinition Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegisteredParameterMapRead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegisteredParameterMapWrite;
    
    FNiagaraScriptDataInterfaceInfo();
};

