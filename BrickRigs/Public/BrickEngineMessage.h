#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineMessage -FallbackName=EngineMessage
#include "BrickEngineMessage.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickEngineMessage : public UEngineMessage {
    GENERATED_BODY()
public:
    UBrickEngineMessage();
};

