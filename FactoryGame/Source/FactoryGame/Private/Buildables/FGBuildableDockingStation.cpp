// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableDockingStation.h"

AFGBuildableDockingStation::AFGBuildableDockingStation(){ }
void AFGBuildableDockingStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableDockingStation::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGBuildableDockingStation::BeginPlay(){ }
void AFGBuildableDockingStation::Destroyed(){ }
void AFGBuildableDockingStation::OnReplicationDetailActorRemoved(){ }
bool AFGBuildableDockingStation::Dock( AActor* actor){ return bool(); }
void AFGBuildableDockingStation::Undock(){ }
void AFGBuildableDockingStation::SetIsInLoadMode(bool isInLoadMode){ }
bool AFGBuildableDockingStation::GetIsInLoadMode() const{ return bool(); }
bool AFGBuildableDockingStation::IsLoadUnloading() const{ return bool(); }
void AFGBuildableDockingStation::Factory_Tick(float dt){ }
void AFGBuildableDockingStation::Factory_TickProducing(float dt){ }
void AFGBuildableDockingStation::Factory_CollectInput_Implementation(){ }
bool AFGBuildableDockingStation::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableDockingStation::OnRep_ReplicationDetailActor(){ }
AFGReplicationDetailActor_DockingStation* AFGBuildableDockingStation::GetCastRepDetailsActor() const{ return nullptr; }
void AFGBuildableDockingStation::OnRep_FuelInventory(){ }
bool AFGBuildableDockingStation::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
bool AFGBuildableDockingStation::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
bool AFGBuildableDockingStation::Factory_LoadFuel(UFGInventoryComponent* dockedFuelInventory, float percentOfStack){ return bool(); }
void AFGBuildableDockingStation::Factory_LoadDockedInventory(UFGInventoryComponent* dockedInventory){ }
void AFGBuildableDockingStation::Factory_UnloadDockedInventory(UFGInventoryComponent* dockedInventory){ }
void AFGBuildableDockingStation::LoadUnloadVehicleComplete(){ }
FName AFGBuildableDockingStation::sFuelTag = FName();
