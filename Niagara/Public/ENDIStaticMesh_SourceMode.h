#pragma once
#include "CoreMinimal.h"
#include "ENDIStaticMesh_SourceMode.generated.h"

UENUM(BlueprintType)
enum class ENDIStaticMesh_SourceMode : uint8 {
    Default,
    Source,
    AttachParent,
    DefaultMeshOnly,
    ENDIStaticMesh_MAX UMETA(Hidden),
};

