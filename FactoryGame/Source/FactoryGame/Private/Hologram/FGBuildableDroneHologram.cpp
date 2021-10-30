// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGBuildableDroneHologram.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/SceneComponent.h"

AFGBuildableDroneHologram::AFGBuildableDroneHologram(){ 
	this->mSnappedStation = nullptr;
	this->mLoopSound = CreateDefaultSubobject<UAkComponent>(TEXT("LoopSound"));
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mLoopSound->SetupAttachment(RootComponent);
}
void AFGBuildableDroneHologram::BeginPlay(){ }
void AFGBuildableDroneHologram::Destroyed(){ }
void AFGBuildableDroneHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGBuildableDroneHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGBuildableDroneHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
AFGVehicle* AFGBuildableDroneHologram::ConstructVehicle(FNetConstructionID netConstructionID) const{ return nullptr; }
