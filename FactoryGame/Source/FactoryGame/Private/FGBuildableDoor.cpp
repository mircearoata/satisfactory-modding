// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableDoor.h"
#include "Components/SceneComponent.h"
#include "Hologram/FGWallHologram.h"
#include "FGColoredInstanceMeshProxy.h"

AFGBuildableDoor::AFGBuildableDoor(){ 
	this->mDoorState = EDoorState::DS_Closed;
	this->mDoorConfiguration = EDoorConfiguration::DC_Auto;
	this->mCanBeLocked = false;
	this->mAnimationRate = 0.0;
	this->mMovementRate = 30.0;
	this->EasingFunction = EEasingFunc::Linear;
	this->BlendExp = 2.0;
	this->Steps = 2;
	this->mMeshComponentProxy = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("BuildingMeshProxy"));
	this->mHologramClass = AFGWallHologram::StaticClass();
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mMeshComponentProxy->SetupAttachment(RootComponent);
}
void AFGBuildableDoor::BeginPlay(){ }
void AFGBuildableDoor::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableDoor::ConfigureDynamicDecoratorComponent(USceneComponent* newComponent){ }
bool AFGBuildableDoor::IsUseable_Implementation() const{ return bool(); }
void AFGBuildableDoor::OnUse_Implementation(AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableDoor::GainedSignificance_Implementation(){ }
void AFGBuildableDoor::LostSignificance_Implementation(){ }
void AFGBuildableDoor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){ }
void AFGBuildableDoor::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){ }
void AFGBuildableDoor::OnRep_DoorState(){ }
void AFGBuildableDoor::OnRep_DoorConfiguration(){ }
void AFGBuildableDoor::SetDoorLightFeedbackState(EDoorConfiguration Config){ }
bool AFGBuildableDoor::CanClose_Implementation(){ return bool(); }
void AFGBuildableDoor::Update(){ }
void AFGBuildableDoor::BeginOpening(){ }
void AFGBuildableDoor::BeginClosing(){ }
void AFGBuildableDoor::FinishedMoving(bool shouldBlock){ }
