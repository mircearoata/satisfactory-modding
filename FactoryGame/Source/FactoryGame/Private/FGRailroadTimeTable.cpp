// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadTimeTable.h"

AFGRailroadTimeTable::AFGRailroadTimeTable(){ 
	this->mCurrentStop = 0;
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
void AFGRailroadTimeTable::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGRailroadTimeTable::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGRailroadTimeTable::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGRailroadTimeTable::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGRailroadTimeTable::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGRailroadTimeTable::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGRailroadTimeTable::NeedTransform_Implementation(){ return bool(); }
bool AFGRailroadTimeTable::ShouldSave_Implementation() const{ return bool(); }
bool AFGRailroadTimeTable::AddStop(int32 index, const FTimeTableStop& stop){ return bool(); }
void AFGRailroadTimeTable::RemoveStop(int32 index){ }
void AFGRailroadTimeTable::GetStops(TArray< FTimeTableStop >& out_stops) const{ }
bool AFGRailroadTimeTable::SetStops(const TArray< FTimeTableStop >& stops){ return bool(); }
bool AFGRailroadTimeTable::IsValidStop(int32 index) const{ return bool(); }
FTimeTableStop AFGRailroadTimeTable::GetStop(int32 index) const{ return FTimeTableStop(); }
void AFGRailroadTimeTable::IncrementCurrentStop(){ }
void AFGRailroadTimeTable::PurgeInvalidStops(){ }
void AFGRailroadTimeTable::GetDockingRuleSetForStop(int32 index, FTrainDockingRuleSet& out_ruleSet) const{ }
