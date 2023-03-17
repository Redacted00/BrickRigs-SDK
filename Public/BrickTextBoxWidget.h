#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBrickUIBrushStyle.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUITextStyle.h"
#include "EValueChangedEventType.h"
#include "BrickTextBoxWidget.generated.h"

class UBrickButtonWidget;
class UBrickMultiLineTextBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickTextBoxWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTextBoxChanged, const FText&, NewText, EValueChangedEventType, EventType);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickMultiLineTextBox* MultiLineTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* ShowPasswordButton;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextBoxChanged OnTextChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTextLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultiLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPassword;
    
    UBrickTextBoxWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePasswordVisible(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsPassword(bool bNewIsPassword);
    
public:
    UFUNCTION(BlueprintCallable)
    void TogglePasswordVisible();
    
    UFUNCTION(BlueprintCallable)
    void StartTyping(bool bSelectAllText);
    
    UFUNCTION(BlueprintCallable)
    void SetTextStyle(EBrickUITextStyle InTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText, bool bValidateText);
    
    UFUNCTION(BlueprintCallable)
    void SetPasswordVisible(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxTextLength(int32 InMaxLength);
    
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> NewJustification);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool bNewReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPassword(bool bNewIsPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle InColorStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushStyle(EBrickUIBrushStyle InBrushStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowMultiLine(bool bInAllowMultiLine);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnTextChanged(const FText& NewText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTyping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPasswordVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
};

