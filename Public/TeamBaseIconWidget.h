#pragma once
#include "CoreMinimal.h"
#include "HUDIconWidget.h"
#include "TeamBaseIconWidget.generated.h"

class ATeamBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UTeamBaseIconWidget : public UHUDIconWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATeamBase* TeamBase;
    
public:
    UTeamBaseIconWidget();
};

