#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibility.h"
#include "HUDIconProperties.generated.h"

class UHUDIconWidget;

USTRUCT(BlueprintType)
struct FHUDIconProperties {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHUDIconWidget> IconWidgetClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VisibilityFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDVisibility MaxHUDVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDrawDist;
    
    BRICKRIGS_API FHUDIconProperties();
};

