// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGCeilingLightHologram.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/SceneComponent.h"

AFGCeilingLightHologram::AFGCeilingLightHologram() : Super() {
	this->mUseBuildClearanceOverlapSnapp = false;
}
void AFGCeilingLightHologram::BeginPlay(){ }
bool AFGCeilingLightHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGCeilingLightHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGCeilingLightHologram::CheckValidFloor(){ }
void AFGCeilingLightHologram::CheckClearance(const FVector& locationOffset){ }