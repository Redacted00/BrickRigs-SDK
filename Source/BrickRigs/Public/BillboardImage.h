#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BillboardImage.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class BRICKRIGS_API UBillboardImage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UBillboardImage();
};

