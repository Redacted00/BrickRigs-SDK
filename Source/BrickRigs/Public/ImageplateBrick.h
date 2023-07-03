#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "BrickColor.h"
#include "ImageplateBrick.generated.h"

class UBrickDecal;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class BRICKRIGS_API UImageplateBrick : public UBrick {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ImageMID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrickDecal* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickColor ImageColor;
    
public:
    UImageplateBrick();
};

