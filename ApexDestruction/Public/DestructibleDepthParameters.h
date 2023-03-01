#pragma once
#include "CoreMinimal.h"
#include "EImpactDamageOverride.h"
#include "DestructibleDepthParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleDepthParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EImpactDamageOverride> ImpactDamageOverride;
    
    APEXDESTRUCTION_API FDestructibleDepthParameters();
};

