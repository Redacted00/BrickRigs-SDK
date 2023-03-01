#pragma once
#include "CoreMinimal.h"
#include "DeathmatchGameMode.h"
#include "ConquestGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API AConquestGameMode : public ADeathmatchGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateCapturePointsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoldCapturePointTeamScore;
    
public:
    AConquestGameMode();
};

