#pragma once
#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "EBrickUISpacingStyle.h"
#include "BrickHorizontalBox.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickHorizontalBox : public UHorizontalBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUISpacingStyle SlotSpacingStyle;
    
public:
    UBrickHorizontalBox();
    UFUNCTION(BlueprintCallable)
    void SetSlotSpacingStyle(EBrickUISpacingStyle NewStyle);
    
};

