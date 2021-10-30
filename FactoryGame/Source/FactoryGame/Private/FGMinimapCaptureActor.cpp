// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGMinimapCaptureActor.h"
#include "Components/SceneComponent.h"

#if WITH_EDITOR
void AFGMinimapCaptureActor::ExportHeightData(){ }
void AFGMinimapCaptureActor::CalculateHeightData(FVector upperLeftWorld, const FVector xStepVect, const FVector yStepVect, const TArray< AActor* >& ignoreActors, FFGHeightData& out_terrainHeightData, FFGHeightData& out_waterHeightData, FFGHeightData& out_foliageHeightData){ }
EHeightDataType AFGMinimapCaptureActor::GetTypeFromHitResult(const FHitResult& hitResult){ return EHeightDataType(); }
void AFGMinimapCaptureActor::SetNotHitLocationsToLowestValue(FFGHeightData& out_heightData){ }
void AFGMinimapCaptureActor::SetDeepHitLocationsToLowestValue(FFGHeightData& out_heightData){ }
void AFGMinimapCaptureActor::ClampToBinaryValues(FFGHeightData& out_heightData){ }
void AFGMinimapCaptureActor::CalculateDepthBetween(FFGHeightData& out_heightData, const FFGHeightData& otherHeightData, float maxDepth, float bufferMultiplier){ }
TArray<FColor> AFGMinimapCaptureActor::CreatePixelArray(FFGHeightData &heightData){ return TArray<FColor>(); }
TArray<TArray<FColor>> AFGMinimapCaptureActor::CreateLayeredPixelArray(FFGHeightData &heightData, int32 numberOfLayers){ return TArray<TArray<FColor>>(); }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
AFGMinimapCaptureActor::AFGMinimapCaptureActor(){ 
	this->mMapAreaTexture = nullptr;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}
void AFGMinimapCaptureActor::BeginPlay(){ }
