#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "Firearm.generated.h"

class UFirearmComponent;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AFirearm : public AInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFirearmComponent* FirearmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ShellPSC;
    
public:
    AFirearm();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnReloaded();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnReleasedBolt();
    
};

