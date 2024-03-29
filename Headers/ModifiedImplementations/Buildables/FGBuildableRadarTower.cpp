// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableRadarTower.h"

AFGBuildableRadarTower::AFGBuildableRadarTower(){ }
void AFGBuildableRadarTower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableRadarTower::BeginPlay(){ }
void AFGBuildableRadarTower::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
bool AFGBuildableRadarTower::AddAsRepresentation(){ return bool(); }
bool AFGBuildableRadarTower::UpdateRepresentation(){ return bool(); }
bool AFGBuildableRadarTower::RemoveAsRepresentation(){ return bool(); }
bool AFGBuildableRadarTower::IsActorStatic(){ return bool(); }
FVector AFGBuildableRadarTower::GetRealActorLocation(){ return FVector(); }
FRotator AFGBuildableRadarTower::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGBuildableRadarTower::GetActorRepresentationTexture(){ return nullptr; }
FText AFGBuildableRadarTower::GetActorRepresentationText(){ return FText(); }
void AFGBuildableRadarTower::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGBuildableRadarTower::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGBuildableRadarTower::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGBuildableRadarTower::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGBuildableRadarTower::GetActorShouldShowInCompass(){ return bool(); }
bool AFGBuildableRadarTower::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGBuildableRadarTower::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGBuildableRadarTower::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGBuildableRadarTower::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGBuildableRadarTower::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
void AFGBuildableRadarTower::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableRadarTower::Factory_StartProducing(){ }
void AFGBuildableRadarTower::Factory_StopProducing(){ }
void AFGBuildableRadarTower::Factory_TickProducing(float dt){ }
void AFGBuildableRadarTower::ScanForResources(){ }
void AFGBuildableRadarTower::AddResourceNodes(const TArray<  AFGResourceNodeBase* >& resourceNodes){ }
void AFGBuildableRadarTower::ClearScannedResources(){ }
void AFGBuildableRadarTower::ScanForObjects(){ }
void AFGBuildableRadarTower::TryRemovePickup(AActor* removedActor){ }
void AFGBuildableRadarTower::TryAddCreatureSpawner( AFGCreatureSpawner* creatureSpawner){ }
void AFGBuildableRadarTower::TryRemoveCreatureSpawner( AFGCreatureSpawner* creatureSpawner){ }
void AFGBuildableRadarTower::TryRemoveDropPod( AFGDropPod* dropPod){ }
void AFGBuildableRadarTower::OnNewScannableObjectUnlocked(TSubclassOf<  UFGItemDescriptor > itemDescriptor){ }
TArray<TSubclassOf<UFGItemDescriptor>> AFGBuildableRadarTower::GetAvailableScannableDescriptors() const{ return TArray<TSubclassOf<UFGItemDescriptor>>(); }
bool AFGBuildableRadarTower::IsInRadarTowerRange(const FVector& location) const{ return bool(); }
void AFGBuildableRadarTower::UpdateRepresentationValues(){ }
