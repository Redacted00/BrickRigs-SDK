#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
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

