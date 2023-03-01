#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTransformAxisSwitchPreProcessor.h"
#include "LiveLinkAnimationAxisSwitchPreProcessor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIVELINK_API ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor {
    GENERATED_BODY()
public:
    ULiveLinkAnimationAxisSwitchPreProcessor();
};

