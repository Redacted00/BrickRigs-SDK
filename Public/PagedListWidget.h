#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "PagedListWidget.generated.h"

class UGridPanel;
class UObject;
class UPageSelectorWidget;
class UPagedListEntryWidget;
class UPagedListHeaderWidget;
class UPropertiesPanelWidget;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPagedListWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadPage, int32, NewPage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEntrySelected, UPagedListEntryWidget*, Widget, bool, bDoubleClick);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPagedListEntryWidget*> EntryWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPageSelectorWidget* PageSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* EntriesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropertiesPanelWidget* PropertiesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropertiesPanelWidget* DetailsPropertiesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPagedListHeaderWidget* SelectedEntryHeaderWidget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPagedListEntryWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEntriesPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEntriesPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAbsoluteEntryIndices;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadPage OnLoadPageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEntrySelected OnEntrySelectedDelegate;
    
    UPagedListWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsLoading(bool bNewLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsEntrySelected(bool bIsEntrySelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(int32 InPage);
    
    UFUNCTION(BlueprintCallable)
    void RefreshEntries();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPageChanged(int32 NewPage);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEntriesLoaded(int32 InTotalNumEntries, int32 InMaxPages);
    
    UFUNCTION(BlueprintCallable)
    void InitializePropertiesPanel(UObject* Container);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPagedListEntryWidget* GetSelectedEntryWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPage() const;
    
};

