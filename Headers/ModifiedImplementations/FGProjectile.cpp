// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGProjectile.h"

AFGProjectile::AFGProjectile(){ }
void AFGProjectile::Tick(float DeltaSeconds){ }
void AFGProjectile::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGProjectile::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGProjectile::PostNetReceiveLocationAndRotation(){ }
bool AFGProjectile::ShouldSave_Implementation() const{ return bool(); }
bool AFGProjectile::NeedTransform_Implementation(){ return bool(); }
void AFGProjectile::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
float AFGProjectile::TakeDamage(float DamageAmount, const  FDamageEvent& DamageEvent,  AController* EventInstigator,
							AActor* DamageCauser){ return float(); }
void AFGProjectile::LifeSpanExpired(){ }
void AFGProjectile::OnImpact_Native(const FHitResult& hitResult){ }
void AFGProjectile::Multicast_OnImpact_Implementation(const FHitResult& hitResult, bool wasAttached){ }
void AFGProjectile::OnBounce_Native(const FHitResult& hitResult, const FVector& hitVelocity){ }
void AFGProjectile::SetSourceAmmoDescriptor( UFGAmmoTypeProjectile* ammoDescriptor){ }
void AFGProjectile::SetTargetLocation(const FVector& targetLocation){ }
void AFGProjectile::SetTargetActor(AActor* actor){ }
void AFGProjectile::SetIsHomingProjectile(bool isHoming){ }
void AFGProjectile::SetInitialVelocity(const FVector& inVelocity){ }
void AFGProjectile::TriggerSecondary(){ }
void AFGProjectile::TriggerSecondaryWithDelay(float delayTime){ }
void AFGProjectile::SetAndEnableRotation(float scale){ }
void AFGProjectile::Multicast_SpawnImpactDamageEffects_Implementation(FHitResult const& hitResult){ }
void AFGProjectile::Multicast_SpawnEndOfLifeDamageEffects_Implementation(FHitResult const& hitResult){ }
void AFGProjectile::SetInitialHealth(float newHealth){ }
void AFGProjectile::SetMaximumHomingAccelerationMagnitude(float newHomingAccelerationMagnitude){ }
void AFGProjectile::OnSpawnedAsClusterProjectile_Implementation(){ }
void AFGProjectile::DealEndOfLifeDamages(const FHitResult& impact){ }
void AFGProjectile::DealImpactDamages(const FHitResult& impact){ }
void AFGProjectile::DisableAndSetLifeSpan(){ }
void AFGProjectile::OnRep_Exploded(){ }
void AFGProjectile::OnExplode_Implementation(){ }
bool AFGProjectile::AttachProjectileToImpactActor(const FHitResult& impact){ return bool(); }
void AFGProjectile::OnRep_InitialVelocity(){ }
void AFGProjectile::OnRep_TargetActor(){ }
void AFGProjectile::OnRep_TargetLocation(){ }
void AFGProjectile::OnRep_IsHomingProjectile(){ }
void AFGProjectile::OnRep_MaxHomingAccelerationMagnitude(){ }
