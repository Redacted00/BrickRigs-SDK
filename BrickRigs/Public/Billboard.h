#pragma once
#include "CoreMinimal.h"
#include "StaticMeshProp.h"
#include "Billboard.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ABillboard : public AStaticMeshProp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BillboardRandSeed;
    
public:
    ABillboard();
};

