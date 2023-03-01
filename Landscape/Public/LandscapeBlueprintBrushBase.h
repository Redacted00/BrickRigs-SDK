#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LandscapeBlueprintBrushBase.generated.h"

class UObject;
class UTextureRenderTarget2D;

UCLASS(Abstract, Blueprintable)
class LANDSCAPE_API ALandscapeBlueprintBrushBase : public AActor {
    GENERATED_BODY()
public:
    ALandscapeBlueprintBrushBase();
    UFUNCTION(BlueprintCallable)
    void RequestLandscapeUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTextureRenderTarget2D* Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);
    
};

