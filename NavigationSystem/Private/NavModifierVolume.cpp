#include "NavModifierVolume.h"
#include "NavArea_Null.h"
#include "Templates/SubclassOf.h"

class UNavArea;

void ANavModifierVolume::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}

ANavModifierVolume::ANavModifierVolume() {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bMaskFillCollisionUnderneathForNavmesh = false;
}

