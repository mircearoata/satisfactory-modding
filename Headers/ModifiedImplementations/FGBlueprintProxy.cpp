// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBlueprintProxy.h"

#if !UE_BUILD_SHIPPING
void AFGBlueprintProxy::DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos){ }
#endif 
AFGBlueprintProxy::AFGBlueprintProxy(){ }
void AFGBlueprintProxy::BeginPlay(){ }
void AFGBlueprintProxy::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBlueprintProxy::RegisterBuildable( AFGBuildable* buildable){ }
void AFGBlueprintProxy::UnregisterBuildable( AFGBuildable* buildable){ }
int32 AFGBlueprintProxy::CollectBuildables(TArray<  AFGBuildable* >& out_buildables) const{ return int32(); }
void AFGBlueprintProxy::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBlueprintProxy::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBlueprintProxy::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBlueprintProxy::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBlueprintProxy::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGBlueprintProxy::NeedTransform_Implementation(){ return bool(); }
bool AFGBlueprintProxy::ShouldSave_Implementation() const{ return bool(); }
bool AFGBlueprintProxy::CanDismantle_Implementation() const{ return bool(); }
void AFGBlueprintProxy::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund, bool noBuildCostEnabled) const{ }
FVector AFGBlueprintProxy::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const{ return FVector(); }
void AFGBlueprintProxy::PreUpgrade_Implementation(){ }
void AFGBlueprintProxy::Upgrade_Implementation(AActor* newActor){ }
void AFGBlueprintProxy::Dismantle_Implementation(){ }
void AFGBlueprintProxy::StartIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBlueprintProxy::StopIsLookedAtForDismantle_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBlueprintProxy::GetChildDismantleActors_Implementation(TArray< AActor* >& out_ChildDismantleActors) const{ }
void AFGBlueprintProxy::OnRep_BlueprintName(){ }
void AFGBlueprintProxy::OnRep_LocalBounds(){ }
void AFGBlueprintProxy::AssignBuildables(const TArray<  AFGBuildable* >& buildables){ }
