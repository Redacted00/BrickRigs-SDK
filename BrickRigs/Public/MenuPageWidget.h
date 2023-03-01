#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EMenuPageSize.h"
#include "MenuPageWidget.generated.h"

class UMenuWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMenuPageWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuPageSize MenuPageSize;
    
public:
    UMenuPageWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StepBack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuWidget* GetMenuWidget() const;
    
};

