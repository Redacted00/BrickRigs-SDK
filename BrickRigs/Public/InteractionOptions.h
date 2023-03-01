#pragma once
#include "CoreMinimal.h"
#include "EHUDIconDomain.h"
#include "EInteractionOptionSlot.h"
#include "InteractionOption.h"
#include "InteractionOptions.generated.h"

USTRUCT(BlueprintType)
struct FInteractionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDIconDomain Domain;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInteractionOptionSlot, FInteractionOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractionOption> AdditionalOptions;
    
public:
    BRICKRIGS_API FInteractionOptions();
};

