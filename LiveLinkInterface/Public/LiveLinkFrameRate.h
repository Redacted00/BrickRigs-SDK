#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "LiveLinkFrameRate.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkFrameRate : public FFrameRate {
    GENERATED_BODY()
public:
    LIVELINKINTERFACE_API FLiveLinkFrameRate();
};

