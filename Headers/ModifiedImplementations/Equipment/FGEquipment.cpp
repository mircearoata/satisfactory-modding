// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGEquipment.h"

AFGEquipment::AFGEquipment(){ }
void AFGEquipment::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGEquipment::PreReplication(IRepChangedPropertyTracker & ChangedPropertyTracker){ }
void AFGEquipment::OnRep_AttachmentReplication(){ }
void AFGEquipment::BeginPlay(){ }
void AFGEquipment::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGEquipment::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGEquipment::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGEquipment::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGEquipment::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGEquipment::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGEquipment::NeedTransform_Implementation(){ return bool(); }
bool AFGEquipment::ShouldSave_Implementation() const{ return bool(); }
void AFGEquipment::Equip( AFGCharacterPlayer* character){ }
void AFGEquipment::UnEquip(){ }
void AFGEquipment::OnCharacterMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode, EMovementMode NewMovementMode, uint8 NewCustomMode){ }
void AFGEquipment::UpdatePrimitiveColors(){ }
void AFGEquipment::UpdateMaterialsFromCameraMode(){ }
void AFGEquipment::DisableEquipment(){ }
AFGCharacterPlayer* AFGEquipment::GetInstigatorCharacter() const{ return nullptr; }
void AFGEquipment::OnColorUpdate(int32 index){ }
bool AFGEquipment::IsLocalInstigator() const{ return bool(); }
bool AFGEquipment::ShouldSaveState() const{ return bool(); }
void AFGEquipment::SetAttachment( AFGEquipmentAttachment* newAttachment){ }
void AFGEquipment::SetSecondaryAttachment( AFGEquipmentAttachment* newAttachment){ }
void AFGEquipment::Server_UpdateAttachmentUseState_Implementation(int newUseState){ }
bool AFGEquipment::Server_UpdateAttachmentUseState_Validate(int newUseState){ return bool(); }
float AFGEquipment::AdjustDamage_Implementation(const float damageAmount, const  UDamageType* damageType,  AController* instigatedBy, AActor* damageCauser){ return float(); }
EEquipmentSlot AFGEquipment::GetEquipmentSlot(TSubclassOf< AFGEquipment > inClass){ return EEquipmentSlot(); }
void AFGEquipment::SpawnChildEquipment(){ }
bool AFGEquipment::ShouldShowStinger() const{ return bool(); }
void AFGEquipment::WasRemovedFromSlot_Implementation(){ }
void AFGEquipment::WasSlottedIn_Implementation( AFGCharacterPlayer* holder){ }
void AFGEquipment::GetSupportedConsumableTypes(TArray<TSubclassOf< UFGItemDescriptor >>& out_itemDescriptors) const{ }
int AFGEquipment::GetSelectedConsumableTypeIndex() const{ return int(); }
void AFGEquipment::SetSelectedConsumableTypeIndex(const int selectedIndex){ }
int32 AFGEquipment::GetMappingContextPriority() const{ return int32(); }
ECameraMode AFGEquipment::GetInstigatorCameraMode() const{ return ECameraMode(); }
void AFGEquipment::OnCameraModeChanged_Implementation(ECameraMode newCameraMode){ }
void AFGEquipment::OnInteractWidgetAddedOrRemoved( UFGInteractWidget* widget, bool added){ }
void AFGEquipment::PlayCameraAnimation( UCameraAnimationSequence* cameraAnimationSequence){ }
void AFGEquipment::Server_TriggerDefaultEquipmentActionEvent_Implementation(EDefaultEquipmentAction action, EDefaultEquipmentActionEvent actionEvent){ }
void AFGEquipment::TriggerDefaultEquipmentActionEvent(EDefaultEquipmentAction action, EDefaultEquipmentActionEvent actionEvent){ }
void AFGEquipment::HandleDefaultEquipmentActionEvent(EDefaultEquipmentAction action, EDefaultEquipmentActionEvent actionEvent){ }
void AFGEquipment::WasEquipped_Implementation(){ }
void AFGEquipment::WasUnEquipped_Implementation(){ }
void AFGEquipment::AddEquipmentHUD() const{ }
void AFGEquipment::RemoveEquipmentHUD() const{ }
void AFGEquipment::SetEquipmentTicks(bool inTick){ }
void AFGEquipment::AddEquipmentActionBindings(){ }
void AFGEquipment::ClearEquipmentActionBindings(){ }
bool AFGEquipment::CanAffordUse() const{ return bool(); }
void AFGEquipment::DidNotAffordUse_Implementation(){ }
void AFGEquipment::ChargeForUse(){ }
void AFGEquipment::Server_ChargeForUse_Implementation(){ }
bool AFGEquipment::Server_ChargeForUse_Validate(){ return bool(); }
void AFGEquipment::ChargeForUse_Internal(){ }
void AFGEquipment::OnChildEquipmentReplicated(){ }
void AFGEquipment::SetMappingContextApplied(bool applied){ }
void AFGEquipment::Input_DefaultPrimaryFire(const FInputActionValue& actionValue){ }
void AFGEquipment::Input_DefaultSecondaryFire(const FInputActionValue& actionValue){ }
