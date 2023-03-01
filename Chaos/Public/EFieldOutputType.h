#pragma once
#include "CoreMinimal.h"
#include "EFieldOutputType.generated.h"

UENUM(BlueprintType)
enum EFieldOutputType {
    Field_Output_Vector,
    Field_Output_Scalar,
    Field_Output_Integer,
    Field_Output_Max,
};

