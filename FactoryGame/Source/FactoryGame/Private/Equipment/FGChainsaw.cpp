// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGChainsaw.h"
#include "Components/SceneComponent.h"

AFGChainsaw::AFGChainsaw(){ 
	this->mFuelClass = nullptr;
	this->mEnergyConsumption = 3.0;
	this->mSawDownTreeTime = 2.0;
	this->mCollateralPickupRadius = 200.0;
	this->mExcludeChainsawableFoliage = false;
	this->mEnergyStored = 0.0;
	this->mArmAnimation = EArmEquipment::AE_ChainSaw;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGChainsaw::Tick(float dt){ }
bool AFGChainsaw::ShouldSaveState() const{ return bool(); }
void AFGChainsaw::DisableEquipment(){ }
void AFGChainsaw::UnEquip(){ }
void AFGChainsaw::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGChainsaw::DoesPlayerHaveChainsawEquipped( AFGCharacterPlayer* player){ return bool(); }
bool AFGChainsaw::ConsumeFuel(float dt){ return bool(); }
void AFGChainsaw::StartSawing(){ }
bool AFGChainsaw::CanStartSawing_Implementation(){ return bool(); }
void AFGChainsaw::Server_StartSawing_Implementation(){ }
bool AFGChainsaw::Server_StartSawing_Validate(){ return bool(); }
void AFGChainsaw::StopSawing(){ }
void AFGChainsaw::Server_RemoveChainsawedObject_Implementation( USceneComponent* sawingComponent, FTransform foliageToRemoveTransform, FVector effectLocation){ }
bool AFGChainsaw::Server_RemoveChainsawedObject_Validate( USceneComponent* sawingComponent, FTransform foliageToRemoveTransform, FVector effectLocation){ return bool(); }
void AFGChainsaw::RemoveChainsawedObject( USceneComponent* sawingComponent, FTransform foliageToRemoveTransform, FVector effectLocation){ }
void AFGChainsaw::RemoveCollateralFoliage( AFGFoliageRemovalSubsystem* removalSubsystem, const FTransform& chainsawedObjectTransform){ }
void AFGChainsaw::BroadcastPickup_Implementation(const TArray<FPickedUpInstance>& pickups,  AFGFoliagePickup* instigatorPlayer){ }
void AFGChainsaw::Server_StopSawing_Implementation(){ }
bool AFGChainsaw::Server_StopSawing_Validate(){ return bool(); }
bool AFGChainsaw::HasAnyFuel() const{ return bool(); }
void AFGChainsaw::OnPrimaryFirePressed(){ }
void AFGChainsaw::OnPrimaryFireReleased(){ }
void AFGChainsaw::StartNewSawing( USceneComponent* sawingComponent, int32 newIndex){ }
bool AFGChainsaw::IsValidSawing( USceneComponent* sawingComponent, int32 newIndex) const{ return bool(); }
void AFGChainsaw::AddToPlayerInventory( USceneComponent* sawingComponent){ }
bool AFGChainsaw::CanPlayerPickupFoliageResource( UHierarchicalInstancedStaticMeshComponent* meshComponent, bool excludeChainsawable, TArray<FInventoryStack>& out_validStacks){ return bool(); }
void AFGChainsaw::PlayEffect(FVector atLocation, USceneComponent* sawingComponent){ }
void AFGChainsaw::AddEquipmentActionBindings(){ }
UStaticMesh* AFGChainsaw::GetStaticMesh(USceneComponent* sawingComponent){ return nullptr; }
bool AFGChainsaw::IsChainsawableActor(AActor* actor) const{ return bool(); }
