#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraScriptDataInterfaceCompileInfo.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraScriptDataInterfaceCompileInfo {
    GENERATED_BODY()
public:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaceholder;
    
    FNiagaraScriptDataInterfaceCompileInfo();
};

