#pragma once
#include "CoreMinimal.h"
#include "LiveLinkWorldTime.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkWorldTime {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Offset;
    
public:
    LIVELINKINTERFACE_API FLiveLinkWorldTime();
};

