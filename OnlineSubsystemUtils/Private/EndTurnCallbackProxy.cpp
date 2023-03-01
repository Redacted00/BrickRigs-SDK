#include "EndTurnCallbackProxy.h"

class APlayerController;
class ITurnBasedMatchInterface;
class UTurnBasedMatchInterface;
class UEndTurnCallbackProxy;
class UObject;

UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
    return NULL;
}

UEndTurnCallbackProxy::UEndTurnCallbackProxy() {
}

