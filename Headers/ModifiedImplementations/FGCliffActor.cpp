// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCliffActor.h"

AFGCliffActorManager::AFGCliffActorManager(){ }
void AFGCliffActorManager::EnqueueTask(UWorld* World, FAsyncTask<class FFGAsyncCliffGrassBuilderTask>* inAsyncTask, AFGCliffActor* inActor){ }
void AFGCliffActorManager::Tick(float DeltaSeconds){ }
void AFGCliffActorManager::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
#if WITH_EDITOR
void AFGCliffActor::ConvertStaticMeshActorToOnTopMesh(AActor* SelectedActor, FString& ResultMsg){ }
void AFGCliffActor::UpdateAssociatedCliffActorsAndReParent(){ }
void AFGCliffActor::DebugSpawn(){ }
void AFGCliffActor::ClearDebugSpawn(){ }
void AFGCliffActor::ForceUpdateMeshCPUAccess(){ }
void AFGCliffActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent){ Super::PostEditChangeProperty(PropertyChangedEvent); }
#endif 
AFGCliffActor::AFGCliffActor(){ }
void AFGCliffActor::BeginPlay(){ }
void AFGCliffActor::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGCliffActor::OnConstruction(const FTransform& Transform){ }
void AFGCliffActor::GainedSignificance_Implementation(){ }
void AFGCliffActor::LostSignificance_Implementation(){ }
float AFGCliffActor::GetSignificanceRange(){ return float(); }
FFGCliffGrassWorker::FFGCliffGrassWorker(AFGCliffActor* inCliffActor, UFoliageType* inType,float inMultiplier, UHierarchicalInstancedStaticMeshComponent* inHISMComponent){ }
void FFGCliffGrassWorker::DoWork(){ }
void FFGAsyncCliffGrassBuilderTask::DoWork(){ }
FFGAsyncCliffGrassBuilderTask::~FFGAsyncCliffGrassBuilderTask(){ }
