#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "EHUDVisibility.h"
#include "HUDIconCanvasWidget.h"
#include "Templates/SubclassOf.h"
#include "PlayerWidget.generated.h"

class ABaseCharacter;
class ABrickVehicle;
class UCameraBrickWidget;
class UCrosshairWidget;
class UCurrentItemWidget;
class UDashboardWidget;
class UHealthBarWidget;
class UHurtMarkerWidget;
class URestrictedAreaWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPlayerWidget : public UHUDIconCanvasWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCurrentItemWidget* CurrentItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthBarWidget* HealthBarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrosshairWidget* CrosshairWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHurtMarkerWidget*> HurtMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URestrictedAreaWidget* RestrictedAreaWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDashboardWidget* DashboardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraBrickWidget* CameraBrickWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCameraBrickWidget*> UnusedCameraBrickWidgets;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval IconScaleDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCurrentItemWidget> CurrentItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentItemFadeOutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHealthBarWidget> HealthBarWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrosshairWidget> CrosshairWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHurtMarkerWidget> HurtMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumHurtMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URestrictedAreaWidget> RestrictedAreaWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDashboardWidget> DashboardWidgetClass;
    
public:
    UPlayerWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(EHUDVisibility NewVisibility);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddRestrictedAreaWidget(URestrictedAreaWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHealthBarWidget(UHealthBarWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddDashboardWidget(UDashboardWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCurrentItemWidget(UCurrentItemWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCrosshairWidget(UCrosshairWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCameraBrickWidget(UCameraBrickWidget* InWidget);
    
};

