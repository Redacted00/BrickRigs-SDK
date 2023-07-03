#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Blueprint/UserWidget.h"
#include "ScoreboardTeamWidget.generated.h"

class UBrickTeam;
class UBrickTextBlock;
class UGridPanel;
class UScoreboardPlayerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UScoreboardTeamWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBrickTeam* BrickTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScoreboardPlayerWidget*> PlayerWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* TeamNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* ScoreTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* PlayersPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayersPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SortPlayersDelay;
    
public:
    UScoreboardTeamWidget();
protected:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanJoinTeam(bool bCanJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanEverJoinTeam(bool bCanJoin);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinTeam();
    
};

