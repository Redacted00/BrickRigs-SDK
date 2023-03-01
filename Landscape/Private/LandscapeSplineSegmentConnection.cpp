#include "LandscapeSplineSegmentConnection.h"

FLandscapeSplineSegmentConnection::FLandscapeSplineSegmentConnection() {
    this->ControlPoint = NULL;
    this->TangentLen = 0.00f;
    this->Width = 0.00f;
    this->LayerWidthRatio = 0.00f;
    this->SideFalloff = 0.00f;
    this->LeftSideFalloffFactor = 0.00f;
    this->RightSideFalloffFactor = 0.00f;
    this->LeftSideLayerFalloffFactor = 0.00f;
    this->RightSideLayerFalloffFactor = 0.00f;
    this->EndFalloff = 0.00f;
}

