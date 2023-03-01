#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceFactory -FallbackName=LiveLinkSourceFactory
#include "LiveLinkOpenXRHandTrackingSourceFactory.generated.h"

UCLASS(Blueprintable)
class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory {
    GENERATED_BODY()
public:
    ULiveLinkOpenXRHandTrackingSourceFactory();
};

