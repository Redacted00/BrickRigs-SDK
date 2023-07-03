#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "BrickStatics.generated.h"

class AActor;
class APawn;
class UExplosiveMaterial;
class UObject;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBrickStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBrickStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 WrapIndex(int32 Value, int32 Num);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SpreadFire(UObject* WorldContextObject, const FTransform& Transform, const FVector& BoundsMin, const FVector& BoundsMax, float SpreadDistance, float SpreadProbability);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnExplosion(UObject* WorldContextObject, TSubclassOf<UExplosiveMaterial> ExplosiveMaterial, float Volume, const FVector& Location, const FRotator& Rotation, APawn* Instigator, AActor* DamageCauser, const TArray<UPrimitiveComponent*>& ComponentsToIgnore);
    
    UFUNCTION(BlueprintCallable)
    static bool SetActorOnFire(const FHitResult& Hit, APawn* Instigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool ExtinguishActor(const FHitResult& Hit);
    
};

