#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBrickUIBrushStyle.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "ButtonWidgetBase.generated.h"

class UBrickBorder;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UButtonWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickBorder* Border;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIBrushStyle BrushStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenWhileUnfocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UButtonWidgetBase();
    UFUNCTION(BlueprintCallable)
    void UpdateContentStyle();
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool bNewSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenWhileUnfocused(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomFocus(bool bNewUseCustomFocus, bool bNewFocused);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewColorStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushStyle(EBrickUIBrushStyle NewBrushStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateContentStyle(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InStyleState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBrickUIStyleState GetContentStyleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBrickUIStyleState GetButtonStyleState() const;
    
};

