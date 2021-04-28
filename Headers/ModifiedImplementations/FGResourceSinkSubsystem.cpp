// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceSinkSubsystem.h"

AFGResourceSinkSubsystem::AFGResourceSinkSubsystem(){ }
void AFGResourceSinkSubsystem::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGResourceSinkSubsystem::BeginPlay(){ }
void AFGResourceSinkSubsystem::Tick(float DeltaSeconds){ }
void AFGResourceSinkSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
AFGResourceSinkSubsystem* AFGResourceSinkSubsystem::Get(UWorld* world){ return nullptr; }
AFGResourceSinkSubsystem* AFGResourceSinkSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGResourceSinkSubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
bool AFGResourceSinkSubsystem::AddPoints_ThreadSafe(TSubclassOf<class UFGItemDescriptor> item){ return bool(); }
int64 AFGResourceSinkSubsystem::GetNumPointsToNextCoupon() const{ return int64(); }
float AFGResourceSinkSubsystem::GetProgressionTowardsNextCoupon() const{ return float(); }
int32 AFGResourceSinkSubsystem::GetCostOfSchematics(TArray< TSubclassOf<  UFGSchematic > > schematics) const{ return int32(); }
bool AFGResourceSinkSubsystem::CanAffordResourceSinkSchematics(UFGInventoryComponent* playerInventory, TArray< TSubclassOf<  UFGSchematic > > schematics) const{ return bool(); }
bool AFGResourceSinkSubsystem::PurchaseResourceSinkSchematics( UFGInventoryComponent* playerInventory, TArray< TSubclassOf<  UFGSchematic > > schematics){ return bool(); }
void AFGResourceSinkSubsystem::AddResourceSinkCoupons(int32 numCoupons){ }
int32 AFGResourceSinkSubsystem::RemoveResourceSinkCoupons(int32 numCoupons){ return int32(); }
int32 AFGResourceSinkSubsystem::GetResourceSinkPointsForItem(TSubclassOf<  UFGItemDescriptor > itemDescriptor){ return int32(); }
void AFGResourceSinkSubsystem::HandleQueuedPoints(){ }
void AFGResourceSinkSubsystem::HandleQueuedFailedItems(){ }
void AFGResourceSinkSubsystem::InitCouponClass(){ }
void AFGResourceSinkSubsystem::CalculateLevel(){ }
int64 AFGResourceSinkSubsystem::GetRequiredPointsForLevel(int32 level) const{ return int64(); }
void AFGResourceSinkSubsystem::CalculateAccumulatedPointsPastInterval(){ }
void AFGResourceSinkSubsystem::TriggerCyberCoupon(){ }
