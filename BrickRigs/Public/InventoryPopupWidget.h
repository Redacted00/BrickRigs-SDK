#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "Templates/SubclassOf.h"
#include "InventoryPopupWidget.generated.h"

class UBrickButtonWidget;
class UCanvasPanel;
class UInventoryContainerWidget;
class UInventorySlotWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInventoryPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInventorySlotWidget*> UnusedSlotWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInventoryContainerWidget*> UnusedSubInventoryContainerWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventorySlotWidget* DragWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DragCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryContainerWidget* OwnInventoryContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryContainerWidget* OtherInventoryContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* DropButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInventorySlotWidget> SlotWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInventoryContainerWidget> SubInvetoryContainerWidgetClass;
    
public:
    UInventoryPopupWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDropArea(bool bInIsDragging, bool bInCanDrop, bool bInIsDragOver);
    
    UFUNCTION(BlueprintCallable)
    void OnDropButtonClicked();
    
};

