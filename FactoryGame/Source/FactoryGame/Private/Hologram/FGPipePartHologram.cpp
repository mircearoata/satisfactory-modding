// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPipePartHologram.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/SceneComponent.h"

AFGPipePartHologram::AFGPipePartHologram(){ 
	this->mSupportMesh.Mesh = nullptr;
	this->mSupportMesh.Height = 0.0;
	this->mSnapConnection = nullptr;
	this->mSupportMeshComponent = nullptr;
	this->mSupportLengthComponent = nullptr;
	this->mLoopSound = CreateDefaultSubobject<UAkComponent>(TEXT("LoopSound"));
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mLoopSound->SetupAttachment(RootComponent);
}
void AFGPipePartHologram::BeginPlay(){ }
bool AFGPipePartHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGPipePartHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPipePartHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPipePartHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGPipePartHologram::CheckValidFloor(){ }
void AFGPipePartHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
void AFGPipePartHologram::SetSupportLength(float height){ }
void AFGPipePartHologram::SnapToConnection(UFGPipeConnectionComponentBase* connection, FVector preSnapLocation){ }
void AFGPipePartHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGPipePartHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGPipePartHologram::CheckValidPlacement(){ }
void AFGPipePartHologram::OnRep_SupportMesh(){ }
void AFGPipePartHologram::UpdateSupportLengthRelativeLoc(){ }
void AFGPipePartHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const { Super::GetLifetimeReplicatedProps(OutLifetimeProps); }
