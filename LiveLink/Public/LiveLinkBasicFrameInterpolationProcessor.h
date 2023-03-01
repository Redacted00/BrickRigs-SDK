#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkFrameInterpolationProcessor -FallbackName=LiveLinkFrameInterpolationProcessor
#include "LiveLinkBasicFrameInterpolationProcessor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LIVELINK_API ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolatePropertyValues;
    
    ULiveLinkBasicFrameInterpolationProcessor();
};

