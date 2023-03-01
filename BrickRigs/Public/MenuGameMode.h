#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "MenuGameMode.generated.h"

class AMenuSequence;

UCLASS(Abstract, Blueprintable, NonTransient)
class BRICKRIGS_API AMenuGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* MenuSequenceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMenuSequence* MenuSequence;
    
public:
    AMenuGameMode();
};

