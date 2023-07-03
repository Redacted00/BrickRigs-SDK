#pragma once
#include "CoreMinimal.h"
#include "BrickUIIconSlot.h"
#include "EBrickUIIconAtlas.h"
#include "DisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIIconAtlas IconAtlas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUIIconSlot IconSlot;
    
    BRICKRIGS_API FDisplayInfo();
};

