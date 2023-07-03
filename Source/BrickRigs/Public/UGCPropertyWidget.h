#pragma once
#include "CoreMinimal.h"
#include "PropertyWidget.h"
#include "UGCPropertyWidget.generated.h"

class UPopupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UUGCPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPopupWidget> UGCBrowserPopupClass;
    
public:
    UUGCPropertyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemsText(int32 NumSelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnClickedButton();
    
};

