#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MatchTimerWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMatchTimerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMatchTimerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimer(int32 NewTime);
    
};

