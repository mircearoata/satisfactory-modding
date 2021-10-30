// This file has been automatically generated by the Unreal Header Implementation tool

#include "AI/FGEnemyController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Components/SceneComponent.h"

AFGEnemyController::AFGEnemyController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { 
	this->mUpdateAggroInterval = 1.0;
	this->mTimeToLoseAllAggro = 10.0;
	this->mAggroTargetsAggroMax = 0.0;
	this->mAggroBaseWeight = 1.0;
	this->mAggroAggroWeight = 1.0;
	this->mAggroDistanceWeight = 1.0;
	this->mTargetSwitchFactor = 0.3;
	this->mDefaultIgnoreCooldown = 5.0;
	this->mStaticIgnoreCooldown = 5.0;
	this->mAggroDistanceCurve = nullptr;
	this->mGainAggroThreshold = 0.0;
	this->mLoseAggroThreshold = -1.0;
	this->mCurrentAggroTarget = nullptr;
	this->mPanicIgnoreTime = 3.0;
	this->mDidCancelAggroTasks = false;
	this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent0"));
}
void AFGEnemyController::OnPossess(APawn* InPawn){ }
void AFGEnemyController::OnUnPossess(){ }
void AFGEnemyController::Destroyed(){ }
void AFGEnemyController::StartPanic_Implementation(){ }
void AFGEnemyController::RemoveAggroEntryByTarget(TScriptInterface< IFGAggroTargetInterface > target){ }
bool AFGEnemyController::IsOnIgnoreList(const TScriptInterface< IFGAggroTargetInterface > aggroTargetInterface) const{ return bool(); }
bool AFGEnemyController::ShouldAddAggroTarget(const TScriptInterface< IFGAggroTargetInterface > aggroTargetInterface) const{ return bool(); }
void AFGEnemyController::UpdateAggroTargets(float dt, bool fullCheck){ }
void AFGEnemyController::RemoveInvalidAggroTargets(){ }
void AFGEnemyController::FindAndAssignTarget(){ }
void AFGEnemyController::SetCurrentAggroTarget(TScriptInterface< IFGAggroTargetInterface > newAggroTargetInterface){ }
void AFGEnemyController::UpdateAggroTarget(TScriptInterface< IFGAggroTargetInterface > oldTarget, TScriptInterface< IFGAggroTargetInterface > newTarget){ }
void AFGEnemyController::OnAggroTargetUpdated_Implementation(){ }
void AFGEnemyController::OnAggroTargetRemoved(const TScriptInterface< IFGAggroTargetInterface > oldTarget){ }
void AFGEnemyController::AddNewAggroTarget(const TScriptInterface< IFGAggroTargetInterface > target){ }
void AFGEnemyController::AddToAggroByTarget(const TScriptInterface< IFGAggroTargetInterface > target, float damage){ }
float AFGEnemyController::GetAggroThreshold(){ return float(); }
bool AFGEnemyController::ShouldSwitchTarget(TScriptInterface< IFGAggroTargetInterface > newTarget){ return bool(); }
bool AFGEnemyController::IsValidTarget(TScriptInterface< IFGAggroTargetInterface > target){ return bool(); }
bool AFGEnemyController::CareIfCanSeeActor(AActor* target){ return bool(); }
bool AFGEnemyController::CanSeeActor(AActor* target){ return bool(); }
float AFGEnemyController::GetTargetingDesire(TScriptInterface< IFGAggroTargetInterface > aggroTarget){ return float(); }
void AFGEnemyController::SortMostDesirableAggroTargets(){ }
float AFGEnemyController::GetTargetingDesireFromAggroEntry(FAggroEntry outTarget){ return float(); }
void AFGEnemyController::UpdateAggroTargetsAggro(float dt){ }
void AFGEnemyController::UpdateAggroTargetsIgnored(float dt){ }
void AFGEnemyController::UpdateAggroTargetsDistance(){ }
void AFGEnemyController::UpdateAggroTargetsDesirabilities(){ }
float AFGEnemyController::GetBaseTargetingDesire(int32 aggroTargetIndex){ return float(); }
float AFGEnemyController::GetDistanceTargetingDesire(int32 aggroTargetIndex){ return float(); }
float AFGEnemyController::GetAggroTargetingDesire(int32 aggroTargetIndex){ return float(); }
TScriptInterface< IFGAggroTargetInterface > AFGEnemyController::FindMostDesirableAggroTarget(){ return TScriptInterface<IFGAggroTargetInterface>(); }
bool AFGEnemyController::IsIgnored(TScriptInterface< IFGAggroTargetInterface > target){ return bool(); }
void AFGEnemyController::SetIgnore(TScriptInterface< IFGAggroTargetInterface > target, EIgnore ignoreType, float seconds, bool force){ }
void AFGEnemyController::SetIgnoreByIndex(int32 index, EIgnore ignoreType, float seconds, bool force){ }
EIgnore AFGEnemyController::GetIgnoreStatus(TScriptInterface< IFGAggroTargetInterface > target, int32 targetIndex){ return EIgnore(); }
void AFGEnemyController::StartInitialAggroCollection(){ }
void AFGEnemyController::UpdateAggroAndFindAndAssignTarget(){ }
void AFGEnemyController::GatherAggroTargets(){ }
void AFGEnemyController::UpdateAttackPattern(){ }
void AFGEnemyController::CreatureDied(){ }
void AFGEnemyController::CancelAggroTasks(){ }
void AFGEnemyController::AggroTargetAdded(TScriptInterface< IFGAggroTargetInterface > aggroTarget){ }
void AFGEnemyController::AggroTargetRemoved(TScriptInterface< IFGAggroTargetInterface > aggroTarget){ }
void AFGEnemyController::SubscribeToPawnDamage(){ }
void AFGEnemyController::UnSubscribeToPawnDamage(){ }
void AFGEnemyController::OnPawnTakeDamage(AActor* damagedActor, float damageAmount, const  UDamageType* damageType,  AController* instigatedBy, AActor* damageCauser){ }
bool AFGEnemyController::IsTargetAllowed(AActor* targetActor){ return bool(); }
