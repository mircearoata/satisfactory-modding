// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWeapon.h"

void AFGWeapon::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
AFGWeapon::AFGWeapon(){ }
void AFGWeapon::Tick(float DeltaSeconds){ }
bool AFGWeapon::ShouldSaveState() const{ return bool(); }
bool AFGWeapon::InitializeMagazineObjects(){ return bool(); }
void AFGWeapon::TryEquipChildEquipment(){ }
void AFGWeapon::UnEquip(){ }
void AFGWeapon::Equip( AFGCharacterPlayer* character){ }
void AFGWeapon::AssignHud(AFGHUD* associatedHud){ }
void AFGWeapon::OnPrimaryFirePressed(){ }
void AFGWeapon::Server_StartPrimaryFire_Implementation(){ }
void AFGWeapon::BeginPrimaryFire(){ }
void AFGWeapon::OnPrimaryFireReleased(){ }
void AFGWeapon::Server_EndPrimaryFire_Implementation(){ }
void AFGWeapon::Multicast_EndPrimaryFire_Implementation(){ }
void AFGWeapon::EndPrimaryFire(){ }
void AFGWeapon::GetFiringTransform(FTransform& firingTransform){ }
void AFGWeapon::OnReloadPressed(){ }
void AFGWeapon::Multicast_Reload_Implementation(){ }
bool AFGWeapon::CanReload() const{ return bool(); }
float AFGWeapon::GetReloadTimeLeft() const{ return float(); }
void AFGWeapon::OnCycleAmmunitionTypePressed(){ }
void AFGWeapon::OnCycleAmmunitionTypeReleased(){ }
void AFGWeapon::Server_CycleDesiredAmmunitionType_Implementation(){ }
void AFGWeapon::CycleDesiredAmmunitionType(){ }
void AFGWeapon::Server_SetDesiredAmmoClass_Implementation(TSubclassOf< UFGItemDescAmmoType > newDesiredAmmoClass){ }
void AFGWeapon::SetDesiredAmmoClass(TSubclassOf< UFGItemDescAmmoType > newDesiredAmmoClass){ }
bool AFGWeapon::HasAmmunition() const{ return bool(); }
int32 AFGWeapon::GetSpareAmmunition(TSubclassOf< UFGItemDescAmmoType > AmmunitionType) const{ return int32(); }
void AFGWeapon::ApplyDispersion(){ }
void AFGWeapon::FireAmmunition_Implementation(FTransform firingTransform, float currentAmmos, APawn* serverInstigator){ }
void AFGWeapon::Multicast_SetAttachmentsLoadState_Implementation(bool isLoaded){ }
void AFGWeapon::Server_SetAttachementLoadState_Implementation(){ }
void AFGWeapon::Multicast_InitialAmmoCountRep_Implementation(int ammoCount){ }
void AFGWeapon::Server_InitialAmmoCountRep_Implementation(){ }
void AFGWeapon::PlayFireEffect_Implementation(UFGItemDescAmmoType* AmmoTypeObject){ }
void AFGWeapon::AddEquipmentActionBindings(){ }
void AFGWeapon::SetWeaponState(EWeaponState newState){ }
void AFGWeapon::ApplyDispersionReduction(float DeltaSeconds){ }
void AFGWeapon::RefireCheckTimer(){ }
void AFGWeapon::ConsumeAmmunition(){ }
void AFGWeapon::Multicast_SetCurrentAmmunition_Implementation(float newCurrentAmmo){ }
bool AFGWeapon::CanFire() const{ return bool(); }
void AFGWeapon::ActualReload(){ }
void AFGWeapon::PlayReloadEffects_Implementation(){ }
void AFGWeapon::Server_Reload_Implementation(){ }
void AFGWeapon::TryAutoReload(){ }
UFGInventoryComponent* AFGWeapon::GetOwnersInventoryComponent() const{ return nullptr; }
void AFGWeapon::OnAmmoFired(AActor* SpawnedActor){ }
