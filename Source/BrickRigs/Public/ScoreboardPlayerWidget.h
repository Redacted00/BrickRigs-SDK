#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Blueprint/UserWidget.h"
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
    

public:
    void UpdateButtonStyle_Implementation(bool bNewSelected, bool bIsLocalPlayer, TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

