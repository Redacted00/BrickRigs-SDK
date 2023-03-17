#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EValueChangedEventType.h"
#include "AdminLoginWidget.generated.h"

class UBrickTextBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UAdminLoginWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBoxWidget* TextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EnterPasswordText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LoggedInText;
    
public:
    UAdminLoginWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIsAdmin(bool bNewIsAdmin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCanEverBeAdmin(bool bCanBeAdmin);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTextChanged(const FText& Text, EValueChangedEventType EventType);
    
};

