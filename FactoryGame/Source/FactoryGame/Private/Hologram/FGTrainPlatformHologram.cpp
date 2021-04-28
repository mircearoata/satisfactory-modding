// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGTrainPlatformHologram.h"

AFGTrainPlatformHologram::AFGTrainPlatformHologram(){ }
void AFGTrainPlatformHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGTrainPlatformHologram::BeginPlay(){ }
void AFGTrainPlatformHologram::ScrollRotate(int32 delta, int32 step){ }
void AFGTrainPlatformHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
AActor* AFGTrainPlatformHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID){ return nullptr; }
USceneComponent* AFGTrainPlatformHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void AFGTrainPlatformHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGTrainPlatformHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGTrainPlatformHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
int32 AFGTrainPlatformHologram::GetRotationStep() const{ return int32(); }
void AFGTrainPlatformHologram::CheckClearance(){ }
void AFGTrainPlatformHologram::OnHologramTransformUpdated(){ }
UFGTrainPlatformConnection* AFGTrainPlatformHologram::FindOverlappingConnectionComponent(const FVector& location, float actorOverlapRadius, float toleranceRadius, bool ignoreSelf, bool ignoreIsConnected) const{ return nullptr; }
