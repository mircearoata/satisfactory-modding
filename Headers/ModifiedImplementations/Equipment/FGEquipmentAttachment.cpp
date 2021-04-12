// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGEquipmentAttachment.h"

void AFGEquipmentAttachment::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
AFGEquipmentAttachment::AFGEquipmentAttachment() : Super() {
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bNetUseOwnerRelevancy = true;
	this->SetReplicates(true);
}
void AFGEquipmentAttachment::BeginPlay(){ }
void AFGEquipmentAttachment::Attach( AFGCharacterPlayer* character){ }
void AFGEquipmentAttachment::OnAttach_Implementation(){ }
void AFGEquipmentAttachment::Detach(){ }
void AFGEquipmentAttachment::OnDetach_Implementation(){ }
void AFGEquipmentAttachment::SetAttachmentUseState(int newUseState){ }
void AFGEquipmentAttachment::SetUseLocation(const FVector& newUseLocation){ }
void AFGEquipmentAttachment::PlayUseEffect_Implementation(FVector useLocation){ }
void AFGEquipmentAttachment::OnRep_UseLocationUpdated(){ }
void AFGEquipmentAttachment::OnRep_OnAnimationStateUpdated(){ }
void AFGEquipmentAttachment::SetAttachmentTicks(bool inTick){ }
