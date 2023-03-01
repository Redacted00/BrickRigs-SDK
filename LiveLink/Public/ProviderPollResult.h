#pragma once
#include "CoreMinimal.h"
#include "ProviderPollResult.generated.h"

USTRUCT(BlueprintType)
struct FProviderPollResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MachineName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MachineTimeOffset;
    
    LIVELINK_API FProviderPollResult();
};

