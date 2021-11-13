// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipePart.h"
#include "Components/SceneComponent.h"
#include "FGColoredInstanceMeshProxy.h"

#if WITH_EDITOR
void AFGBuildablePipePart::OnConstruction(const FTransform& transform){ }
#endif 
AFGBuildablePipePart::AFGBuildablePipePart() : Super() {
	this->mLength = 200.0;
	this->mCanStack = false;
	this->mStackHeight = 0.0;
	this->mSupportComponentDefaultMesh = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("SupportMeshCompProxyHolder"));
	this->mConnection0 = nullptr;
	this->mSupportMesh = nullptr;
	this->mUseStaticHeight = false;
	this->mHologramClass = AFGBuildablePipePart::StaticClass();
	this->mSupportComponentDefaultMesh->SetupAttachment(RootComponent);
}
void AFGBuildablePipePart::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipePart::BeginPlay(){ }
void AFGBuildablePipePart::SetSupportLength(float length){ }
void AFGBuildablePipePart::SetupConnectionComponent(){ }
const FName AFGBuildablePipePart::SupportMeshName = FName();
float AFGBuildablePipeHyperPart::GetPipeProgressOfConnection_Implementation(const UFGPipeConnectionComponentBase* connectionEnteredThrough){ return float(); }
void AFGBuildablePipeHyperPart::OnPipeMove_Implementation(UFGCharacterMovementComponent* charMove, float deltaTime){ }
bool AFGBuildablePipeHyperPart::OnPipeEnter_Implementation(UFGCharacterMovementComponent* charMove, const UFGPipeConnectionComponentBase* connectionEnteredThrough , const AActor* fromPipe){ return bool(); }
