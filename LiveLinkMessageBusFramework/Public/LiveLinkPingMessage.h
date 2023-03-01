#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LiveLinkPingMessage.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkPingMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PollRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LiveLinkVersion;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkPingMessage();
};

