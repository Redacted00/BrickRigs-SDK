#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "ReuploadPopupWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UReuploadPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
    UReuploadPopupWidget();
    UFUNCTION(BlueprintCallable)
    void ViewOriginalItemInBrowser();
    
    UFUNCTION(BlueprintCallable)
    void ViewOriginalAuthorInBrowser();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOriginalAuthorName(FText& OutName) const;
    
};

