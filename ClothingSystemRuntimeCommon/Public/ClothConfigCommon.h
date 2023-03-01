#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothConfigBase -FallbackName=ClothConfigBase
#include "ClothConfigCommon.generated.h"

UCLASS(Abstract, Blueprintable)
class CLOTHINGSYSTEMRUNTIMECOMMON_API UClothConfigCommon : public UClothConfigBase {
    GENERATED_BODY()
public:
    UClothConfigCommon();
};

