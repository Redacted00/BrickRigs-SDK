#pragma once
#include "CoreMinimal.h"
#include "NiagaraCompileHashVisitorDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraCompileHashVisitorDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PropertyKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PropertyValues;
    
    FNiagaraCompileHashVisitorDebugInfo();
};

