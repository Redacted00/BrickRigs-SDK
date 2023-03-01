#pragma once
#include "CoreMinimal.h"
#include "GrainTableEntry.generated.h"

USTRUCT(BlueprintType)
struct FGrainTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RPM;
    
    MOTOSYNTH_API FGrainTableEntry();
};

