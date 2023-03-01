#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "SteamNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class USteamNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPassthrough;
    
    USteamNetConnection();
};

