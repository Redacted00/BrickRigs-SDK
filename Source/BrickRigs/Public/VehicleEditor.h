#pragma once
#include "CoreMinimal.h"
#include "BrickEditor.h"
#include "VehicleEditor.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AVehicleEditor : public ABrickEditor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InputChannelISMComp;
    
public:
    AVehicleEditor();
};

