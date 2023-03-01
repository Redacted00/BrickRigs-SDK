#pragma once
#include "CoreMinimal.h"
#include "EFieldFilterType.generated.h"

UENUM(BlueprintType)
enum EFieldFilterType {
    Field_Filter_Dynamic,
    Field_Filter_Kinematic,
    Field_Filter_Static,
    Field_Filter_All,
    Field_Filter_Max,
};

