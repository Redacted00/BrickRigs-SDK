#pragma once
#include "CoreMinimal.h"
#include "MenuSettingsPageWidget.h"
#include "VideoSettingsPageWidget.generated.h"

class UPopupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UVideoSettingsPageWidget : public UMenuSettingsPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPopupWidget> ConfirmResolutionPopupClass;
    
public:
    UVideoSettingsPageWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateApplyButton(bool bCanApply);
    
    UFUNCTION(BlueprintCallable)
    void RevertVideoSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreVideoSettingsDirty() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyVideoSettings();
    
};

