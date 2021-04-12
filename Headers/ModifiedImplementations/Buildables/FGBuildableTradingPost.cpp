// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableTradingPost.h"

AFGBuildableTradingPost::AFGBuildableTradingPost() : Super() {
	this->mSpawningGroundZOffset = 5;
	this->mGroundSearchZDistance = 250;
	this->mGenerator1Location = CreateDefaultSubobject<USceneComponent>(TEXT("Generator1Location")); this->mGenerator1Location->SetupAttachment(this->RootComponent);
	this->mGenerator2Location = CreateDefaultSubobject<USceneComponent>(TEXT("Generator2Location")); this->mGenerator2Location->SetupAttachment(this->RootComponent);
	this->mStorageLocation = CreateDefaultSubobject<USceneComponent>(TEXT("StorageLocation")); this->mStorageLocation->SetupAttachment(this->RootComponent);
	this->mHubTerminalLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HubTerminalLocation")); this->mHubTerminalLocation->SetupAttachment(this->RootComponent);
	this->mWorkBenchLocation = CreateDefaultSubobject<USceneComponent>(TEXT("WorkBenchLocation")); this->mWorkBenchLocation->SetupAttachment(this->RootComponent);
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mFluidStackSizeMultiplier = 1;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
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
void AFGBuildableTradingPost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableTradingPost::BeginPlay(){ }
void AFGBuildableTradingPost::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableTradingPost::Dismantle_Implementation(){ }
void AFGBuildableTradingPost::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
void AFGBuildableTradingPost::StartIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildableTradingPost::StopIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildableTradingPost::OnTradingPostUpgraded_Implementation(int32 level, bool suppressBuildEffects){ }
void AFGBuildableTradingPost::UpdateGeneratorVisibility(){ }
void AFGBuildableTradingPost::UpdateStorageVisibility(){ }
int32 AFGBuildableTradingPost::GetTradingPostLevel() const{ return int32(); }
void AFGBuildableTradingPost::PlayBuildEffects(AActor* inInstigator){ }
void AFGBuildableTradingPost::ExecutePlayBuildEffects(){ }
void AFGBuildableTradingPost::PlayBuildEffectsOnAllClients(AActor* instigator){ }
bool AFGBuildableTradingPost::AreChildBuildingsLoaded(){ return bool(); }
void AFGBuildableTradingPost::ValidateSubBuildings(){ }
TArray<AActor*> AFGBuildableTradingPost::GetAllActiveSubBuildings(){ return TArray<AActor*>(); }
void AFGBuildableTradingPost::OnBuildEffectFinished(){ }
void AFGBuildableTradingPost::TogglePendingDismantleMaterial(bool enabled){ }
void AFGBuildableTradingPost::OnRep_HAXX_SubbuildingReplicated(){ }
void AFGBuildableTradingPost::AdjustPlayerSpawnsToGround(){ }
AFGSchematicManager* AFGBuildableTradingPost::GetSchematicManager(){ return nullptr; }
void AFGBuildableTradingPost::OnRep_NeedPlayingBuildEffect(){ }
