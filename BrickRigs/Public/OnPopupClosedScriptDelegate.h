#pragma once
#include "CoreMinimal.h"
#include "EPopupResult.h"
#include "OnPopupClosedScriptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPopupClosedScript, EPopupResult, Result);

