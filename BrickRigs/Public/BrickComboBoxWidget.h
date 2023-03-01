#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BrickComboBoxItemParams.h"
#include "EValueChangedEventType.h"
#include "Templates/SubclassOf.h"
#include "BrickComboBoxWidget.generated.h"

class UBrickComboBoxItemContainerWidget;
class UBrickComboBoxItemWidget;
class UBrickComboBoxMenuWidget;
class UGridPanel;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickComboBoxWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemSelected, int32, Item, EValueChangedEventType, EventType);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnInitializeItem, int32, Item, FBrickComboBoxItemParams&, OutParams);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBrickComboBoxItemWidget* SelectedItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickComboBoxItemContainerWidget*> ItemContainerWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickComboBoxItemWidget*> UnusedItemWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBrickComboBoxMenuWidget* MenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* ItemsPanel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrickComboBoxItemWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrickComboBoxItemContainerWidget> ItemContainerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrickComboBoxMenuWidget> MenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxListItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemsPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitializeItem OnInitializeItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelected OnItemSelectedDelegate;
    
    UBrickComboBoxWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateUseItemList(bool bInUseItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsExpanded(bool bInIsExpanded);
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleComboBoxExpanded();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedItem(int32 InItem);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxListItems(int32 InMaxListItems);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxItemsPerRow(int32 InMaxItemsPerRow);
    
    UFUNCTION(BlueprintCallable)
    void SetComboBoxExpanded(bool bNewExpanded);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnComboBoxMenuItemSelected(int32 Item, EValueChangedEventType EventType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComboBoxExpanded() const;
    
    UFUNCTION(BlueprintCallable)
    void InitItemsComplex(const TArray<int32>& InItems, int32 InSelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void InitItems(int32 InNumItems, int32 InSelectedItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumItems() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSelectedItemWidget(UBrickComboBoxItemWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItemContainerWidget(UBrickComboBoxItemContainerWidget* Widget, int32 Index);
    
};

