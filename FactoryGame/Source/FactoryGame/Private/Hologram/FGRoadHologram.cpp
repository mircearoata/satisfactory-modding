// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGRoadHologram.h"
#include "Components/SplineComponent.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/SceneComponent.h"

AFGRoadHologram::AFGRoadHologram(){ 
	this->mConnectionComponents[0] = nullptr;
	this->mConnectionComponents[1] = nullptr;
	this->mSnappedConnectionComponents[0] = nullptr;
	this->mSnappedConnectionComponents[1] = nullptr;
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("mSplineComponent"));
	this->mLoopSound = CreateDefaultSubobject<UAkComponent>(TEXT("LoopSound"));
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mSplineComponent->SetupAttachment(RootComponent);
	this->mLoopSound->SetupAttachment(RootComponent);
}
void AFGRoadHologram::BeginPlay(){ }
USceneComponent* AFGRoadHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void AFGRoadHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGRoadHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGRoadHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGRoadHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGRoadHologram::CheckValidFloor(){ }
void AFGRoadHologram::CheckClearance(const FVector& locationOffset){ }
UFGRoadConnectionComponent* AFGRoadHologram::FindOverlappingConnectionComponent(const FVector& location, float radius,  UFGRoadConnectionComponent* ignoredConnection, bool ignoreIsConnected) const{ return nullptr; }
