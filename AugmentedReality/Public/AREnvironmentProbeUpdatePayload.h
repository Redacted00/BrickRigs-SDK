#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AREnvironmentProbeUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FAREnvironmentProbeUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    AUGMENTEDREALITY_API FAREnvironmentProbeUpdatePayload();
};

