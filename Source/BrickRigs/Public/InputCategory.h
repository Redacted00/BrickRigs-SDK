#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DisplayInfo.h"
#include "ObjectPropertyItemInterface.h"
#include "InputCategory.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UInputCategory : public UObject, public IObjectPropertyItemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayInfo DisplayInfo;
    
public:
    UInputCategory();
    
    // Fix for true pure virtual functions not being implemented
};

