#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "Blueprint/UserWidget.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "Templates/SubclassOf.h"
#include "InputChordWidget.generated.h"

class UInputKeyWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputChordWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputKeyWidget*> KeyWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> SpacerWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputKeyWidget> KeyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord InputChord;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUnboundKey;
    
    UInputChordWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSpacerColorStyleAndStyleState(UWidget* Widget, EBrickUIColorStyle NewColorStyle, EBrickUIStyleState NewStyleState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUnboundKey(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetInputChord(FInputChord InInputChord, bool bShowAsGamepadKey);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* CreateSpacerWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSpacerWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddKeyWidget(UInputKeyWidget* Widget);
    
};

