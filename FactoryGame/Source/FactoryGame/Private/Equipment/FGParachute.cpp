// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGParachute.h"
#include "Equipment/FGEquipment.h"

UFGParachuteCameraShake::UFGParachuteCameraShake(){ 
	this->OscillationDuration = 2.1;
	this->OscillationBlendInTime = 0.15;
	this->OscillationBlendOutTime = 1.8;
	this->RotOscillation.Pitch.Amplitude = 16.0;
	this->RotOscillation.Pitch.Frequency = 3.0;
	this->RotOscillation.Pitch.InitialOffset = EInitialOscillatorOffset::EOO_OffsetRandom;
	this->RotOscillation.Pitch.Waveform = EOscillatorWaveform::SineWave;
	this->RotOscillation.Yaw.Amplitude = 5.0;
	this->RotOscillation.Yaw.Frequency = 5.0;
	this->RotOscillation.Yaw.InitialOffset = EInitialOscillatorOffset::EOO_OffsetRandom;
	this->RotOscillation.Yaw.Waveform = EOscillatorWaveform::SineWave;
	this->RotOscillation.Roll.Amplitude = 5.0;
	this->RotOscillation.Roll.Frequency = 2.0;
	this->RotOscillation.Roll.InitialOffset = EInitialOscillatorOffset::EOO_OffsetRandom;
	this->RotOscillation.Roll.Waveform = EOscillatorWaveform::SineWave;
	this->LocOscillation.X.Amplitude = 6.0;
	this->LocOscillation.X.Frequency = 7.0;
	this->LocOscillation.X.InitialOffset = EInitialOscillatorOffset::EOO_OffsetRandom;
	this->LocOscillation.X.Waveform = EOscillatorWaveform::SineWave;
	this->LocOscillation.Y.Amplitude = 6.0;
	this->LocOscillation.Y.Frequency = 7.0;
	this->LocOscillation.Y.InitialOffset = EInitialOscillatorOffset::EOO_OffsetRandom;
	this->LocOscillation.Y.Waveform = EOscillatorWaveform::SineWave;
	this->LocOscillation.Z.Amplitude = 9.0;
	this->LocOscillation.Z.Frequency = 4.0;
	this->LocOscillation.Z.InitialOffset = EInitialOscillatorOffset::EOO_OffsetRandom;
	this->LocOscillation.Z.Waveform = EOscillatorWaveform::SineWave;
	this->bSingleInstance = true;
}
AFGParachute::AFGParachute(){ 
	this->mTerminalVelocityZ = 100.0;
	this->mIsDeployed = false;
	this->mCachedMovementComponent = nullptr;
	this->mEquipmentSlot = EEquipmentSlot::ES_BACK;
}
void AFGParachute::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGParachute::Tick(float DeltaSeconds){ }
void AFGParachute::Equip( AFGCharacterPlayer* character){ }
void AFGParachute::UnEquip(){ }
void AFGParachute::Deploy(){ }
void AFGParachute::Server_Deploy_Implementation(){ }
bool AFGParachute::Server_Deploy_Validate(){ return bool(); }
FVector AFGParachute::ModifyVelocity_Implementation(float deltaTime, const FVector& oldVelocity){ return FVector(); }
void AFGParachute::AddEquipmentActionBindings(){ }
void AFGParachuteAttachment::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGParachuteAttachment::SetIsDeployed(bool newIsDeployed){ }
void AFGParachuteAttachment::OnRep_IsDeployed(){ }
