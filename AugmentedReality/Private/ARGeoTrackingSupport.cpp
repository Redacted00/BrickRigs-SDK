#include "ARGeoTrackingSupport.h"

class UARGeoTrackingSupport;

UARGeoTrackingSupport* UARGeoTrackingSupport::GetGeoTrackingSupport() {
    return NULL;
}

EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason() const {
    return EARGeoTrackingStateReason::None;
}

EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState() const {
    return EARGeoTrackingState::Initializing;
}

EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy() const {
    return EARGeoTrackingAccuracy::Undetermined;
}

bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const FString& OptionalAnchorName) {
    return false;
}

bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, const FString& OptionalAnchorName) {
    return false;
}

UARGeoTrackingSupport::UARGeoTrackingSupport() {
}

