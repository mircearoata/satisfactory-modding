// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGChargedWeapon.h"

AFGChargedWeapon::AFGChargedWeapon() : Super() {
	this->mIsPendingExecuteFire = false;
	this->mMaxChargeTime = 0.0;
	this->mMaxThrowForce = 0;
	this->mMinThrowForce = 0;
	this->mDelayBetweenSecondaryTriggers = 0.25;
	this->mPressTimestamp = -1.0;
	this->mAutoReloadDelay = 1.0;
}
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
void AFGChargedWeapon::OnPrimaryFireStarted_Implementation(){ }
void AFGChargedWeapon::OnPrimaryFireEnded_Implementation(){ }
void AFGChargedWeapon::ExecutePrimaryFire(){ }
void AFGChargedWeapon::Server_ExecutePrimaryFire_Implementation(){ }
void AFGChargedWeapon::SecondaryFirePressed(){ }
void AFGChargedWeapon::OnSecondaryFirePressed_Implementation(){ }
void AFGChargedWeapon::ExecuteSecondaryFire(){ }
void AFGChargedWeapon::Server_ExecuteSecondaryFire_Implementation(){ }
void AFGChargedWeapon::OnViewportFocusChanged(bool isOpen, TSubclassOf<  UUserWidget > interactionClass){ }
void AFGChargedWeapon::AddEquipmentActionBindings(){ }
void AFGChargedWeapon::ApplyDispersionReduction(float DeltaSeconds){ }
void AFGChargedWeapon::OnAmmoFired(AActor* SpawnedActor){ }