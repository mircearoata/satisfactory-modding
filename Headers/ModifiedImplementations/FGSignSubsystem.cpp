// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSignSubsystem.h"

void UFGSignDataRemoteCallObject::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGSignDataRemoteCallObject::Server_RequestSignData_Implementation(FSignRPC_Data signRPCData){ }
void UFGSignDataRemoteCallObject::Client_RequestSignDataResponse_Implementation(FSignRPC_Data signRPCData){ }
void UFGSignDataRemoteCallObject::Server_SetSignData_Implementation(FClientSetSignData clientData){ }
void AFGSignSubsystem::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
AFGSignSubsystem* AFGSignSubsystem::Get(UWorld* world){ return nullptr; }
AFGSignSubsystem* AFGSignSubsystem::GetSignSubsystem(UObject* worldContext){ return nullptr; }
AFGSignSubsystem::AFGSignSubsystem(){ }
void AFGSignSubsystem::BeginPlay(){ }
void AFGSignSubsystem::Tick(float DeltaSeconds){ }
void AFGSignSubsystem::UpdateAndSortPendingSigns(){ }
void AFGSignSubsystem::AddWidgetSign(AFGBuildableWidgetSign* widgetSign){ }
void AFGSignSubsystem::RemoveWidgetSign(AFGBuildableWidgetSign* widgetSign){ }
void AFGSignSubsystem::NotifySignDataDirty(AFGBuildableWidgetSign* widgetSign){ }
void AFGSignSubsystem::AddPixelSign(AFGBuildablePixelSign* pixelSign){ }
void AFGSignSubsystem::RemovePixelSign(AFGBuildablePixelSign* pixelSign){ }
bool AFGSignSubsystem::DoesSamePresetExists(uint32 GUID, FMappedSignData*& OutData){ return bool(); }
void AFGSignSubsystem::RegisterNewPreset(AFGBuildableWidgetSign* Sign, uint32 GUID, UWidgetComponent* Widget, UMaterialInstanceDynamic* InMaterial){ }
void AFGSignSubsystem::SetNewRenderTarget(uint32 GUID, UTextureRenderTarget2D* InRenderTarget, TFunction<void(void)>&& UpdateFunction){ }
void AFGSignSubsystem::ResolveRemoved(AFGBuildableWidgetSign* Sign, uint32 GUID){ }
UWidgetComponent* AFGSignSubsystem::GetWidgetByGUID(uint32 GUID){ return nullptr; }
