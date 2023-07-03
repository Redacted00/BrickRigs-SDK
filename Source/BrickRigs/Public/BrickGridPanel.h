#pragma once
#include "CoreMinimal.h"
#include "Components/GridPanel.h"
#include "EBrickUISpacingStyle.h"
#include "BrickGridPanel.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickGridPanel : public UGridPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUISpacingStyle SlotSpacingStyle;
    
public:
    UBrickGridPanel();
    UFUNCTION(BlueprintCallable)
    void SetSlotSpacingStyle(EBrickUISpacingStyle NewStyle);
    
};

