#include "MovieSceneParameterSection.h"

bool UMovieSceneParameterSection::RemoveVectorParameter(FName InParameterName) {
    return false;
}

bool UMovieSceneParameterSection::RemoveVector2DParameter(FName InParameterName) {
    return false;
}

bool UMovieSceneParameterSection::RemoveTransformParameter(FName InParameterName) {
    return false;
}

bool UMovieSceneParameterSection::RemoveScalarParameter(FName InParameterName) {
    return false;
}

bool UMovieSceneParameterSection::RemoveColorParameter(FName InParameterName) {
    return false;
}

bool UMovieSceneParameterSection::RemoveBoolParameter(FName InParameterName) {
    return false;
}

void UMovieSceneParameterSection::GetParameterNames(TSet<FName>& ParameterNames) const {
}

void UMovieSceneParameterSection::AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue) {
}

void UMovieSceneParameterSection::AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue) {
}

void UMovieSceneParameterSection::AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, const FTransform& InValue) {
}

void UMovieSceneParameterSection::AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue) {
}

void UMovieSceneParameterSection::AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue) {
}

void UMovieSceneParameterSection::AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue) {
}

UMovieSceneParameterSection::UMovieSceneParameterSection() {
}

