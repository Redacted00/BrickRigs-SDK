#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "HUDIconContainerWidget.generated.h"

class UBrickButtonWidget;
class UBrickTextBlock;
class UHUDIconWidget;
class UInteractionWidget;
class UMapCrosshairWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHUDIconContainerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDIconWidget* IconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapCrosshairWidget*> CrosshairWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* SpawnButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNameDrawDist;
    
public:
    UHUDIconContainerWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateContainerStyle(bool bNewSelected, bool bNewCanSpawn, EBrickUIColorStyle NewColorStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateButtonContentStyle(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InContentStyleState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnButtonDoubleClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddInteractionWidget(UInteractionWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddIconWidget(UHUDIconWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCrosshairWidgets(const TArray<UMapCrosshairWidget*>& Widgets);
    
};

