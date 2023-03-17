#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BrickBuilding.h"
#include "HUDIconProperties.h"
#include "SpawnPointInterface.h"
#include "Garage.generated.h"

class ABrickPlayerController;
class UHUDIconComponent;
class UInteractionComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AGarage : public ABrickBuilding, public ISpawnPointInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDIconComponent* HUDIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PlayerSpawnPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDIconProperties HUDIconProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VehicleSpawnExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VehicleSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator VehicleSpawnRotation;
    
public:
    AGarage();
private:
    UFUNCTION(BlueprintCallable)
    void Interact_SpawnVehicle(ABrickPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void Interact_Inventory(ABrickPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void Interact_EnterEditor(ABrickPlayerController* PC);
    
    
    // Fix for true pure virtual functions not being implemented
};

