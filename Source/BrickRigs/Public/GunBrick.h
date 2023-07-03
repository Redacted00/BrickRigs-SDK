#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "VehicleInputChannel.h"
#include "GunBrick.generated.h"

class UFirearmComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class BRICKRIGS_API UGunBrick : public UBrick {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFirearmComponent* FirearmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShellEmitterPtr;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
public:
    UGunBrick();
};

