#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "BrickEditorObjectPtr.h"
#include "ViewTargetInterface.h"
#include "CameraBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UCameraBrick : public UBrick, public IViewTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickEditorObjectPtr OwningSeat;
    
    UCameraBrick();
    
    // Fix for true pure virtual functions not being implemented
};

