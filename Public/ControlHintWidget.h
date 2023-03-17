#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DisplayInfo.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "EBrickUITextStyle.h"
#include "EControlHintDisplayInfoMode.h"
#include "EInputActionTriggerType.h"
#include "EInputMethod.h"
#include "ControlHintWidget.generated.h"

class UBrickImage;
class UBrickProgressBar;
class UBrickTextBlock;
class UInputChordWidget;
class UScaleBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UControlHintWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* InputChordScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputChordWidget* InputChordWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickProgressBar* HoldProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputActionTriggerType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUnboundKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInputChord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayInfo CustomDisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlHintDisplayInfoMode DisplayInfoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIStyleState StyleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldProgressInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PressedKeyPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyPaddingInterpSpeed;
    
public:
    UControlHintWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTextVisibility(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIsHoldAction(bool bIsHoldAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputChordVisibility(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputChordStyleState(EBrickUIStyleState InStyleState, bool bInIsHoldAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIconVisibility(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateHoldProgress(float InHoldProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDisplayInfo(const FDisplayInfo& NewDisplayInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTextStyle(EBrickUITextStyle NewStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUnboundKey(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowInputChord(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInputChordScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayInfoMode(EControlHintDisplayInfoMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayInfo(const FDisplayInfo& InDisplayInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(FName InActionName, EInputActionTriggerType InTriggerType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInputMethodChanged(EInputMethod NewInputMethod);
    
};

