#pragma once
#include "CoreMinimal.h"
#include "XRDeviceOnDisconnectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FXRDeviceOnDisconnectDelegate, const FString&, OutReason);

