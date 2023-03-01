#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HUDWidgetInterface.h"
#include "SpectatorWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API USpectatorWidget : public UUserWidget, public IHUDWidgetInterface {
    GENERATED_BODY()
public:
    USpectatorWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSpectatedPlayer(const FText& PlayerName, bool bIsValidPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpectateNextCharacter(bool bNext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetWidgetToFocus() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

