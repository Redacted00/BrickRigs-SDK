#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StaticMeshProp.h"
#include "Templates/SubclassOf.h"
#include "LampProp.generated.h"

class ULightComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ALampProp : public AStaticMeshProp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PowerTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULightComponent* LightComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULightComponent> LightComponentClass;
    
public:
    ALampProp();
};

