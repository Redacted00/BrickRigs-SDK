#pragma once
#include "CoreMinimal.h"
#include "OnInteractionDelegate.generated.h"

class ABrickPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnInteraction, ABrickPlayerController*, InPC);

