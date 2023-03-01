#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceSettings -FallbackName=LiveLinkSourceSettings
#include "LiveLinkMessageBusSourceSettings.generated.h"

UCLASS(Blueprintable)
class LIVELINK_API ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings {
    GENERATED_BODY()
public:
    ULiveLinkMessageBusSourceSettings();
};

