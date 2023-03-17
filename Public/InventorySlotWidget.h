#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EventReply -FallbackName=EventReply
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InventorySlotWidget.generated.h"

class UBrickButtonWidget;
class UBrickImage;
class UBrickTextBlock;
class UInventoryContainerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInventorySlotWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryContainerWidget* SubInventoryContainerWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* AmountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* IconImage;
    
public:
    UInventorySlotWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSlotApperance(bool bInIsDragWidget, bool bInIsSpecialSlot, bool bInIsValidSlot, bool bInCanDrag, bool bInIsDragging, bool bInCanDrop, bool bInDropReplace, bool bInIsDragOver);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnButtonDragged(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSubInventoryWidget(UInventoryContainerWidget* Widget);
    
};

