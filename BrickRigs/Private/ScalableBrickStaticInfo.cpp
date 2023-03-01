#include "ScalableBrickStaticInfo.h"
#include "BrickConnectorsISMComponent.h"

UScalableBrickStaticInfo::UScalableBrickStaticInfo() {
    this->ScalableLiftSurfaceRadiiYZ[0] = 0.00f;
    this->ScalableLiftSurfaceRadiiYZ[1] = 0.00f;
    this->ScalableShape = EScalableBrickShape::Box;
    this->ConnectorsISMComponentClass = UBrickConnectorsISMComponent::StaticClass();
}

