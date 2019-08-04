// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableFactory.h"

AFGBuildableFactory::AFGBuildableFactory(){ }
void AFGBuildableFactory::GetLifetimeReplicatedProps( TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableFactory::PreReplication( IRepChangedPropertyTracker& ChangedPropertyTracker){ }
bool AFGBuildableFactory::GetNetDormancy( const FVector& ViewPos, const FVector& ViewDir,  AActor* Viewer, AActor* ViewTarget, UActorChannel* InChannel, float Time, bool bLowBandwidth){ return bool(); }
void AFGBuildableFactory::BeginPlay(){ }
void AFGBuildableFactory::EndPlay( const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableFactory::Tick( float dt){ }
void AFGBuildableFactory::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGBuildableFactory::GainedSignificance_Implementation(){ }
void AFGBuildableFactory::LostSignificance_Implementation(){ }
float AFGBuildableFactory::GetSignificanceBias(){ return float(); }
void AFGBuildableFactory::Factory_Tick( float dt){ }
void AFGBuildableFactory::GetDismantleRefund_Implementation( TArray< FInventoryStack >& out_refund) const{ }
void AFGBuildableFactory::OnBuildableReplicationDetailStateChange( bool newStateIsActive){ }
void AFGBuildableFactory::OnReplicationDetailActorCreated(){ }
TArray< UFGFactoryConnectionComponent* > AFGBuildableFactory::GetConnectionComponents() const{ return TArray<UFGFactoryConnectionComponent*>(); }
bool AFGBuildableFactory::HasPower() const{ return bool(); }
bool AFGBuildableFactory::RunsOnPower() const{ return bool(); }
float AFGBuildableFactory::GetIdlePowerConsumption() const{ return float(); }
float AFGBuildableFactory::GetProducingPowerConsumption() const{ return float(); }
float AFGBuildableFactory::GetDefaultProducingPowerConsumption() const{ return float(); }
float AFGBuildableFactory::CalcProducingPowerConsumptionForPotential( float potential) const{ return float(); }
bool AFGBuildableFactory::IsConfigured() const{ return bool(); }
bool AFGBuildableFactory::IsProducing() const{ return bool(); }
bool AFGBuildableFactory::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableFactory::SetIsProductionPaused( bool isPaused){ }
EProductionStatus AFGBuildableFactory::GetProductionIndicatorStatus() const{ return EProductionStatus(); }
float AFGBuildableFactory::GetProductionProgress() const{ return float(); }
float AFGBuildableFactory::GetProductionCycleTime() const{ return float(); }
float AFGBuildableFactory::GetDefaultProductionCycleTime() const{ return float(); }
float AFGBuildableFactory::GetProductionCycleTimeForRecipe( TSubclassOf< UFGRecipe > recipe) const{ return float(); }
float AFGBuildableFactory::CalcProductionCycleTimeForPotential( float potential) const{ return float(); }
float AFGBuildableFactory::GetProductivity(){ return float(); }
void AFGBuildableFactory::SetPendingPotential( float newPendingPotential){ }
float AFGBuildableFactory::GetCurrentMaxPotential() const{ return float(); }
float AFGBuildableFactory::GetMaxPossiblePotential() const{ return float(); }
void AFGBuildableFactory::OnReplicatingDetailsChanged(){ }
void AFGBuildableFactory::Factory_ProductionCycleCompleted( float overProductionRate){ }
void AFGBuildableFactory::Factory_CollectInput_Implementation(){ }
void AFGBuildableFactory::Factory_StartProducing(){ }
void AFGBuildableFactory::Factory_TickProducing( float dt){ }
void AFGBuildableFactory::Factory_TickProductivity( float dt){ }
void AFGBuildableFactory::Factory_StopProducing(){ }
void AFGBuildableFactory::NativeUpdateEffects( float DeltaSeconds){ }
void AFGBuildableFactory::OnRep_ReplicationDetailActor(){ }
AFGReplicationDetailActor* AFGBuildableFactory::GetOrCreateReplicationDetailActor(){ return nullptr; }
void AFGBuildableFactory::OnRep_IsProducing(){ }
void AFGBuildableFactory::OnPotentialInventoryItemRemoved( TSubclassOf<  UFGItemDescriptor > itemClass, int32 numRemoved){ }
EProductionStatusChange AFGBuildableFactory::OnProductionStatusChange = EProductionStatusChange();
