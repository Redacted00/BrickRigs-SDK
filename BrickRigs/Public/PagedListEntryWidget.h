#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BrickPropertyInterface.h"
#include "PagedListEntryWidget.generated.h"

class UBrickButtonWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPagedListEntryWidget : public UUserWidget, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* Button;
    
public:
    UPagedListEntryWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateButtonSelected(bool bNewSelected);
    
    UFUNCTION(BlueprintCallable)
    void OnDoubleClickedEntry();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeEntry();
    
    
    // Fix for true pure virtual functions not being implemented
};

