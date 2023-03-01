#pragma once
#include "CoreMinimal.h"
#include "BrickEditorStaticMeshComponent.h"
#include "BrickStaticMeshComponent.generated.h"

class UBodySetup;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickStaticMeshComponent : public UBrickEditorStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* CustomBodySetup;
    
public:
    UBrickStaticMeshComponent();
};

