#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ObjectPropertyItemInterface.h"
#include "BrickPattern.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickPattern : public UObject, public IObjectPropertyItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tiling;
    
    UBrickPattern();
    
    // Fix for true pure virtual functions not being implemented
};

