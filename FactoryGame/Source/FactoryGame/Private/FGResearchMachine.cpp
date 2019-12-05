// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResearchMachine.h"

UFGResearchMachine::UFGResearchMachine(){ }
void UFGResearchMachine::GetLifetimeReplicatedProps( TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void UFGResearchMachine::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction){ }
void UFGResearchMachine::SetResearchRecipe( TSubclassOf<class UFGResearchRecipe> researchRecipe){ }
UStaticMeshComponent* UFGResearchMachine::GetResearchMeshComponent(){ return nullptr; }
void UFGResearchMachine::SetResearchMeshComponent( UStaticMeshComponent* staticMeshComponent){ }
void UFGResearchMachine::SetResearchMeshCurveScale( UCurveFloat* curveScale){ }
void UFGResearchMachine::OnResearchStarted( TSubclassOf<class UFGResearchRecipe> researchRecipe){ }
void UFGResearchMachine::OnResearchConcluded( TSubclassOf<class UFGResearchRecipe> researchRecipe){ }
void UFGResearchMachine::SetMachineUser(  AFGCharacterPlayer* player){ }
void UFGResearchMachine::BeginPlay(){ }
void UFGResearchMachine::OnRep_ResearchMesh(){ }