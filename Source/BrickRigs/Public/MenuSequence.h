#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MenuSequenceProperties.h"
#include "MenuSequence.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AMenuSequence : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuSequenceProperties MenuSequenceProperties;
    
public:
    AMenuSequence();
};

