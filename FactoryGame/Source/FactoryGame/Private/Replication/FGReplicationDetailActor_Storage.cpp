// This file has been automatically generated by the Unreal Header Implementation tool

#include "Replication/FGReplicationDetailActor_Storage.h"
#include "Components/SceneComponent.h"

AFGReplicationDetailActor_Storage::AFGReplicationDetailActor_Storage(){ 
	this->mStorageInventory = nullptr;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ReplicationDetailActor"));
}
void AFGReplicationDetailActor_Storage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGReplicationDetailActor_Storage::InitReplicationDetailActor( AFGBuildable* owningActor){ }
void AFGReplicationDetailActor_Storage::RemoveDetailActorFromOwner(){ }
void AFGReplicationDetailActor_Storage::FlushReplicationActorStateToOwner(){ }
bool AFGReplicationDetailActor_Storage::HasCompletedInitialReplication() const{ return bool(); }
