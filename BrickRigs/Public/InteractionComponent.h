#pragma once
#include "CoreMinimal.h"
#include "EBrickUIColorStyle.h"
#include "HUDIconComponent.h"
#include "InteractionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UInteractionComponent : public UHUDIconComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UInteractionComponent();
};

