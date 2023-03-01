#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PacketHandler -ObjectName=HandlerComponentFactory -FallbackName=HandlerComponentFactory
#include "SteamAuthComponentModuleInterface.generated.h"

UCLASS(Blueprintable)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory {
    GENERATED_BODY()
public:
    USteamAuthComponentModuleInterface();
};

