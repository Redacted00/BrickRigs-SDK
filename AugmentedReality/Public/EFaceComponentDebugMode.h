#pragma once
#include "CoreMinimal.h"
#include "EFaceComponentDebugMode.generated.h"

UENUM(BlueprintType)
enum class EFaceComponentDebugMode : uint8 {
    None,
    ShowEyeVectors,
    ShowFaceMesh,
};

