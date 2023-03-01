#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Border -FallbackName=Border
#include "EBrickUIBrushStyle.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "BrickBorder.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickBorder : public UBorder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIBrushStyle BrushStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIStyleState StyleState;
    
public:
    UBrickBorder();
    UFUNCTION(BlueprintCallable)
    void SetStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushStyle(EBrickUIBrushStyle NewStyle);
    
};

