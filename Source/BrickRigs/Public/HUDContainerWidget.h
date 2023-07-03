#pragma once
#include "CoreMinimal.h"
#include "MainWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "HUDContainerWidget.generated.h"

class UGameOverlayWidget;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHUDContainerWidget : public UMainWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGameOverlayWidget* GameOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> HUDWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameOverlayWidget> GameOverlayWidgetClass;
    
public:
    UHUDContainerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHUDWidget(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddGameOverlayWidget(UGameOverlayWidget* Widget);
    
};

