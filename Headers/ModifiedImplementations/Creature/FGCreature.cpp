// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCreature.h"

void UFGCreatureInterruptTest::Initialize(APawn* pawn, AController* controller, UFGAction* ownerAction){ }
void UFGCreatureInterruptTest::Initialize(AFGCreature* creature, AFGCreatureController* controller){ }
#if WITH_EDITOR
void AFGCreature::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent){ Super::PostEditChangeProperty(PropertyChangedEvent); }
#endif 
AFGCreature::AFGCreature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }
void AFGCreature::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGCreature::BeginPlay(){ }
void AFGCreature::PreInitializeComponents(){ Super::PreInitializeComponents(); }
void AFGCreature::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGCreature::OnConstruction(const FTransform& Transform){ }
void AFGCreature::PostLoad(){ Super::PostLoad(); }
void AFGCreature::PossessedBy(AController* NewController){ }
void AFGCreature::UnPossessed(){ }
void AFGCreature::BeginDestroy(){ Super::BeginDestroy(); }
void AFGCreature::GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const{ }
void AFGCreature::RenameActionArrayEntries(){ }
bool AFGCreature::IsReadyToDespawn() const{ return bool(); }
bool AFGCreature::ShouldSave_Implementation() const{ return bool(); }
void AFGCreature::Died(AActor* died){ }
FVector AFGCreature::GetPawnViewLocation() const{ return FVector(); }
UFGCreatureMovementComponent* AFGCreature::GetCreatureCharacterMovement() const{ return nullptr; }
bool AFGCreature::GetAdjustedNavAgentProps(FNavAgentProperties& out_navAgentProps) const{ return bool(); }
void AFGCreature::ConfigureArachnophobiaMode_Implementation(bool isArachnophobiaMode){ }
void AFGCreature::OnArachnophobiaModeChanged(bool isArachnophobiaMode){ }
void AFGCreature::Multicast_ConsumeItem_Implementation(TSubclassOf<  UFGItemDescriptor > itemDescriptor, int32 amount){ }
void AFGCreature::SetMoveSpeed(EMoveSpeed newMoveSpeedType){ }
void AFGCreature::SpawnDeathItem_Implementation(){ }
UBehaviorTree* AFGCreature::GetOverrideBehaviorTreeForState(ECreatureState state) const{ return nullptr; }
bool AFGCreature::HasOverriddenBehaviorState(ECreatureState State) const{ return bool(); }
bool AFGCreature::IsCreatureStateEnabled(ECreatureState State) const{ return bool(); }
TArray<UFGAction*> AFGCreature::GetAvailableActionsForState(ECreatureState state){ return TArray<UFGAction*>(); }
TArray<UFGAction*> AFGCreature::GetAllCreatureActions() const{ return TArray<UFGAction*>(); }
void AFGCreature::ClearKillOrphanTimer(){ }
bool AFGCreature::CanBeStunned() const{ return bool(); }
bool AFGCreature::CanBeStunnedByDamage() const{ return bool(); }
void AFGCreature::BeginStun(float stunDuration){ }
void AFGCreature::EndStun(){ }
void AFGCreature::SetIsPersistent(bool persistent){ }
void AFGCreature::SetEnabled(EEnabled enabled){ }
void AFGCreature::OnRep_IsEnabled(){ }
void AFGCreature::OnRep_IsStunned(){ }
void AFGCreature::OnCreatureStateChanged( AFGCreatureController* creatureController, ECreatureState previousState, ECreatureState newState){ }
