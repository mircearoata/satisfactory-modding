// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGItemDescAmmoTypeColorCartridge.h"

UFGItemDescAmmoTypeColorCartridge::UFGItemDescAmmoTypeColorCartridge(){ }
void UFGItemDescAmmoTypeColorCartridge::BeginDestroy(){ Super::BeginDestroy(); }
void UFGItemDescAmmoTypeColorCartridge::Tick(float DeltaTime){ }
TStatId UFGItemDescAmmoTypeColorCartridge::GetStatId() const{ return TStatId(); }
void UFGItemDescAmmoTypeColorCartridge::InitializeAmmoType_Implementation(AFGWeapon* Weapon){ Super::InitializeAmmoType_Implementation(Weapon); }
void UFGItemDescAmmoTypeColorCartridge::FireAmmunition_Implementation(){ Super::FireAmmunition_Implementation(); }
void UFGItemDescAmmoTypeColorCartridge::SetColorSlot(uint8 slotIndex){ }
uint8 UFGItemDescAmmoTypeColorCartridge::GetMaxNumColorSlots(){ return 0; }
uint8 UFGItemDescAmmoTypeColorCartridge::GetNumColorSlotsExposedToPlayers() const{ return 0; }
FFactoryCustomizationColorSlot UFGItemDescAmmoTypeColorCartridge::GetColorDataForSlot(uint8 slotIndex){ return FFactoryCustomizationColorSlot(); }
void UFGItemDescAmmoTypeColorCartridge::SetColorDataForSlot(uint8 slotIndex, FFactoryCustomizationColorSlot colorData){ }
void UFGItemDescAmmoTypeColorCartridge::SetPrimaryColorForSlot(uint8 slotIndex, FLinearColor newColor){ }
void UFGItemDescAmmoTypeColorCartridge::SetSecondaryColorForSlot(uint8 slotIndex, FLinearColor newColor){ }
FLinearColor UFGItemDescAmmoTypeColorCartridge::GetPrimaryColorForSlot(uint8 index) const{ return FLinearColor(); }
FLinearColor UFGItemDescAmmoTypeColorCartridge::GetSecondaryColorForSlot(uint8 index) const{ return FLinearColor(); }
void UFGItemDescAmmoTypeColorCartridge::ApplyCrosshairState() const{ }
EFGColorGunTargetType UFGItemDescAmmoTypeColorCartridge::FindIfValidColorTarget(){ return EFGColorGunTargetType(); }
void UFGItemDescAmmoTypeColorCartridge::ProcessInstantHit_Confirmed(const FHitResult& HitResult){ Super::ProcessInstantHit_Confirmed(HitResult); }
void UFGItemDescAmmoTypeColorCartridge::OnSecondaryFirePressed(){ }
void UFGItemDescAmmoTypeColorCartridge::Server_SetSecondaryColorForSlot_Implementation(uint8 slotIndex, FLinearColor newColor){ }
bool UFGItemDescAmmoTypeColorCartridge::Server_SetSecondaryColorForSlot_Validate(uint8 slotIndex, FLinearColor newColor){ return false; }
void UFGItemDescAmmoTypeColorCartridge::Server_SetPrimaryColorForSlot_Implementation(uint8 slotIndex, FLinearColor newColor){ }
bool UFGItemDescAmmoTypeColorCartridge::Server_SetPrimaryColorForSlot_Validate(uint8 slotIndex, FLinearColor newColor){ return false; }
void UFGItemDescAmmoTypeColorCartridge::Server_SetColorDataForSlot_Implementation(uint8 slotIndex, FFactoryCustomizationColorSlot colorData){ }
void UFGItemDescAmmoTypeColorCartridge::Server_SetColorSlot_Implementation(uint8 slotIndex){ }
bool UFGItemDescAmmoTypeColorCartridge::Server_SetColorSlot_Validate(uint8 slotIndex){ return false; }