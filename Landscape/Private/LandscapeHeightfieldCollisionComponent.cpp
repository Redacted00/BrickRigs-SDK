#include "LandscapeHeightfieldCollisionComponent.h"

class ULandscapeComponent;

ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent() const {
    return NULL;
}

ULandscapeHeightfieldCollisionComponent::ULandscapeHeightfieldCollisionComponent() {
    this->SectionBaseX = 0;
    this->SectionBaseY = 0;
    this->CollisionSizeQuads = 0;
    this->CollisionScale = 0.00f;
    this->SimpleCollisionSizeQuads = 0;
}

