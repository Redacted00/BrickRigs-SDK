#pragma once
#include "CoreMinimal.h"
#include "EItemTag.generated.h"

UENUM(BlueprintType)
enum class EItemTag : uint8 {
    None,
    Weapon,
    Firearm,
    Attachment,
    AmmoBox,
    Explosive,
    Grenade,
    FirstAidKit,
    FireExtinguisher,
    Paint,
    Wearable,
};

