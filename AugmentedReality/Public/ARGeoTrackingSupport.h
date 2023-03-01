#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EARGeoTrackingAccuracy.h"
#include "EARGeoTrackingState.h"
#include "EARGeoTrackingStateReason.h"
#include "ARGeoTrackingSupport.generated.h"

class UARGeoTrackingSupport;

UCLASS(Abstract, Blueprintable)
class AUGMENTEDREALITY_API UARGeoTrackingSupport : public UObject {
    GENERATED_BODY()
public:
    UARGeoTrackingSupport();
    UFUNCTION(BlueprintCallable)
    static UARGeoTrackingSupport* GetGeoTrackingSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARGeoTrackingStateReason GetGeoTrackingStateReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARGeoTrackingState GetGeoTrackingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARGeoTrackingAccuracy GetGeoTrackingAccuracy() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const FString& OptionalAnchorName);
    
    UFUNCTION(BlueprintCallable)
    bool AddGeoAnchorAtLocation(float Longitude, float Latitude, const FString& OptionalAnchorName);
    
};

