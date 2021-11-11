// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGChargedWeapon.h"

AFGChargedWeapon::AFGChargedWeapon(){ }
void AFGChargedWeapon::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGChargedWeapon::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGChargedWeapon::ShouldSaveState() const{ return bool(); }
void AFGChargedWeapon::BeginPrimaryFire(){ }
void AFGChargedWeapon::EndPrimaryFire(){ }
void AFGChargedWeapon::Equip( AFGCharacterPlayer* character){ }
void AFGChargedWeapon::UnEquip(){ }
float AFGChargedWeapon::GetChargePct() const{ return float(); }
void AFGChargedWeapon::SpawnChargedProjectile(FTransform spawnTransform, int32 throwForce){ }
void AFGChargedWeapon::Server_SpawnChargedProjectile_Implementation(FTransform spawnTransform, int32 throwForce){ }
bool AFGChargedWeapon::Server_SpawnChargedProjectile_Validate(FTransform spawnTransform, int32 throwForce){ return bool(); }
void AFGChargedWeapon::StartChargedProjectileSecondary(){ }
void AFGChargedWeapon::Server_StartChargedProjectileSecondary_Implementation(){ }
void AFGChargedWeapon::Multicast_PrimaryFireStarted_Implementation(){ }
void AFGChargedWeapon::OnPrimaryFireStarted_Implementation(){ }
void AFGChargedWeapon::OnPrimaryFireEnded_Implementation(){ }
void AFGChargedWeapon::ExecutePrimaryFire(FVector spawnLocation){ }
void AFGChargedWeapon::Server_ExecutePrimaryFire_Implementation(FVector spawnLocation){ }
void AFGChargedWeapon::Multicast_ResetPressTimestamp_Implementation(){ }
void AFGChargedWeapon::SecondaryFirePressed(){ }
void AFGChargedWeapon::OnSecondaryFirePressed_Implementation(){ }
void AFGChargedWeapon::ExecuteSecondaryFire(){ }
void AFGChargedWeapon::Server_ExecuteSecondaryFire_Implementation(){ }
void AFGChargedWeapon::OnViewportFocusChanged(bool isOpen, TSubclassOf<  UUserWidget > interactionClass){ }
void AFGChargedWeapon::AddEquipmentActionBindings(){ }
void AFGChargedWeapon::ApplyDispersionReduction(float DeltaSeconds){ }
void AFGChargedWeapon::OnAmmoFired(AActor* SpawnedActor){ }
