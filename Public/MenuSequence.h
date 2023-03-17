#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
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

