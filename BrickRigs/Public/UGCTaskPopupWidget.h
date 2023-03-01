#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "UGCTaskPopupWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UUGCTaskPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressInterpSpeed;
    
public:
    UUGCTaskPopupWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateProgress(float NewProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsFinished(bool bNewFinished, bool bNewSuccess);
    
};

