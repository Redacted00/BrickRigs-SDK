#pragma once
#include "CoreMinimal.h"
#include "Components/Border.h"
#include "EBrickUIBrushStyle.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIPaddingStyle.h"
#include "EBrickUIStyleState.h"
#include "BrickBorder.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickBorder : public UBorder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIBrushStyle BrushStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIStyleState StyleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIPaddingStyle PaddingStyle;
    
public:
    UBrickBorder();
    UFUNCTION(BlueprintCallable)
    void SetStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetPaddingStyle(EBrickUIPaddingStyle NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushStyle(EBrickUIBrushStyle NewStyle);
    
};

