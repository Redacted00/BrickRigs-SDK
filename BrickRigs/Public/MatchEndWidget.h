#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HUDWidgetInterface.h"
#include "MatchEndWidget.generated.h"

class UBrickTeam;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMatchEndWidget : public UUserWidget, public IHUDWidgetInterface {
    GENERATED_BODY()
public:
    UMatchEndWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMatchWinner(UBrickTeam* WinnerTeam, TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateContinueButton(int32 TimeRemaining, bool bIsHost);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedContinue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetWidgetToFocus() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

