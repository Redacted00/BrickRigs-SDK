#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EMeasurementSystem.h"
#include "EValueChangedEventType.h"
#include "HUDWidgetInterface.h"
#include "Templates/SubclassOf.h"
#include "BrickEditorWidget.generated.h"

class UBrickEditorMirrorModeWidget;
class UBrickEditorModeWidget;
class UBrickTextBoxWidget;
class UGridPanel;
class UPagedListHeaderWidget;
class UPlacableObjectWidget;
class UPopupWidget;
class UPropertiesPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickEditorWidget : public UUserWidget, public IHUDWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBrickEditorModeWidget* CurrentModeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickEditorModeWidget*> UnusedModeWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPlacableObjectWidget*> PlacableWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickEditorMirrorModeWidget*> MirrorModeWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPagedListHeaderWidget* ItemHeaderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBoxWidget* PlacableSearchTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* PlacablesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropertiesPanelWidget* PropertiesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlacableObjectWidget> PlacableWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlacablesPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacableSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPopupWidget> UGCTaskPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrickEditorModeWidget> MoveModeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrickEditorMirrorModeWidget> MirrorModeWidgetClass;
    
public:
    UBrickEditorWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelection(const FText& SelectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanPlaceObjects(bool bNewCanPlace);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanClearPlacableFilter(bool bNewCanClear);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlacableSearchTextChanged(const FText& NewText, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnMeasurementSystemChanged(EMeasurementSystem NewSystem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearPlacableFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddModeWidget(UBrickEditorModeWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMirrorModeWidget(UBrickEditorMirrorModeWidget* Widget, int32 Index);
    
    
    // Fix for true pure virtual functions not being implemented
};

