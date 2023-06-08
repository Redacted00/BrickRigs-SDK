#include "BrickStatics.h"
#include "Templates/SubclassOf.h"

bool UBrickStatics::SpreadFire(UObject* WorldContextObject, const FTransform& Transform, const FVector& BoundsMin, const FVector& BoundsMax, float SpreadDistance, float SpreadProbability) {
    return false;
}

void UBrickStatics::SpawnExplosion(UObject* WorldContextObject, TSubclassOf<UExplosiveMaterial> ExplosiveMaterial, float Volume, const FVector& Location, const FRotator& Rotation, APawn* Instigator, AActor* DamageCauser) {
}

bool UBrickStatics::SetActorOnFire(const FHitResult& Hit, APawn* Instigator, AActor* DamageCauser) {
    return false;
}

bool UBrickStatics::ExtinguishActor(const FHitResult& Hit) {
    return false;
}

UBrickStatics::UBrickStatics() {
}

