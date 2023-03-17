#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EValueChangedEventType.h"
#include "Templates/SubclassOf.h"
#include "ChatWidget.generated.h"

class UBrickScrollBox;
class UBrickTextBoxWidget;
class UChatMessageWidget;
class UControlHintWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UChatWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UChatMessageWidget*> ChatMessageWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickScrollBox* ChatScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UControlHintWidget* ChatContextControlHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBoxWidget* TextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatMessageSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UChatMessageWidget> ChatMessageWidgetClass;
    
public:
    UChatWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTextBoxFocused(bool bNewFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateScrollBoxVisibility(bool bNewVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTextChanged(const FText& Text, EValueChangedEventType EventType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void OnFadedOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus();
    
};

