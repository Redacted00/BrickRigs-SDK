#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimpleClientInfo.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSimpleClientInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Systems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Emitters;
    
    FNiagaraSimpleClientInfo();
};

