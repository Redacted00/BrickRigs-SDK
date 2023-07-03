#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "SpawnArea.h"
#include "TeamBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ATeamBase : public ASpawnArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    ATeamBase();
};

