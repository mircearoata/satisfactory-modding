// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInteractActor.h"

AFGInteractActor::AFGInteractActor(){ }
void AFGInteractActor::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState){ }
void AFGInteractActor::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGInteractActor::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGInteractActor::IsUseable_Implementation() const{ return bool(); }
void AFGInteractActor::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGInteractActor::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGInteractActor::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
