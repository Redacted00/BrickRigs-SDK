#include "NiagaraComponent.h"

class AActor;
class UMaterialInterface;
class UNiagaraDataInterface;
class UNiagaraSystem;
class UObject;
class UTextureRenderTarget;

void UNiagaraComponent::SetVariableVec4(FName InVariableName, const FVector4& InValue) {
}

void UNiagaraComponent::SetVariableVec3(FName InVariableName, FVector InValue) {
}

void UNiagaraComponent::SetVariableVec2(FName InVariableName, FVector2D InValue) {
}

void UNiagaraComponent::SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget) {
}

void UNiagaraComponent::SetVariableQuat(FName InVariableName, const FQuat& InValue) {
}

void UNiagaraComponent::SetVariableObject(FName InVariableName, UObject* Object) {
}

void UNiagaraComponent::SetVariableMaterial(FName InVariableName, UMaterialInterface* Object) {
}

void UNiagaraComponent::SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue) {
}

void UNiagaraComponent::SetVariableInt(FName InVariableName, int32 InValue) {
}

void UNiagaraComponent::SetVariableFloat(FName InVariableName, float InValue) {
}

void UNiagaraComponent::SetVariableBool(FName InVariableName, bool InValue) {
}

void UNiagaraComponent::SetVariableActor(FName InVariableName, AActor* Actor) {
}

void UNiagaraComponent::SetTickBehavior(ENiagaraTickBehavior NewTickBehavior) {
}

void UNiagaraComponent::SetSeekDelta(float InSeekDelta) {
}

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled) {
}

void UNiagaraComponent::SetRandomSeedOffset(int32 NewRandomSeedOffset) {
}

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance) {
}

void UNiagaraComponent::SetPaused(bool bInPaused) {
}

void UNiagaraComponent::SetNiagaraVariableVec4(const FString& InVariableName, const FVector4& InValue) {
}

void UNiagaraComponent::SetNiagaraVariableVec3(const FString& InVariableName, FVector InValue) {
}

void UNiagaraComponent::SetNiagaraVariableVec2(const FString& InVariableName, FVector2D InValue) {
}

void UNiagaraComponent::SetNiagaraVariableQuat(const FString& InVariableName, const FQuat& InValue) {
}

void UNiagaraComponent::SetNiagaraVariableObject(const FString& InVariableName, UObject* Object) {
}

void UNiagaraComponent::SetNiagaraVariableLinearColor(const FString& InVariableName, const FLinearColor& InValue) {
}

void UNiagaraComponent::SetNiagaraVariableInt(const FString& InVariableName, int32 InValue) {
}

void UNiagaraComponent::SetNiagaraVariableFloat(const FString& InVariableName, float InValue) {
}

void UNiagaraComponent::SetNiagaraVariableBool(const FString& InVariableName, bool InValue) {
}

void UNiagaraComponent::SetNiagaraVariableActor(const FString& InVariableName, AActor* Actor) {
}

void UNiagaraComponent::SetMaxSimTime(float InMaxTime) {
}

void UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock) {
}

void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug) {
}

void UNiagaraComponent::SetForceSolo(bool bInForceSolo) {
}

void UNiagaraComponent::SetDesiredAge(float InDesiredAge) {
}

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking) {
}

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy) {
}

void UNiagaraComponent::SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters) {
}

void UNiagaraComponent::SetAllowScalability(bool bAllow) {
}

void UNiagaraComponent::SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode) {
}

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge) {
}

void UNiagaraComponent::ResetSystem() {
}

void UNiagaraComponent::ReinitializeSystem() {
}

bool UNiagaraComponent::IsPaused() const {
    return false;
}

void UNiagaraComponent::InitForPerformanceBaseline() {
}

ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior() const {
    return ENiagaraTickBehavior::UsePrereqs;
}

float UNiagaraComponent::GetSeekDelta() const {
    return 0.0f;
}

int32 UNiagaraComponent::GetRandomSeedOffset() const {
    return 0;
}

bool UNiagaraComponent::GetPreviewLODDistanceEnabled() const {
    return false;
}

float UNiagaraComponent::GetPreviewLODDistance() const {
    return 0.0f;
}

TArray<FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const FString& InEmitterName, const FString& InValueName) {
    return TArray<FVector>();
}

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const FString& InEmitterName, const FString& InValueName) {
    return TArray<float>();
}

TArray<FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const FString& InEmitterName) {
    return TArray<FVector>();
}

float UNiagaraComponent::GetMaxSimTime() const {
    return 0.0f;
}

bool UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta() const {
    return false;
}

bool UNiagaraComponent::GetForceSolo() const {
    return false;
}

float UNiagaraComponent::GetDesiredAge() const {
    return 0.0f;
}

UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const FString& Name) {
    return NULL;
}

UNiagaraSystem* UNiagaraComponent::GetAsset() const {
    return NULL;
}

ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode() const {
    return ENiagaraAgeUpdateMode::TickDeltaTime;
}

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds) {
}

void UNiagaraComponent::AdvanceSimulation(int32 TickCount, float TickDeltaSeconds) {
}

UNiagaraComponent::UNiagaraComponent() {
    this->Asset = NULL;
    this->TickBehavior = ENiagaraTickBehavior::UsePrereqs;
    this->RandomSeedOffset = 0;
    this->bForceSolo = false;
    this->bEnableGpuComputeDebug = false;
    this->bAutoDestroy = false;
    this->bRenderingEnabled = true;
    this->bAutoManageAttachment = false;
    this->bAutoAttachWeldSimulatedBodies = false;
    this->MaxTimeBeforeForceUpdateTransform = 5.00f;
    this->AutoAttachLocationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachRotationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachScaleRule = EAttachmentRule::KeepRelative;
}

