#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ExpandableArea -FallbackName=ExpandableArea
#include "BrickExpandableArea.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickExpandableArea : public UExpandableArea {
    GENERATED_BODY()
public:
    UBrickExpandableArea();
};

