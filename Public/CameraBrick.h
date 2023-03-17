#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "ViewTargetInterface.h"
#include "CameraBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UCameraBrick : public UBrick, public IViewTargetInterface {
    GENERATED_BODY()
public:
    UCameraBrick();
    
    // Fix for true pure virtual functions not being implemented
};

