#include "AchievementWriteCallbackProxy.h"

class APlayerController;
class UAchievementWriteCallbackProxy;
class UObject;

UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag) {
    return NULL;
}

UAchievementWriteCallbackProxy::UAchievementWriteCallbackProxy() {
}

