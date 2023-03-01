#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetConnection -FallbackName=NetConnection
#include "SteamSocketsNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class STEAMSOCKETS_API USteamSocketsNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    USteamSocketsNetConnection();
};

