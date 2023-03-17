#pragma once
#include "CoreMinimal.h"
#include "ECharacterStateOfHealth.h"
#include "PawnIconWidget.h"
#include "PlayerIconWidget.generated.h"

class ABaseCharacter;
class ABrickPlayerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPlayerIconWidget : public UPawnIconWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickPlayerState* CharacterPlayerState;
    
public:
    UPlayerIconWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerIcon(bool bNewIsLocalPlayer, bool bNewIsTeamLeader, ECharacterStateOfHealth NewStateOfHealth, bool bNewCanBeDamaged);
    
};

