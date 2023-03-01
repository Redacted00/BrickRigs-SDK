#include "ConnectorField.h"

FConnectorField::FConnectorField() {
    this->Type = EConnectorType::None;
    this->Gender = EConnectorGender::Male;
    this->Direction = EConnectorDirection::X;
    this->NumX = 0;
    this->NumY = 0;
    this->Spacing = EConnectorSpacing::None;
    this->Shape = EConnectorShape::Rectangle;
}

