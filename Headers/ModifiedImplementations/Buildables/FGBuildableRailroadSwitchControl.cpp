// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableRailroadSwitchControl.h"

AFGBuildableRailroadSwitchControl::AFGBuildableRailroadSwitchControl(){ }
void AFGBuildableRailroadSwitchControl::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableRailroadSwitchControl::BeginPlay(){ }
void AFGBuildableRailroadSwitchControl::Destroyed(){ }
bool AFGBuildableRailroadSwitchControl::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildableRailroadSwitchControl::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGBuildableRailroadSwitchControl::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableRailroadSwitchControl::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGBuildableRailroadSwitchControl::IsUseable_Implementation() const{ return bool(); }
void AFGBuildableRailroadSwitchControl::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGBuildableRailroadSwitchControl::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGBuildableRailroadSwitchControl::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableRailroadSwitchControl::ToggleSwitchPosition(){ }
void AFGBuildableRailroadSwitchControl::OnSwitchPositionChanged(int32 newPosition, int32 numPositions){ }
void AFGBuildableRailroadSwitchControl::SetControlledConnection( UFGRailroadTrackConnectionComponent* controlledConnection){ }
void AFGBuildableRailroadSwitchControl::OnRep_SwitchData(){ }
