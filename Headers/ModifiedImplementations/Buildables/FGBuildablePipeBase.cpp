// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipeBase.h"

AFGBuildablePipeBase::AFGBuildablePipeBase() : Super() {
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent")); this->mSplineComponent->SetupAttachment(this->RootComponent);
	/* Skipping UFGInstancedSplineMeshComponent this->mInstancedSplineComponent */
	this->mHologramClass = AFGPipelineHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = false; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->SetReplicates(true);
	this->NetDormancy = DORM_Awake;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildablePipeBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipeBase::BeginPlay(){ }
void AFGBuildablePipeBase::EndPlay(const EEndPlayReason::Type endPlayReason){ }
int32 AFGBuildablePipeBase::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildablePipeBase::GainedSignificance_Implementation(){ }
void AFGBuildablePipeBase::LostSignificance_Implementation(){ }
void AFGBuildablePipeBase::GainedSignificance_Native(){ }
void AFGBuildablePipeBase::LostSignificance_Native(){ }
void AFGBuildablePipeBase::SetupForSignificance(){ }
float AFGBuildablePipeBase::FindOffsetClosestToLocation(const FVector& location) const{ return float(); }
void AFGBuildablePipeBase::GetLocationAndDirectionAtOffset(float offset, FVector& out_location, FVector& out_direction) const{ }
TSubclassOf< UFGPipeConnectionComponentBase > AFGBuildablePipeBase::GetConnectionType_Implementation(){ return TSubclassOf<UFGPipeConnectionComponentBase>(); }
const float AFGBuildablePipeBase::PIPE_COST_LENGTH_MULTIPLIER = float();
