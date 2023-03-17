#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BrickEditorMode.h"
#include "BrickEditorMoveMode.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickEditorMoveMode : public UBrickEditorMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector EffectiveMoveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator EffectiveMoveRotation;
    
public:
    UBrickEditorMoveMode();
};

