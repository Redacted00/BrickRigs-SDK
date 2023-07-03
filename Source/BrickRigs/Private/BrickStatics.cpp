#include "BrickStatics.h"
#include "Templates/SubclassOf.h"

int32 UBrickStatics::WrapIndex(int32 Value, int32 Num) {
    return 0;
}

bool UBrickStatics::SpreadFire(UObject* WorldContextObject, const FTransform& Transform, const FVector& BoundsMin, const FVector& BoundsMax, float SpreadDistance, float SpreadProbability) {
    return false;
}

void UBrickStatics::SpawnExplosion(UObject* WorldContextObject, TSubclassOf<UExplosiveMaterial> ExplosiveMaterial, float Volume, const FVector& Location, const FRotator& Rotation, APawn* Instigator, AActor* DamageCauser, const TArray<UPrimitiveComponent*>& ComponentsToIgnore) {
}

bool UBrickStatics::SetActorOnFire(const FHitResult& Hit, APawn* Instigator, AActor* DamageCauser) {
    return false;
}

FString UBrickStatics::GetProjectVersion() {
    return TEXT("");
}

bool UBrickStatics::ExtinguishActor(const FHitResult& Hit) {
    return false;
}

UBrickStatics::UBrickStatics() {
}

