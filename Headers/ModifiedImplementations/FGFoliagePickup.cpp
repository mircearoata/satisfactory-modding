// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFoliagePickup.h"

AFGFoliagePickup::AFGFoliagePickup(){ }
void AFGFoliagePickup::BeginPlay(){ }
void AFGFoliagePickup::Tick(float DeltaSeconds){ }
void AFGFoliagePickup::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState){ }
bool AFGFoliagePickup::IsUseable_Implementation() const{ return bool(); }
void AFGFoliagePickup::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGFoliagePickup::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGFoliagePickup::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGFoliagePickup::BroadcastPickup_Implementation( UStaticMesh* fromStaticMesh, FVector atLocation){ }
void AFGFoliagePickup::SetPickupData( UHierarchicalInstancedStaticMeshComponent* component, int32 instanceId, AFGCharacterPlayer* byCharacter){ }
void AFGFoliagePickup::DoPickup(){ }
void AFGFoliagePickup::Input_Use(const  FInputActionValue& actionValue){ }
void AFGFoliagePickup::Server_PickUpFoliage_Implementation( AFGCharacterPlayer* byCharacter, FFoliageInstanceStableId StableId, const FVector& instanceLocation){ }
bool AFGFoliagePickup::AddToPlayerInventory( AFGCharacterPlayer* character,  UHierarchicalInstancedStaticMeshComponent* meshComponent, uint32 seed){ return bool(); }
bool AFGFoliagePickup::HasPlayerSpaceFor( AFGCharacterPlayer* character,  UHierarchicalInstancedStaticMeshComponent* meshComponent, uint32 seed){ return bool(); }
