#pragma once
#include "CoreMinimal.h"
#include "BrickComboBoxItemWidget.h"
#include "Templates/SubclassOf.h"
#include "FlashSequenceItemWidget.generated.h"

class USirenSequence;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UFlashSequenceItemWidget : public UBrickComboBoxItemWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<USirenSequence> FlashSequenceClass;
    
public:
    UFlashSequenceItemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsLit(bool bNewLit);
    
};

