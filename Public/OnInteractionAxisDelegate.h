#pragma once
#include "CoreMinimal.h"
#include "OnInteractionAxisDelegate.generated.h"

class ABrickPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnInteractionAxis, ABrickPlayerController*, InPC, float, Val);

