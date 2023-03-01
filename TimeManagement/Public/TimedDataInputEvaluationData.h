#pragma once
#include "CoreMinimal.h"
#include "TimedDataInputEvaluationData.generated.h"

USTRUCT(BlueprintType)
struct TIMEMANAGEMENT_API FTimedDataInputEvaluationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToNewestSampleSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToOldestSampleSeconds;
    
    FTimedDataInputEvaluationData();
};

