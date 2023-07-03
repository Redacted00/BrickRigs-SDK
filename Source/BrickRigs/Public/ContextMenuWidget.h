#pragma once
#include "CoreMinimal.h"
#include "MenuAnchorWidget.h"
#include "ContextMenuWidget.generated.h"

class UInputActionListWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UContextMenuWidget : public UMenuAnchorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputActionListWidget* ActionListWidget;
    
public:
    UContextMenuWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTitleText(const FText& InText);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActionTriggered(const FName& ActionName, bool bReleased);
    
};

