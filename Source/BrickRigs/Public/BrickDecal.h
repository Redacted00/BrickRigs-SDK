#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EBrickDecalShape.h"
#include "ObjectPropertyItemInterface.h"
#include "BrickDecal.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickDecal : public UObject, public IObjectPropertyItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickDecalShape Shape;
    
    UBrickDecal();
    
    // Fix for true pure virtual functions not being implemented
};

