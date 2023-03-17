#pragma once
#include "CoreMinimal.h"
#include "HUDIconWidget.h"
#include "PawnIconWidget.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPawnIconWidget : public UHUDIconWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* OwningPawn;
    
public:
    UPawnIconWidget();
};

