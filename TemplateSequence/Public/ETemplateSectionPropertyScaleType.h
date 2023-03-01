#pragma once
#include "CoreMinimal.h"
#include "ETemplateSectionPropertyScaleType.generated.h"

UENUM()
enum class ETemplateSectionPropertyScaleType : int32 {
    FloatProperty,
    TransformPropertyLocationOnly,
    TransformPropertyRotationOnly,
};

