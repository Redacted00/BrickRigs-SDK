#pragma once
#include "CoreMinimal.h"
#include "ESlateVisibility.h"
#include "OnVisibilityChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVisibilityChangedEvent, ESlateVisibility, InVisibility);

