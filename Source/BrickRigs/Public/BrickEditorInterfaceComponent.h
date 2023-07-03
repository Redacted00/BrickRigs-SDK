#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BrickEditorInterfaceComponent.generated.h"

class UBrickEditorObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorInterfaceComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickEditorObject*> BrickEditorObjects;
    
public:
    UBrickEditorInterfaceComponent();
};

