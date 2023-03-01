#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
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

