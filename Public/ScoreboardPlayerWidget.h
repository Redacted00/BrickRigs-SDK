#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ScoreboardPlayerWidget.generated.h"

class ABrickPlayerState;
class UBrickButtonWidget;
class UBrickTextBlock;
class UPingIndicatorWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UScoreboardPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickPlayerState* PlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* PositionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* KillsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* DeathsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* ScoreTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPingIndicatorWidget* PingIndicator;
    
public:
    UScoreboardPlayerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsAlive(bool bIsAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsAdmin(bool bIsAdmin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateButtonStyle(bool bNewSelected, bool bIsLocalPlayer, TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

