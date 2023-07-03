#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "LegacyBrickMaterialReplacement.generated.h"

class UBrickMaterial;
class UBrickPattern;

USTRUCT(BlueprintType)
struct FLegacyBrickMaterialReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrickMaterial* BrickMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBrickPattern> Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    BRICKRIGS_API FLegacyBrickMaterialReplacement();
};

