#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
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

