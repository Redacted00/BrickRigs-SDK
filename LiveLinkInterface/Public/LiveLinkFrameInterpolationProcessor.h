#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkFrameInterpolationProcessor.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class LIVELINKINTERFACE_API ULiveLinkFrameInterpolationProcessor : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkFrameInterpolationProcessor();
};

