// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGAmmoTypeInstantHit.h"

UFGAmmoTypeInstantHit::UFGAmmoTypeInstantHit() : Super() {
	this->mPlayFireEffects = true;
	this->mHitNoise = nullptr;
}
void UFGAmmoTypeInstantHit::FireAmmunition_Implementation(){ }
void UFGAmmoTypeInstantHit::InstantFire(){ }
void UFGAmmoTypeInstantHit::CalcWeaponFire(FVector startTrace, FVector endTrace, FHitResult& out_hitResult) const{ }
void UFGAmmoTypeInstantHit::ProcessHit_Implementation(const FHitResult& hitResult){ }
float UFGAmmoTypeInstantHit::GetTotalHitDamageAmount_Implementation(const FHitResult& hitResult, const  UFGDamageType* damageType){ return float(); }
void UFGAmmoTypeInstantHit::NetMulticast_PlayEffects_Implementation(const FHitResult& hitResult){ }
void UFGAmmoTypeInstantHit::PlayEffects_Implementation(const FHitResult& hitResult){ }
void UFGAmmoTypeInstantHit::DealDamage(const FHitResult& hitResult){ }
