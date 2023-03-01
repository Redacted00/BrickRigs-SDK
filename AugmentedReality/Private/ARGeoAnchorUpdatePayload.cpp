#include "ARGeoAnchorUpdatePayload.h"

FARGeoAnchorUpdatePayload::FARGeoAnchorUpdatePayload() {
    this->Longitude = 0.00f;
    this->Latitude = 0.00f;
    this->AltitudeMeters = 0.00f;
    this->AltitudeSource = EARAltitudeSource::Precise;
}

