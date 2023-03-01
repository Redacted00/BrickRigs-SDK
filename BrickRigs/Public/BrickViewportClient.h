#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "BrickViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UBrickViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UBrickViewportClient();
};

