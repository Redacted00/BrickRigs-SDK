#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StreamableRenderAsset -FallbackName=StreamableRenderAsset
#include "LandscapeLODStreamingProxy.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset {
    GENERATED_BODY()
public:
    ULandscapeLODStreamingProxy();
};

