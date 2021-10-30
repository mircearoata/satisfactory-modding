// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGSplineHologram.h"
#include "Components/SplineComponent.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/SceneComponent.h"

AFGSplineHologram::AFGSplineHologram(){ 
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("mSplineComponent"));
	this->mSplineData.Emplace();
	this->mSplineData[0].Location.X = 0.0;
	this->mSplineData[0].Location.Y = 0.0;
	this->mSplineData[0].Location.Z = 0.0;
	this->mSplineData[0].ArriveTangent.X = 1.0;
	this->mSplineData[0].ArriveTangent.Y = 0.0;
	this->mSplineData[0].ArriveTangent.Z = 0.0;
	this->mSplineData[0].LeaveTangent.X = 1.0;
	this->mSplineData[0].LeaveTangent.Y = 0.0;
	this->mSplineData[0].LeaveTangent.Z = 0.0;
	this->mSplineData.Emplace();
	this->mSplineData[1].Location.X = 0.0;
	this->mSplineData[1].Location.Y = 0.0;
	this->mSplineData[1].Location.Z = 0.0;
	this->mSplineData[1].ArriveTangent.X = 1.0;
	this->mSplineData[1].ArriveTangent.Y = 0.0;
	this->mSplineData[1].ArriveTangent.Z = 0.0;
	this->mSplineData[1].LeaveTangent.X = 1.0;
	this->mSplineData[1].LeaveTangent.Y = 0.0;
	this->mSplineData[1].LeaveTangent.Z = 0.0;
	this->mIsConnectionSnappedOnConstruction = 0;
	this->mBuildStep = ESplineHologramBuildStep::SHBS_FindStart;
	this->mLoopSound = CreateDefaultSubobject<UAkComponent>(TEXT("LoopSound"));
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mSplineComponent->SetupAttachment(RootComponent);
	this->mLoopSound->SetupAttachment(RootComponent);
}
void AFGSplineHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGSplineHologram::BeginPlay(){ }
void AFGSplineHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGSplineHologram::ClientPreConstructMessageSerialization(){ }
void AFGSplineHologram::ServerPostConstructMessageDeserialization(){ }
void AFGSplineHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram){ }
bool AFGSplineHologram::IsConnectionSnapped(bool lastConnection){ return bool(); }
void AFGSplineHologram::GetLastSplineData(FSplinePointData& data){ }
void AFGSplineHologram::ResetBuildSteps(){ }
bool AFGSplineHologram::CheckClearanceForShapeIgnoreStructure(FCollisionShape& shape, FTransform transform, ECollisionChannel chanel, const FComponentQueryParams& params){ return bool(); }
void AFGSplineHologram::OnRep_SplineData(){ }
void AFGSplineHologram::UpdateSplineComponent(){ }
