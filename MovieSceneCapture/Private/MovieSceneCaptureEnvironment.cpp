#include "MovieSceneCaptureEnvironment.h"

class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;

bool UMovieSceneCaptureEnvironment::IsCaptureInProgress() {
    return false;
}

int32 UMovieSceneCaptureEnvironment::GetCaptureFrameNumber() {
    return 0;
}

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime() {
    return 0.0f;
}

UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol() {
    return NULL;
}

UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol() {
    return NULL;
}

UMovieSceneCaptureEnvironment::UMovieSceneCaptureEnvironment() {
}

