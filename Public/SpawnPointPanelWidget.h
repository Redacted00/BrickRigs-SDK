#pragma once
#include "CoreMinimal.h"
#include "HUDIconPanelWidget.h"
#include "SpawnPointPanelWidget.generated.h"

class UGridPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API USpawnPointPanelWidget : public UHUDIconPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* GridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpawnPointsPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnPointSpacing;
    
public:
    USpawnPointPanelWidget();
};

