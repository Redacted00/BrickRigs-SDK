#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "BrickAssetManager.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UBrickAssetManager();
};

