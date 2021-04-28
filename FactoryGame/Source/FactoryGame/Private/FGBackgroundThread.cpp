// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBackgroundThread.h"


DEFINE_LOG_CATEGORY(LogPoolSystem);
bool FPoolInstanceBase::ResolveHitResults(const TArray<FHitResult>& inHits, const TArray<UClass*>& classesToCheckAgainst, FVector& outHitLocation, float& inNearestDistance){ return bool(); }
#if 0
#endif 
void FPoolInstanceComponent::Claim(int32 EntryId){ }
bool FPoolInstanceComponent::Update(const TArray<FPoolItem*>& entries){ return bool(); }
void FPoolMeshComponent::Claim(int32 EntryId){ }
bool FPoolMeshComponent::Update(const TArray< FPoolItem* >& entries){ return bool(); }
void FPoolLightComponent::Claim(int32 EntryId){ }
bool FPoolLightComponent::Update(const TArray< FPoolItem* >& entries){ return bool(); }
#if WITH_EDITOR
#endif 
#if !UE_BUILD_SHIPPING
bool FFGBackgroundThread::CanRead() const{ return bool(); }
void FFGBackgroundThread::LockRead(){ }
void FFGBackgroundThread::UnlockRead(){ }
#endif 
FFGBackgroundThread::FFGBackgroundThread(UWorld* WorldContext){ }
FFGBackgroundThread::~FFGBackgroundThread(){ }
bool FFGBackgroundThread::Init(){ return bool(); }
uint32 FFGBackgroundThread::Run(){ return uint32(); }
void FFGBackgroundThread::Stop(){ }
void FFGBackgroundThread::EnsureCompletion(){ }
void FFGBackgroundThread::Cleanup(){ }
void FFGBackgroundThread::RegisterActor(AActor* NewActor, float instancePriority){ }
void FFGBackgroundThread::RemoveHandles(const TArray<FPoolHandle*> handlesToRemove, FVector actorLocation, UWorld *WorldContext){ }
void FFGBackgroundThread::UpdateItemStateViaHandle(FPoolHandle* &handleToUpdate, bool newStatus, UWorld *WorldContext){ }
void FFGBackgroundThread::UpdateItemStateViaHandle(TArray<FPoolHandle*> &handleToUpdate, bool newStatus, UWorld *WorldContext){ }
FFGBackgroundThread* FFGBackgroundThread::InitFactoryGameBackgroundThread(UWorld* WorldContext){ return nullptr; }
int32 FFGBackgroundThread::FindVisualTypeIndex(const FPoolItem* Item){ return int32(); }
void FFGBackgroundThread::Shutdown(UWorld* WorldContext){ }
void FFGBackgroundThread::ResolveHandles_internal(){ }
void FFGBackgroundThread::ResolveRegisterActor_internal(){ }
void FFGBackgroundThread::ResolveHandleStates_internal(){ }
void FFGBackgroundThread::ResolveUpdates_internal(){ }
void FFGBackgroundThread::ResolveEnvironmentAwareness_internal(){ }
void FFGBackgroundThread::CleanupTasks(){ }
void FFGBackgroundThread::UpdateBuckets(const FVector playerLocation){ }
void FFGBackgroundThread::UpdateRelevance(const FVector playerLocation, const FVector playerViewDirection, TArray<FPoolItem*> &Items){ }
void FFGBackgroundThread::InitializeDefaultPoolComponents(){ }
void FFGBackgroundThread::UpdateItems(TArray<FPoolItem*> &Bucket, const FVector pawnLocation, const FVector pawnForwardVector){ }
void FFGBackgroundThread::DumpDebug(){ }
void FFGBackgroundThread::RefreshScalabilityVariables(){ }
void FFGBackgroundThread::ApplyScalability(){ }
void APoolRoot::UpdateBuildingState( AFGBuildable* Building, int32 FlagsToSet){ }
void APoolRoot::DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos){ }
void APoolRoot::SetFlag(AFGBuildable* Buildable,  int32 Flags){ }
void APoolRoot::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
AFGDecorationTemplate::AFGDecorationTemplate(){ }
TArray< class UFGPoolableProxyComponentBase* > AFGDecorationTemplate::GetPoolAbleComponentsFromSubclass(const UClass* InActorClass){ return TArray<class UFGPoolableProxyComponentBase*>(); }
UFGPoolableProxyComponentBase::UFGPoolableProxyComponentBase(){ }
