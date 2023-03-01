#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
#include "EARAltitudeSource.h"
#include "ARGeoAnchor.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARGeoAnchor : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UARGeoAnchor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLongitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLatitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARAltitudeSource GetAltitudeSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAltitudeMeters() const;
    
};

