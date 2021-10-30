// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "DamageTypes/FGDamageType.h"

AFGProjectile::AFGProjectile(){ 
	this->mRotatingMovementComp = nullptr;
	this->mThrowRotation.Pitch = 0.0;
	this->mThrowRotation.Yaw = 0.0;
	this->mThrowRotation.Roll = 0.0;
	this->mProjectileData.ProjectileClass = nullptr;
	this->mProjectileData.ProjectileLifeSpan = 10.0;
	this->mProjectileData.ProjectileStickSpan = 5.0;
	this->mProjectileData.ExplosionDamage = 100;
	this->mProjectileData.ExplosionRadius = 300.0;
	this->mProjectileData.ImpactDamage = 0;
	this->mProjectileData.ShouldExplodeOnImpact = true;
	this->mProjectileData.CanTriggerExplodeBySameClass = true;
	this->mProjectileData.ExplodeAtEndOfLife = false;
	this->mProjectileData.DamageType = UFGDamageType::StaticClass();
	this->mProjectileData.DamageTypeExplode = UFGDamageType::StaticClass();
	this->mProjectileData.DamageFalloffCurve.EditorCurveData.DefaultValue = 3.40282e+38;
	this->mProjectileData.DamageFalloffCurve.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mProjectileData.DamageFalloffCurve.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mProjectileData.DamageFalloffCurve.ExternalCurve = nullptr;
	this->mProjectileData.EffectiveRange = 0.0;
	this->mProjectileData.WeaponDamageMultiplier = 1.0;
	this->mInitialVelocity.X = 0.0;
	this->mInitialVelocity.Y = 0.0;
	this->mInitialVelocity.Z = 0.0;
	this->mTraveledDistance = 0.0;
	this->mCollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	this->mProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	this->mTargetLocation.X = 0.0;
	this->mTargetLocation.Y = 0.0;
	this->mTargetLocation.Z = 0.0;
	this->mCanTriggerExplodeBySameClass = false;
	this->mExplodeAtEndOfLife = false;
	this->mCachedPC = nullptr;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->SetReplicatingMovement(true);
	this->bReplicates = true;
	this->InitialLifeSpan = 3.0;
	this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
}
void AFGProjectile::Tick(float DeltaSeconds){ }
void AFGProjectile::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGProjectile::PostInitializeComponents(){ Super::PostInitializeComponents(); }
bool AFGProjectile::ShouldSave_Implementation() const{ return bool(); }
bool AFGProjectile::NeedTransform_Implementation(){ return bool(); }
float AFGProjectile::TakeDamage(float DamageAmount, const  FDamageEvent& DamageEvent,  AController* EventInstigator,
							AActor* DamageCauser){ return float(); }
void AFGProjectile::LifeSpanExpired(){ }
void AFGProjectile::OnImpact(const FHitResult& hitResult){ }
void AFGProjectile::OnBounce(const FHitResult& hitResult, const FVector& hitVelocity){ }
void AFGProjectile::SetProjectileData(FProjectileData projectileData){ }
void AFGProjectile::SetInitialVelocity(FVector inVelocity){ }
void AFGProjectile::TriggerSecondary(){ }
void AFGProjectile::TriggerSecondaryWithDelay(float delayTime){ }
void AFGProjectile::SetAndEnableRotation(float scale){ }
void AFGProjectile::DealExplosionDamage(const FHitResult& impact){ }
void AFGProjectile::DealImpactDamage(const FHitResult& impact){ }
void AFGProjectile::DisableAndSetLifeSpan(){ }
void AFGProjectile::OnRep_Exploded(){ }
void AFGProjectile::OnNotifiedExploded(){ }
bool AFGProjectile::AttachProjectileToImpactActor(const FHitResult& impact){ return bool(); }
void AFGProjectile::OnRep_InitialVelocity(){ }
