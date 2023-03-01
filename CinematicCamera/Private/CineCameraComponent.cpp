#include "CineCameraComponent.h"

void UCineCameraComponent::SetLensPresetByName(const FString& InPresetName) {
}

void UCineCameraComponent::SetFilmbackPresetByName(const FString& InPresetName) {
}

void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength) {
}

float UCineCameraComponent::GetVerticalFieldOfView() const {
    return 0.0f;
}

TArray<FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy() {
    return TArray<FNamedLensPreset>();
}

FString UCineCameraComponent::GetLensPresetName() const {
    return TEXT("");
}

float UCineCameraComponent::GetHorizontalFieldOfView() const {
    return 0.0f;
}

TArray<FNamedFilmbackPreset> UCineCameraComponent::GetFilmbackPresetsCopy() {
    return TArray<FNamedFilmbackPreset>();
}

FString UCineCameraComponent::GetFilmbackPresetName() const {
    return TEXT("");
}

FString UCineCameraComponent::GetDefaultFilmbackPresetName() const {
    return TEXT("");
}

UCineCameraComponent::UCineCameraComponent() {
    this->CurrentFocalLength = 50.00f;
    this->CurrentAperture = 2.00f;
    this->CurrentFocusDistance = 0.00f;
    this->FilmbackPresets.AddDefaulted(13);
    this->LensPresets.AddDefaulted(9);
    this->DefaultFilmbackPresetName = TEXT("16:9 DSLR");
    this->DefaultFilmbackPreset = TEXT("16:9 Digital Film");
    this->DefaultLensPresetName = TEXT("Universal Zoom");
    this->DefaultLensFocalLength = 35.00f;
    this->DefaultLensFStop = 2.80f;
}

