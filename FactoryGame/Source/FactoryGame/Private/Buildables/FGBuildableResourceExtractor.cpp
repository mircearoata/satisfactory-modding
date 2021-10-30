// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableResourceExtractor.h"
#include "FGConstructDisqualifier.h"
#include "FGPowerInfoComponent.h"
#include "Components/SceneComponent.h"
#include "Hologram/FGResourceExtractorHologram.h"

void AFGBuildableResourceExtractor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableResourceExtractor::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
AFGBuildableResourceExtractor::AFGBuildableResourceExtractor(){ 
	this->mExtractStartupTime = -10.0;
	this->mExtractStartupTimer = 10.0;
	this->mExtractCycleTime = 1.0;
	this->mItemsPerCycle = 1;
	this->mCurrentExtractProgress = 0.0;
	this->mOutputInventory = nullptr;
	this->mReplicatedFlowRate = 0.0;
	this->mMustPlaceOnResourceDisqualifier = UFGCDNeedsResourceNode::StaticClass();
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mHologramClass = AFGResourceExtractorHologram::StaticClass();
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGBuildableResourceExtractor::OnReplicationDetailActorRemoved(){ }
void AFGBuildableResourceExtractor::BeginPlay(){ }
bool AFGBuildableResourceExtractor::CanProduce_Implementation() const{ return bool(); }
float AFGBuildableResourceExtractor::GetProductionCycleTime() const{ return float(); }
float AFGBuildableResourceExtractor::GetProductionProgress() const{ return float(); }
float AFGBuildableResourceExtractor::CalcProductionCycleTimeForPotential(float potential) const{ return float(); }
float AFGBuildableResourceExtractor::GetNumExtractedItemsPerCycleConverted() const{ return float(); }
float AFGBuildableResourceExtractor::GetExtractionPerMinute() const{ return float(); }
bool AFGBuildableResourceExtractor::IsStartupComplete(){ return bool(); }
float AFGBuildableResourceExtractor::GetMaxFlowRate() const{ return float(); }
void AFGBuildableResourceExtractor::Factory_StartProducing(){ }
void AFGBuildableResourceExtractor::Factory_TickProducing(float dt){ }
void AFGBuildableResourceExtractor::Factory_PushPipeOutput_Implementation(float dt){ }
void AFGBuildableResourceExtractor::OnRep_ReplicationDetailActor(){ }
void AFGBuildableResourceExtractor::OnRep_CurrentPotential(){ }
void AFGBuildableResourceExtractor::OnExtractableResourceSet(){ }
void AFGBuildableResourceExtractor::OnRep_ExtractableResource(){ }
void AFGBuildableResourceExtractor::CalculateProductionCycleTime(){ }
