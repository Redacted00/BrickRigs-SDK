#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WaterBrushActorInterface.h"
#include "WaterBodyIsland.generated.h"

class UWaterSplineComponent;

UCLASS(Blueprintable)
class WATER_API AWaterBodyIsland : public AActor, public IWaterBrushActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterSplineComponent* SplineComp;
    
public:
    AWaterBodyIsland();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaterSplineComponent* GetWaterSpline() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

