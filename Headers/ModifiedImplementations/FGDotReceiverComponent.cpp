// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDotReceiverComponent.h"

UFGDotReceiverComponent::UFGDotReceiverComponent(){ }
void UFGDotReceiverComponent::BeginPlay(){ }
void UFGDotReceiverComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction){ }
void UFGDotReceiverComponent::RegisterActiveDOT(TSubclassOf<  UFGDamageOverTime > DotClass, AActor* SourceActor){ }
void UFGDotReceiverComponent::UnregisterActiveDOT(TSubclassOf<  UFGDamageOverTime > DotClass, AActor* SourceActor){ }
void UFGDotReceiverComponent::ClearAllDOTs(){ }
FOnDotReceiverCreated UFGDotReceiverComponent::OnDOTReceiverCreated = FOnDotReceiverCreated();
