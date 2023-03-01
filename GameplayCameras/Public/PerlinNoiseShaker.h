#pragma once
#include "CoreMinimal.h"
#include "PerlinNoiseShaker.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FPerlinNoiseShaker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    FPerlinNoiseShaker();
};

