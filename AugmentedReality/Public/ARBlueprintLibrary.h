#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ARCameraIntrinsics.h"
#include "ARPose2D.h"
#include "ARSessionStatus.h"
#include "ARTraceResult.h"
#include "ARVideoFormat.h"
#include "EARCaptureType.h"
#include "EARObjectClassification.h"
#include "EARSceneReconstruction.h"
#include "EARSessionTrackingFeature.h"
#include "EARSessionType.h"
#include "EARTextureType.h"
#include "EARTrackingQuality.h"
#include "EARTrackingQualityReason.h"
#include "EARWorldMappingState.h"
#include "Templates/SubclassOf.h"
#include "ARBlueprintLibrary.generated.h"

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

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UARBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnpinComponent(USceneComponent* ComponentToUnpin);
    
    UFUNCTION(BlueprintCallable)
    static bool ToggleARCapture(const bool bOnOff, const EARCaptureType CaptureType);
    
    UFUNCTION(BlueprintCallable)
    static void StopARSession();
    
    UFUNCTION(BlueprintCallable)
    static void StartARSession(UARSessionConfig* SessionConfig);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnabledXRCamera(bool bOnOff);
    
    UFUNCTION(BlueprintCallable)
    static void SetARWorldScale(float InWorldScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
    
    UFUNCTION(BlueprintCallable)
    static void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveARPinToLocalStore(FName InSaveName, UARPin* InPin);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint ResizeXRCamera(const FIntPoint& InSize);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePin(UARPin* PinToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveARPinFromLocalStore(FName InSaveName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllARPinsFromLocalStore();
    
    UFUNCTION(BlueprintCallable)
    static UARPin* PinComponentToTraceResult(USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    
    UFUNCTION(BlueprintCallable)
    static bool PinComponentToARPin(USceneComponent* ComponentToPin, UARPin* Pin);
    
    UFUNCTION(BlueprintCallable)
    static UARPin* PinComponent(USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    
    UFUNCTION(BlueprintCallable)
    static void PauseARSession();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, UARPin*> LoadARPinsFromLocalStore();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARTraceResult> LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSessionTypeSupported(EARSessionType SessionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);
    
    UFUNCTION(BlueprintCallable)
    static bool IsARSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsARPinLocalStoreSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsARPinLocalStoreReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EARWorldMappingState GetWorldMappingStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EARTrackingQualityReason GetTrackingQualityReason();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EARTrackingQuality GetTrackingQuality();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UARSessionConfig* GetSessionConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetPointCloud();
    
    UFUNCTION(BlueprintCallable)
    static UARTexture* GetPersonSegmentationImage();
    
    UFUNCTION(BlueprintCallable)
    static UARTexture* GetPersonSegmentationDepthImage();
    
    UFUNCTION(BlueprintCallable)
    static bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumberOfTrackedFacesSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UARLightEstimate* GetCurrentLightEstimate();
    
    UFUNCTION(BlueprintCallable)
    static bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraImage* GetCameraImage();
    
    UFUNCTION(BlueprintCallable)
    static UARTextureCameraDepth* GetCameraDepth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetARWorldScale();
    
    UFUNCTION(BlueprintCallable)
    static UARTexture* GetARTexture(EARTextureType TextureType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FARSessionStatus GetARSessionStatus();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedPose*> GetAllTrackedPoses();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedPoint*> GetAllTrackedPoints();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARPlaneGeometry*> GetAllTrackedPlanes();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedImage*> GetAllTrackedImages();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FARPose2D> GetAllTracked2DPoses();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARPin*> GetAllPins();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedGeometry*> GetAllGeometriesByClass(TSubclassOf<UARTrackedGeometry> GeometryClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedGeometry*> GetAllGeometries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetAlignmentTransform();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UARTrackedPoint*> FindTrackedPointsByName(const FString& PointName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateClosestIntersection(const TArray<FVector>& StartPoints, const TArray<FVector>& EndPoints, FVector& ClosestIntersection);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateAlignmentTransform(const FTransform& TransformInFirstCoordinateSystem, const FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool AddTrackedPointWithName(const FTransform& WorldTransform, const FString& PointName, bool bDeletePointsWithSameName);
    
    UFUNCTION(BlueprintCallable)
    static UARCandidateImage* AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth);
    
    UFUNCTION(BlueprintCallable)
    static bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
    
};

