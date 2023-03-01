#include "HeadMountedDisplayFunctionLibrary.h"

class UObject;
class UTexture;

void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(const FTransform& ExternalTrackingTransform) {
}

void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(const FName& ActionName, const FXRTimedInputActionDelegate& InDelegate) {
}

void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(const FXRDeviceOnDisconnectDelegate& InDisconnectedDelegate) {
}

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(UObject* WorldContext, float NewScale) {
}

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin::Type> Origin) {
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(UTexture* InTexture) {
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha) {
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode Mode) {
}

void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far) {
}

void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector::Type> Options) {
}

bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable() {
    return false;
}

bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode() {
    return false;
}

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled() {
    return false;
}

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected() {
    return false;
}

bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(const FXRDeviceId& XRDeviceId) {
    return false;
}

bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition() {
    return false;
}

int32 UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags() {
    return 0;
}

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(UObject* WorldContext) {
    return 0.0f;
}

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool& bUseFocus, bool& bHasFocus) {
}

FString UHeadMountedDisplayFunctionLibrary::GetVersionString() {
    return TEXT("");
}

FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(UObject* WorldContext) {
    return FTransform{};
}

void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index) {
}

TEnumAsByte<EHMDTrackingOrigin::Type> UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin() {
    return EHMDTrackingOrigin::Floor;
}

float UHeadMountedDisplayFunctionLibrary::GetScreenPercentage() {
    return 0.0f;
}

void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane) {
}

FVector2D UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(TEnumAsByte<EHMDTrackingOrigin::Type> Origin) {
    return FVector2D{};
}

float UHeadMountedDisplayFunctionLibrary::GetPixelDensity() {
    return 0.0f;
}

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition) {
}

int32 UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors() {
    return 0;
}

void UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(UObject* WorldContext, const EControllerHand Hand, FXRMotionControllerData& MotionControllerData) {
}

TEnumAsByte<EHMDWornState::Type> UHeadMountedDisplayFunctionLibrary::GetHMDWornState() {
    return EHMDWornState::Unknown;
}

FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName() {
    return NAME_None;
}

void UHeadMountedDisplayFunctionLibrary::GetHMDData(UObject* WorldContext, FXRHMDData& HMDData) {
}

void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position) {
}

void UHeadMountedDisplayFunctionLibrary::GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position) {
}

bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(UObject* WorldContext, const int32 ControllerIndex, const FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec) {
    return false;
}

TArray<FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(const FName SystemId, EXRTrackedDeviceType DeviceType) {
    return TArray<FXRDeviceId>();
}

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable) {
}

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable) {
    return false;
}

void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice() {
}

TEnumAsByte<EXRDeviceConnectionResult::Type> UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(const FString& IpAddress, const int32 BitRate) {
    return EXRDeviceConnectionResult::NoTrackingSystem;
}

bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(const FXRGestureConfig& GestureConfig) {
    return false;
}

void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(const FName& ActionPath) {
}

void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(const FTransform& ExternalTrackingTransform) {
}

void UHeadMountedDisplayFunctionLibrary::BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& Hand, FName& MotionSource, FString& Indentifier, FString& Component) {
}

UHeadMountedDisplayFunctionLibrary::UHeadMountedDisplayFunctionLibrary() {
}

