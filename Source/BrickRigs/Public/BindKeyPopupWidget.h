#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "BindKeyPopupWidget.generated.h"

class UControlHintWidget;
class UInputChordWidget;
class UMenuButtonWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBindKeyPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UControlHintWidget* ClearKeyControlHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputChordWidget* InputChordWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* ConfirmButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* RetryButton;
    
public:
    UBindKeyPopupWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsBindingKey(bool bNewIsBinding);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateConflictedMappings(bool bIsConflicted, const TArray<FText>& ConflictedMappingNames);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedRetry();
    
};

