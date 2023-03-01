#pragma once
#include "CoreMinimal.h"
#include "ClothConfigCommon.h"
#include "ClothSharedConfigCommon.generated.h"

UCLASS(Abstract, Blueprintable)
class CLOTHINGSYSTEMRUNTIMECOMMON_API UClothSharedConfigCommon : public UClothConfigCommon {
    GENERATED_BODY()
public:
    UClothSharedConfigCommon();
};

