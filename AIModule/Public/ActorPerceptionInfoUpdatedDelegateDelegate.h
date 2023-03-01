#pragma once
#include "CoreMinimal.h"
#include "ActorPerceptionUpdateInfo.h"
#include "ActorPerceptionInfoUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorPerceptionInfoUpdatedDelegate, const FActorPerceptionUpdateInfo&, UpdateInfo);

