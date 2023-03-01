#include "ARGeoAnchor.h"

float UARGeoAnchor::GetLongitude() const {
    return 0.0f;
}

float UARGeoAnchor::GetLatitude() const {
    return 0.0f;
}

EARAltitudeSource UARGeoAnchor::GetAltitudeSource() const {
    return EARAltitudeSource::Precise;
}

float UARGeoAnchor::GetAltitudeMeters() const {
    return 0.0f;
}

UARGeoAnchor::UARGeoAnchor() {
}

