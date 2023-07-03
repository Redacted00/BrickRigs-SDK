#pragma once
#include "CoreMinimal.h"
#include "SirenSequenceChannel.generated.h"

USTRUCT(BlueprintType)
struct FSirenSequenceChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Timings;
    
    BRICKRIGS_API FSirenSequenceChannel();
};

