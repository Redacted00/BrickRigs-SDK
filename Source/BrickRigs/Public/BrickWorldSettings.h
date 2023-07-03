#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/WorldSettings.h"
#include "Templates/SubclassOf.h"
#include "TrainSpawnInfo.h"
#include "TrainTrack.h"
#include "BrickWorldSettings.generated.h"

class ABrickWorldSettings;
class ACapturePoint;
class ADefaultPhysicsVolume;
class APhysicsVolume;
class ATrain;
class AWorldSetupActor;
class UObject;
class UProjectileManagerComponent;

UCLASS(Blueprintable)
class BRICKRIGS_API ABrickWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldSetupActor* WorldSetupActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APhysicsVolume* DefaultWaterPhysicsVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATrain*> SpawnedTrains;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACapturePoint*> CapturePoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProjectileManagerComponent* ProjectileManager;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADefaultPhysicsVolume> DefaultWaterPhysicsVolumeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox WaterBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeaLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrainTrack> TrainTracks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrainSpawnInfo> TrainSpawnInfos;
    
public:
    ABrickWorldSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABrickWorldSettings* GetWorldSettings(UObject* WorldContextObject);
    
};

