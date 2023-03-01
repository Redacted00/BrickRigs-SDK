#pragma once
#include "CoreMinimal.h"
#include "LiveLinkConnectMessage.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkConnectMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LiveLinkVersion;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkConnectMessage();
};

