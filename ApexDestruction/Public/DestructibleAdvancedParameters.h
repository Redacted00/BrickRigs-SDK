#pragma once
#include "CoreMinimal.h"
#include "DestructibleAdvancedParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleAdvancedParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxChunkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FractureImpulseScale;
    
    APEXDESTRUCTION_API FDestructibleAdvancedParameters();
};

