#pragma once
#include "CoreMinimal.h"
#include "BrickUserWidget.h"
#include "EMainWidgetType.h"
#include "Templates/SubclassOf.h"
#include "WindowManagerWidget.generated.h"

class UCanvasPanel;
class UContextMenuWidget;
class UHUDContainerWidget;
class UMainWidgetBase;
class UMenuAnchorWidget;
class UMenuWidget;
class UPopupContainerWidget;
class UPopupWidget;
class UTooltipWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UWindowManagerWidget : public UBrickUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMainWidgetType, UMainWidgetBase*> WidgetTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPopupContainerWidget*> PopupContainerWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPopupWidget*> UnusedPopupWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuAnchorWidget* MenuAnchorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMenuAnchorWidget*> MenuAnchorWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTooltipWidget* CurrentTooltipWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTooltipWidget*> PooledTooltipWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBrickUserWidget* TooltipOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainWidgetBase> IntroSequenceWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMenuWidget> MenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHUDContainerWidget> HUDContainerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPopupContainerWidget> PopupContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UContextMenuWidget> ContextMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTooltipWidget> TooltipWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TooltipOffset;
    
public:
    UWindowManagerWidget();
    UFUNCTION(BlueprintCallable)
    void OnIntroSequenceFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddActiveWidget(UMainWidgetBase* Widget);
    
};

