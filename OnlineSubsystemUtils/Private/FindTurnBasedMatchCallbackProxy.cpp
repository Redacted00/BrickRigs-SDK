#include "FindTurnBasedMatchCallbackProxy.h"

class APlayerController;
class ITurnBasedMatchInterface;
class UTurnBasedMatchInterface;
class UFindTurnBasedMatchCallbackProxy;
class UObject;

UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches) {
    return NULL;
}

UFindTurnBasedMatchCallbackProxy::UFindTurnBasedMatchCallbackProxy() {
}

