#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
#include "EBrickUIBrushStyle.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "BrickProgressBar.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIBrushStyle BackgroundBrushStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIStyleState BackgroundStyleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIBrushStyle FillBrushStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIStyleState FillStyleState;
    
public:
    UBrickProgressBar();
    UFUNCTION(BlueprintCallable)
    void SetFillStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetFillBrushStyle(EBrickUIBrushStyle NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle InColorStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundBrushStyle(EBrickUIBrushStyle NewStyle);
    
};

