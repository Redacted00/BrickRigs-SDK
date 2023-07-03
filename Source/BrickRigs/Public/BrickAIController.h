#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "BrickAIController.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ABrickAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlRotationInterpSpeed;
    
public:
    ABrickAIController();
};

