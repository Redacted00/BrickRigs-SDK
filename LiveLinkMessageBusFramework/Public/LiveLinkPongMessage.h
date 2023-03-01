#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LiveLinkPongMessage.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkPongMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProviderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PollRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LiveLinkVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CreationPlatformTime;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkPongMessage();
};

