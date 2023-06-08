#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ECameraMode.h"
#include "EFreeCamMode.h"
#include "EHUDVisibility.h"
#include "Templates/SubclassOf.h"
#include "GameOverlayWidget.generated.h"

class ABrickEditor;
class ABrickVehicle;
class ASpectatorPawn;
class UChatWidget;
class UHUDNotificationWidget;
class UInputHelpWidget;
class UMatchStateWidget;
class UMatchTimerWidget;
class UPingIndicatorWidget;
class UTeamScoreWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UGameOverlayWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChatWidget* ChatWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputHelpWidget* InputHelpWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMatchTimerWidget* MatchTimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMatchStateWidget* MatchStateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTeamScoreWidget*> TeamScoreWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHUDNotificationWidget*> HUDNotificationWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASpectatorPawn* SpectatorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickVehicle* ViewedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickEditor* BrickEditor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPingIndicatorWidget* HighPingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputHelpWidget> InputHelpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDNotificationWidget> HUDNotificationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatchTimerWidget> MatchTimerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatchStateWidget> MatchStateWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTeamScoreWidget> TeamScoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UChatWidget> ChatWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimalHUDMaxMatchTimerRemaining;
    
public:
    UGameOverlayWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVehicleDownloadNotification(UHUDNotificationWidget* Widget, const FText& VehicleDisplayName, bool bIsDownloading, float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVehicleCameraNotification(UHUDNotificationWidget* Widget, const FText& CameraDisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateThumbnailNotification(UHUDNotificationWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSlomoNotification(UHUDNotificationWidget* Widget, float SlomoSpeed, bool bInvertSpeed, bool bSlomoEnabled, bool bIsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSaveNotification(UHUDNotificationWidget* Widget, bool bSuccess, bool bIsAutoSave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRestartFailedNotification(UHUDNotificationWidget* Widget, const FText& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRespawnDelayNotification(UHUDNotificationWidget* Widget, float Remaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateProjectileCameraNotification(UHUDNotificationWidget* Widget, bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMoneyNotification(UHUDNotificationWidget* Widget, float NewAmount, float AmountAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHUDVisibilityNotification(UHUDNotificationWidget* Widget, EHUDVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFreeCamNotification(UHUDNotificationWidget* Widget, EFreeCamMode InFreeCamMode, bool bIsFixedCam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCameraZoomNotification(UHUDNotificationWidget* Widget, float NewZoomRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCameraSpeedNotification(UHUDNotificationWidget* Widget, float NewSpeedRatio, float NewMaxSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCameraModeNotification(UHUDNotificationWidget* Widget, ECameraMode NewMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(EHUDVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraModeChanged(ECameraMode NewMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddTeamScoreWidget(UTeamScoreWidget* Widget, TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMatchTimerWidget(UMatchTimerWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMatchStateWidget(UMatchStateWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddInputHelpWidget(UInputHelpWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHUDNotification(UHUDNotificationWidget* Widget, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddChatWidget(UChatWidget* Widget);
    
};

