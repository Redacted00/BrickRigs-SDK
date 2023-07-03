#pragma once
#include "CoreMinimal.h"
#include "BrickUIIconAtlas.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBrickUIIconAtlas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    BRICKRIGS_API FBrickUIIconAtlas();
};

