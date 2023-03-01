#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "SteamNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class USteamNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    USteamNetDriver();
};

