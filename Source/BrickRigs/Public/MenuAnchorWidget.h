#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuAnchorWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMenuAnchorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMenuAnchorWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    
};

