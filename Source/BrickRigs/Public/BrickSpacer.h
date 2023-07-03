#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "EBrickUIColorStyle.h"
#include "BrickSpacer.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickSpacer : public UImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
public:
    UBrickSpacer();
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
};

