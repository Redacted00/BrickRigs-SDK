#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "BrickViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UBrickViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UBrickViewportClient();
};

