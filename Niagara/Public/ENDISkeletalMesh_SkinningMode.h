#pragma once
#include "CoreMinimal.h"
#include "ENDISkeletalMesh_SkinningMode.generated.h"

UENUM(BlueprintType)
enum class ENDISkeletalMesh_SkinningMode : uint8 {
    Invalid = 0xFF,
    None = 0x0,
    SkinOnTheFly,
    PreSkin,
    ENDISkeletalMesh_MAX = 0x100,
};

