#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TeamScoreWidget.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UTeamScoreWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTeamScoreWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamIcon(UTexture2D* NewIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamAttitude(TEnumAsByte<ETeamAttitude::Type> NewTeamAttitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScore(int32 NewScore, int32 NewMaxScore);
    
};

