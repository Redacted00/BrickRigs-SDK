#include "SensorBrick.h"

USensorBrick::USensorBrick() {
    this->SensorType = ESensorType::Speed;
    this->TraceMask = EProximitySensorMask::All;
    this->bReturnToZero = false;
}

