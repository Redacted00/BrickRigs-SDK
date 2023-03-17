#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "BrickColor.h"
#include "NameplateBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UNameplateBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FontSize;
    
public:
    UNameplateBrick();
};

