#pragma once
#include "CoreMinimal.h"
#include "FOscillator.h"
#include "VOscillator.generated.h"

USTRUCT(BlueprintType)
struct FVOscillator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator Z;
    
    GAMEPLAYCAMERAS_API FVOscillator();
};

