// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGBlueprintHologram.h"

AFGBlueprintHologram::AFGBlueprintHologram(){ }
void AFGBlueprintHologram::BeginPlay(){ }
AActor* AFGBlueprintHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID NetConstructionID){ return nullptr; }
void AFGBlueprintHologram::PreHologramPlacement(const FHitResult& hitResult){ }
void AFGBlueprintHologram::PostHologramPlacement(const FHitResult& hitResult){ }
int32 AFGBlueprintHologram::GetRotationStep() const{ return int32(); }
bool AFGBlueprintHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGBlueprintHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGBlueprintHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGBlueprintHologram::CheckCanAfford(UFGInventoryComponent* inventory){ }
TArray< FItemAmount > AFGBlueprintHologram::GetCost(bool includeChildren) const{ return TArray<FItemAmount>(); }
void AFGBlueprintHologram::GetSupportedBuildModes_Implementation(TArray< TSubclassOf< UFGBuildGunModeDescriptor > >& out_buildmodes) const{ }
bool AFGBlueprintHologram::ShouldActorBeConsideredForGuidelines( AActor* actor) const{ return bool(); }
bool AFGBlueprintHologram::ShouldBuildGunHitProxies() const{ return bool(); }
void AFGBlueprintHologram::LoadBlueprintToOtherWorld(){ }
void AFGBlueprintHologram::DuplicateMeshComponentsFromBuildableArray(const TArray< AFGBuildable* >& buildables){ }
void AFGBlueprintHologram::GenerateCollisionObjects(const TArray< AFGBuildable* >& buildables){ }
void AFGBlueprintHologram::CreateConnectionRepresentations(const TArray<AFGBuildable*>& buildables){ }
void AFGBlueprintHologram::AlignBuildableRootWithBounds(){ }
USceneComponent* AFGBlueprintHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName, const FName& attachSocketName){ return nullptr; }
void AFGBlueprintHologram::RegisterCustomBuildableVisualization(TSubclassOf<AFGBuildable> inBuildable, const FCreateBuildableVisualizationDelegate& inDelegate){ }
bool AFGBlueprintHologram::FindCustomVisualizer(TSubclassOf<AFGBuildable> buildableClass, FCreateBuildableVisualizationDelegate& outVisualizer){ return bool(); }
