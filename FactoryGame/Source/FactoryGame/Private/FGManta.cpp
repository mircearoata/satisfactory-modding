// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGManta.h"
#include "Components/SceneComponent.h"

AFGManta::AFGManta() : Super() {
	this->mSecondsPerLoop = 900;
	this->mSignificanceRange = 130000;
	this->mTickTransform = true;
	this->mIsClosedSplineLoop = true;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bReplicates = true;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGManta::GainedSignificance_Implementation(){ }
void AFGManta::LostSignificance_Implementation(){ }
void AFGManta::GainedSignificance_Native(){ }
void AFGManta::LostSignificance_Native(){ }
float AFGManta::GetSignificanceRange(){ return float(); }
void AFGManta::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGManta::BeginPlay(){ }
void AFGManta::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGManta::UpdateManta(){ }
void AFGManta::Tick(float DeltaTime){ }
