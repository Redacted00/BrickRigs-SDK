#pragma once
#include "CoreMinimal.h"
#include "EWaveFunctionType.generated.h"

UENUM(BlueprintType)
enum EWaveFunctionType {
    Field_Wave_Cosine,
    Field_Wave_Gaussian,
    Field_Wave_Falloff,
    Field_Wave_Decay,
    Field_Wave_Max,
};

