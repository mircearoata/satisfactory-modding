// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFoliageRemovalSubsystem.h"

AFGFoliageRemovalSubsystem::AFGFoliageRemovalSubsystem(){ }
void AFGFoliageRemovalSubsystem::Destroyed(){ }
void AFGFoliageRemovalSubsystem::Init(){ }
AFGFoliageRemovalSubsystem* AFGFoliageRemovalSubsystem::Get(UWorld* world){ return nullptr; }
AFGFoliageRemovalSubsystem* AFGFoliageRemovalSubsystem::GetFoliageRemovalSubsystem(UObject* worldContext){ return nullptr; }
AFGFoliageRemoval* AFGFoliageRemovalSubsystem::GetFoliageRemovalActor( UHierarchicalInstancedStaticMeshComponent* fromComponent) const{ return nullptr; }
AFGFoliageRemoval* AFGFoliageRemovalSubsystem::GetFoliageRemovalActor(const FName& levelName, const FName& foliageTypeName) const{ return nullptr; }
bool AFGFoliageRemovalSubsystem::GetLookAtFoliage(const FVector& viewLocation, const FVector& endViewLocation, TSubclassOf<class UFGFoliageIdentifier> foliageIdentifier,  UHierarchicalInstancedStaticMeshComponent*& out_component, int32& out_instanceId, FVector& out_instanceLocation){ return bool(); }
bool AFGFoliageRemovalSubsystem::GetClosestFoliage(const FVector& location, float maxDistance, TSubclassOf<class UFGFoliageIdentifier> foliageIdentifier,  UHierarchicalInstancedStaticMeshComponent*& out_component, bool isLocalSpace, int32& out_instanceId, FVector& out_instanceLocation, TEnumAsByte<EProximityEffectTypes> &out_Type){ return bool(); }
bool AFGFoliageRemovalSubsystem::GetFoliageAroundLocationOfGivenTypes(const FVector& location, float maxDistance, TSubclassOf<class UFGFoliageIdentifier> foliageIdentifier, TArray<TEnumAsByte<EProximityEffectTypes>> desiredTypes,  UHierarchicalInstancedStaticMeshComponent*& out_component, int32& out_instanceId, FVector& out_instanceLocation, TEnumAsByte<EProximityEffectTypes> &out_Type){ return bool(); }
bool AFGFoliageRemovalSubsystem::GetClosestFoliageForComponent(const FVector& location, float maxDistance, const  UHierarchicalInstancedStaticMeshComponent* component, bool isLocalSpace, int32& out_instanceId, FVector& out_instanceLocation){ return bool(); }
void AFGFoliageRemovalSubsystem::GetClosestFoliageArrayForComponent(const TArray<FVector>& locations, float maxDistance, const  UHierarchicalInstancedStaticMeshComponent* component, bool isLocalSpace, TArray<int32>& out_instanceArray){ }
bool AFGFoliageRemovalSubsystem::IsFoliageComponentInACave(UHierarchicalInstancedStaticMeshComponent* TestComponent){ return bool(); }
bool AFGFoliageRemovalSubsystem::GetFoliageWithinRadius(const FVector& location, float radius, bool isLocalSpace, TArray<int32>& out_instanceArray, TArray<FVector>& out_locationArray, TArray<class UHierarchicalInstancedStaticMeshComponent*>& out_componentArray){ return bool(); }
bool AFGFoliageRemovalSubsystem::HasIdentifier(const  UHierarchicalInstancedStaticMeshComponent* component, TSubclassOf<class UFGFoliageIdentifier> foliageIdentifier){ return bool(); }
void AFGFoliageRemovalSubsystem::Register( AFGFoliageRemoval* actor){ }
void AFGFoliageRemovalSubsystem::UnRegister( AFGFoliageRemoval* actor){ }
bool AFGFoliageRemovalSubsystem::IsRemovable( UFoliageType* foliageType) const{ return bool(); }
int32 AFGFoliageRemovalSubsystem::Stat_NumRemovedInstances() const{ return int32(); }
void AFGFoliageRemovalSubsystem::LevelFound(ULevel* level){ }
void AFGFoliageRemovalSubsystem::MarkAsLevelAsWithoutRemovableFoliage(const FName& levelName){ }
void AFGFoliageRemovalSubsystem::MarkAsLevelAsSpawnedRemovableFoliage(const FName& levelName){ }
bool AFGFoliageRemovalSubsystem::HasSpawnedFoliageActor(const FName& levelName) const{ return bool(); }
AFGFoliageRemoval* AFGFoliageRemovalSubsystem::SpawnFoliageRemovalActor(const FBox& levelBounds, const FName& levelName,  UFoliageType* foilageType,  UHierarchicalInstancedStaticMeshComponent* meshComponent){ return nullptr; }
void AFGFoliageRemovalSubsystem::OnLevelAddedToWorld(ULevel* inLevel, UWorld* inWorld){ }
void AFGFoliageRemovalSubsystem::OnLevelRemovedFromWorld(ULevel* inLevel, UWorld* inWorld){ }
void AFGFoliageRemovalSubsystem::RemoveFoliageFromLevel(ULevel* inLevel){ }
void AFGFoliageRemovalSubsystem::SetupFoliageRemovalsForLevel(ULevel* level){ }
void AFGFoliageRemovalSubsystem::RemoveComponentsInLevel(ULevel* level){ }
FName AFGFoliageRemovalSubsystem::GetLevelName(ULevel* level) const{ return FName(); }
FVector AFGFoliageRemovalSubsystem::GetLevelCenter(ULevel* level) const{ return FVector(); }
FBox AFGFoliageRemovalSubsystem::GetLevelBounds(ULevel* level) const{ return FBox(); }
