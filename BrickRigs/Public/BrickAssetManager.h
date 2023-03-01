#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManager -FallbackName=AssetManager
#include "BrickAssetManager.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UBrickAssetManager();
};

