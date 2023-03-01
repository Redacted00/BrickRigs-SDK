#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PhysicalMaterialPropertyBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, Deprecated, EditInlineNew, MinimalAPI, NotPlaceable)
class UDEPRECATED_PhysicalMaterialPropertyBase : public UObject {
    GENERATED_BODY()
public:
    UDEPRECATED_PhysicalMaterialPropertyBase();
};

