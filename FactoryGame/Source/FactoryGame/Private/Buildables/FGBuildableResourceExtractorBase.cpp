// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableResourceExtractorBase.h"
#include "Hologram/FGResourceExtractorHologram.h"
#include "FGPowerInfoComponent.h"
#include "FGConstructDisqualifier.h"

void AFGBuildableResourceExtractorBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableResourceExtractorBase::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
AFGBuildableResourceExtractorBase::AFGBuildableResourceExtractorBase() : Super() {
	this->mMustPlaceOnResourceDisqualifier = UFGCDNeedsResourceNode::StaticClass();
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mCanChangePotential = true;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mFluidStackSizeMultiplier = 1;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGResourceExtractorHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->SetReplicates(true);
	this->NetDormancy = DORM_Awake;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableResourceExtractorBase::BeginPlay(){ }
void AFGBuildableResourceExtractorBase::Destroyed(){ }
bool AFGBuildableResourceExtractorBase::DisconnectExtractableResource(){ return bool(); }
void AFGBuildableResourceExtractorBase::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableResourceExtractorBase::SetExtractableResource(TScriptInterface< IFGExtractableResourceInterface > extractableInterface){ }
void AFGBuildableResourceExtractorBase::SetResourceNode( AFGResourceNode* resourceNode){ }
UParticleSystem* AFGBuildableResourceExtractorBase::GetMiningParticle(){ return nullptr; }
bool AFGBuildableResourceExtractorBase::CanOccupyResource(const TScriptInterface<  IFGExtractableResourceInterface >& resource) const{ return bool(); }
bool AFGBuildableResourceExtractorBase::IsAllowedOnResource(const TScriptInterface<  IFGExtractableResourceInterface >& resource) const{ return bool(); }
void AFGBuildableResourceExtractorBase::OnExtractableResourceSet(){ }
