// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadSubsystem.h"

FTrackGraph::FTrackGraph(){ }
AFGRailroadSubsystem::AFGRailroadSubsystem(){ }
void AFGRailroadSubsystem::GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGRailroadSubsystem::Serialize( FArchive& ar){ Super::Serialize(ar ); }
void AFGRailroadSubsystem::BeginPlay(){ }
void AFGRailroadSubsystem::EndPlay( const EEndPlayReason::Type endPlayReason){ }
void AFGRailroadSubsystem::Tick( float dt){ }
void AFGRailroadSubsystem::DisplayDebug(  UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGRailroadSubsystem::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGRailroadSubsystem::PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGRailroadSubsystem::PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGRailroadSubsystem::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGRailroadSubsystem::GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects){ }
bool AFGRailroadSubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGRailroadSubsystem::ShouldSave_Implementation() const{ return bool(); }
AFGRailroadSubsystem* AFGRailroadSubsystem::Get( UWorld* world){ return nullptr; }
AFGRailroadSubsystem* AFGRailroadSubsystem::Get( UObject* worldContext){ return nullptr; }
void AFGRailroadSubsystem::AddRailroadVehicle( AFGRailroadVehicle* vehicle){ }
void AFGRailroadSubsystem::RemoveRailroadVehicle( AFGRailroadVehicle* vehicle){ }
void AFGRailroadSubsystem::CoupleTrains( AFGRailroadVehicle* parentVehicle, AFGRailroadVehicle* otherVehicle){ }
void AFGRailroadSubsystem::DecoupleTrains( AFGRailroadVehicle* firstVehicle, AFGRailroadVehicle* secondVehicle){ }
void AFGRailroadSubsystem::GetTrains( int32 trackID, TArray<  AFGTrain* >& out_trains) const{ }
void AFGRailroadSubsystem::GetAllTrains( TArray<  AFGTrain* >& out_trains) const{ }
FRailroadPathFindingResult AFGRailroadSubsystem::FindPathSync(  AFGLocomotive* locomotive,  AFGTrainStationIdentifier* station){ return FRailroadPathFindingResult(); }
FText AFGRailroadSubsystem::GenerateTrainStationName() const{ return FText(); }
bool AFGRailroadSubsystem::IsTrainStationNameAvailable( const FString& name) const{ return bool(); }
void AFGRailroadSubsystem::AddTrainStation(  AFGBuildableRailroadStation* station){ }
void AFGRailroadSubsystem::UpdateTrainStation(  AFGBuildableRailroadStation* station){ }
void AFGRailroadSubsystem::RemoveTrainStation(  AFGBuildableRailroadStation* station){ }
void AFGRailroadSubsystem::GetTrainStations( int32 trackID, TArray<  AFGTrainStationIdentifier* >& out_stations) const{ }
void AFGRailroadSubsystem::GetAllTrainStations( TArray<  AFGTrainStationIdentifier* >& out_stations) const{ }
void AFGRailroadSubsystem::UpdateCargoPlatformPowerConnection( int32 trackGraphID,  AFGBuildableTrainPlatformCargo* cargoPlatform){ }
float AFGRailroadSubsystem::MoveTrackPosition(  FRailroadTrackPosition& position, float delta){ return float(); }
void AFGRailroadSubsystem::AddTrack(  AFGBuildableRailroadTrack* track){ }
void AFGRailroadSubsystem::RemoveTrack(  AFGBuildableRailroadTrack* track){ }
void AFGRailroadSubsystem::TickTrackGraphs( float dt){ }
void AFGRailroadSubsystem::RefreshPlatformPowerConnectionsFromStation(  AFGBuildableRailroadStation* station,  UFGCircuitConnectionComponent* connectTo){ }
void AFGRailroadSubsystem::InitializeStationNames(){ }
AFGTrain* AFGRailroadSubsystem::CreateTrain( AFGRailroadVehicle* vehicle) const{ return nullptr; }
void AFGRailroadSubsystem::ReconnectTrainToThirdRail( AFGTrain* train){ }
EGraphAStarResult AFGRailroadSubsystem::FindPathSyncInternal( const FRailroadTrackPosition& start,
											const FRailroadTrackPosition& end,
											TArray< FRailroadGraphAStarPathPoint >& out_pathPoints) const{ return EGraphAStarResult(); }
void AFGRailroadSubsystem::PreTickPhysics( FPhysScene* physScene, uint32 sceneType, float dt){ }
void AFGRailroadSubsystem::UpdatePhysics( FPhysScene* physScene, uint32 sceneType, float dt){ }
void AFGRailroadSubsystem::UpdateSimulationData(  AFGTrain* train,  FTrainSimulationData& simData){ }
void AFGRailroadSubsystem::OnTrainOrderChanged(  AFGTrain* trainID){ }
void AFGRailroadSubsystem::MergeTrackGraphs( int32 first, int32 second){ }
int32 AFGRailroadSubsystem::CreateTrackGraph(){ return int32(); }
void AFGRailroadSubsystem::RemoveTrackGraph( int graphID){ }
void AFGRailroadSubsystem::AddTrackToGraph(  AFGBuildableRailroadTrack* track, int32 graphID){ }
int32 AFGRailroadSubsystem::GenerateUniqueTrackGraphID(){ return int32(); }
