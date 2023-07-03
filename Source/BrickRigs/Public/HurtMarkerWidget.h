#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HurtMarkerWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHurtMarkerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHurtMarkerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHurtMarkerAnimation();
    
};

