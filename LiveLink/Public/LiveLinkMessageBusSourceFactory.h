#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceFactory -FallbackName=LiveLinkSourceFactory
#include "LiveLinkMessageBusSourceFactory.generated.h"

UCLASS(Blueprintable)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory {
    GENERATED_BODY()
public:
    ULiveLinkMessageBusSourceFactory();
};

