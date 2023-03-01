#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=GridPanel -FallbackName=GridPanel
#include "RadioButtonPanel.generated.h"

class URadioButtonWidget;

UCLASS(Blueprintable)
class BRICKRIGS_API URadioButtonPanel : public UGridPanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnButtonSelected, URadioButtonWidget*, Button, bool, bNewSelected);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSelectedButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSelectedButtons;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonSelected OnButtonSelectedDelegate;
    
    URadioButtonPanel();
    UFUNCTION(BlueprintCallable)
    void UnselectButton(URadioButtonWidget* Button);
    
    UFUNCTION(BlueprintCallable)
    void UnselectAll();
    
    UFUNCTION(BlueprintCallable)
    void SelectButton(URadioButtonWidget* Button);
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedWidgets(TArray<URadioButtonWidget*>& OutWidgets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadioButtonWidget* GetSelectedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSelectedWidgets() const;
    
};

