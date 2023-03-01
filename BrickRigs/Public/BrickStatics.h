#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Templates/SubclassOf.h"
#include "BrickStatics.generated.h"

class AActor;
class APawn;
class UExplosiveMaterial;
class UObject;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBrickStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBrickStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SpreadFire(UObject* WorldContextObject, const FTransform& Transform, const FVector& BoundsMin, const FVector& BoundsMax, float SpreadDistance, float SpreadProbability);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnExplosion(UObject* WorldContextObject, TSubclassOf<UExplosiveMaterial> ExplosiveMaterial, float Volume, const FVector& Location, const FRotator& Rotation, APawn* Instigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static bool SetActorOnFire(const FHitResult& Hit, APawn* Instigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static bool ExtinguishActor(const FHitResult& Hit);
    
};

