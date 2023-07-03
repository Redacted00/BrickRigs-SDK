#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"

class UGridPanel;
class UInventorySlotWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInventoryWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInventorySlotWidget*> SlotWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* SlotsPanel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSlotsPerRow;
    
    UInventoryWidget();
};

