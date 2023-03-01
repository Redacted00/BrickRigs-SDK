#pragma once
#include "CoreMinimal.h"
#include "EJoinSessionState.h"
#include "EValueChangedEventType.h"
#include "PopupWidget.h"
#include "JoinSessionPopupWidget.generated.h"

class UBrickTextBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UJoinSessionPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBoxWidget* PasswordTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JoiningSessionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CancellingJoinText;
    
public:
    UJoinSessionPopupWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateJoinState(EJoinSessionState InJoinState, bool bInPasswordRequired, bool bInHasPassword);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPasswordChanged(const FText& NewText, EValueChangedEventType EventType);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinSession();
    
    UFUNCTION(BlueprintCallable)
    void CancelJoinSession();
    
};

