#pragma once
#include "CoreMinimal.h"
#include "PointWeightMap.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FPointWeightMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    FPointWeightMap();
};

