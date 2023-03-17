#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
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

