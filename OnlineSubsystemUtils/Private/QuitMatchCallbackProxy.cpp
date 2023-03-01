#include "QuitMatchCallbackProxy.h"

class APlayerController;
class UObject;
class UQuitMatchCallbackProxy;

UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TEnumAsByte<EMPMatchOutcome::Type> Outcome, int32 TurnTimeoutInSeconds) {
    return NULL;
}

UQuitMatchCallbackProxy::UQuitMatchCallbackProxy() {
}

