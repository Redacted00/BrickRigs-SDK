#pragma once
#include "CoreMinimal.h"
#include "WorldSetupParams.h"
#include "MenuSequenceProperties.generated.h"

USTRUCT(BlueprintType)
struct FMenuSequenceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayOnDayOfMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayDuringMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayOnDayOfWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldSetupParams> WorldSetupParamsOverrides;
    
    BRICKRIGS_API FMenuSequenceProperties();
};

