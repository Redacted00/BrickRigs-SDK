#include "ARBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UARCandidateImage;
class UAREnvironmentCaptureProbe;
class UARLightEstimate;
class UARPin;
class UARPlaneGeometry;
class UARSessionConfig;
class UARTexture;
class UARTextureCameraDepth;
class UARTextureCameraImage;
class UARTrackedGeometry;
class UARTrackedImage;
class UARTrackedPoint;
class UARTrackedPose;
class UObject;
class USceneComponent;
class UTexture2D;

void UARBlueprintLibrary::UnpinComponent(USceneComponent* ComponentToUnpin) {
}

bool UARBlueprintLibrary::ToggleARCapture(const bool bOnOff, const EARCaptureType CaptureType) {
    return false;
}

void UARBlueprintLibrary::StopARSession() {
}

void UARBlueprintLibrary::StartARSession(UARSessionConfig* SessionConfig) {
}

void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff) {
}

void UARBlueprintLibrary::SetARWorldScale(float InWorldScale) {
}

void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection) {
}

void UARBlueprintLibrary::SetAlignmentTransform(const FTransform& InAlignmentTransform) {
}

bool UARBlueprintLibrary::SaveARPinToLocalStore(FName InSaveName, UARPin* InPin) {
    return false;
}

FIntPoint UARBlueprintLibrary::ResizeXRCamera(const FIntPoint& InSize) {
    return FIntPoint{};
}

void UARBlueprintLibrary::RemovePin(UARPin* PinToRemove) {
}

void UARBlueprintLibrary::RemoveARPinFromLocalStore(FName InSaveName) {
}

void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore() {
}

UARPin* UARBlueprintLibrary::PinComponentToTraceResult(USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName) {
    return NULL;
}

bool UARBlueprintLibrary::PinComponentToARPin(USceneComponent* ComponentToPin, UARPin* Pin) {
    return false;
}

UARPin* UARBlueprintLibrary::PinComponent(USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, const FName DebugName) {
    return NULL;
}

void UARBlueprintLibrary::PauseARSession() {
}

TMap<FName, UARPin*> UARBlueprintLibrary::LoadARPinsFromLocalStore() {
    return TMap<FName, UARPin*>();
}

TArray<FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    return TArray<FARTraceResult>();
}

TArray<FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    return TArray<FARTraceResult>();
}

bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType) {
    return false;
}

bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature) {
    return false;
}

bool UARBlueprintLibrary::IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod) {
    return false;
}

bool UARBlueprintLibrary::IsARSupported() {
    return false;
}

bool UARBlueprintLibrary::IsARPinLocalStoreSupported() {
    return false;
}

bool UARBlueprintLibrary::IsARPinLocalStoreReady() {
    return false;
}

EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus() {
    return EARWorldMappingState::NotAvailable;
}

EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason() {
    return EARTrackingQualityReason::None;
}

EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality() {
    return EARTrackingQuality::NotTracking;
}

TArray<FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType SessionType) {
    return TArray<FARVideoFormat>();
}

UARSessionConfig* UARBlueprintLibrary::GetSessionConfig() {
    return NULL;
}

TArray<FVector> UARBlueprintLibrary::GetPointCloud() {
    return TArray<FVector>();
}

UARTexture* UARBlueprintLibrary::GetPersonSegmentationImage() {
    return NULL;
}

UARTexture* UARBlueprintLibrary::GetPersonSegmentationDepthImage() {
    return NULL;
}

bool UARBlueprintLibrary::GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff) {
    return false;
}

int32 UARBlueprintLibrary::GetNumberOfTrackedFacesSupported() {
    return 0;
}

UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate() {
    return NULL;
}

bool UARBlueprintLibrary::GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics) {
    return false;
}

UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage() {
    return NULL;
}

UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth() {
    return NULL;
}

float UARBlueprintLibrary::GetARWorldScale() {
    return 0.0f;
}

UARTexture* UARBlueprintLibrary::GetARTexture(EARTextureType TextureType) {
    return NULL;
}

FARSessionStatus UARBlueprintLibrary::GetARSessionStatus() {
    return FARSessionStatus{};
}

TArray<UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses() {
    return TArray<UARTrackedPose*>();
}

TArray<UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints() {
    return TArray<UARTrackedPoint*>();
}

TArray<UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes() {
    return TArray<UARPlaneGeometry*>();
}

TArray<UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages() {
    return TArray<UARTrackedImage*>();
}

TArray<UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes() {
    return TArray<UAREnvironmentCaptureProbe*>();
}

TArray<FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses() {
    return TArray<FARPose2D>();
}

TArray<UARPin*> UARBlueprintLibrary::GetAllPins() {
    return TArray<UARPin*>();
}

TArray<UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometriesByClass(TSubclassOf<UARTrackedGeometry> GeometryClass) {
    return TArray<UARTrackedGeometry*>();
}

TArray<UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries() {
    return TArray<UARTrackedGeometry*>();
}

FTransform UARBlueprintLibrary::GetAlignmentTransform() {
    return FTransform{};
}

TArray<UARTrackedPoint*> UARBlueprintLibrary::FindTrackedPointsByName(const FString& PointName) {
    return TArray<UARTrackedPoint*>();
}

void UARBlueprintLibrary::DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds) {
}

void UARBlueprintLibrary::DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds) {
}

void UARBlueprintLibrary::CalculateClosestIntersection(const TArray<FVector>& StartPoints, const TArray<FVector>& EndPoints, FVector& ClosestIntersection) {
}

void UARBlueprintLibrary::CalculateAlignmentTransform(const FTransform& TransformInFirstCoordinateSystem, const FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform) {
}

bool UARBlueprintLibrary::AddTrackedPointWithName(const FTransform& WorldTransform, const FString& PointName, bool bDeletePointsWithSameName) {
    return false;
}

UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth) {
    return NULL;
}

bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent) {
    return false;
}

UARBlueprintLibrary::UARBlueprintLibrary() {
}

