#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Blueprint/UserWidget.h"
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
    void UpdateScore(int32 NewScore, int32 NewMaxScore);
    
};

