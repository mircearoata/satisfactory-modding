// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGStatisticsSubsystem.h"

AFGStatisticsSubsystem* AFGStatisticsSubsystem::Get(UWorld* world){ return nullptr; }
AFGStatisticsSubsystem* AFGStatisticsSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGStatisticsSubsystem::Stat_ConsumableConsumed(TSubclassOf<  UFGConsumableDescriptor > consumable, int32 numConsumed){ }
int32 AFGStatisticsSubsystem::Stat_GetNumConsumableConsumed(TSubclassOf<  UFGConsumableDescriptor > consumable){ return int32(); }
void AFGStatisticsSubsystem::Stat_CreatureKilled(TSubclassOf<  AFGCreature > creature, int32 numKilled){ }
int32 AFGStatisticsSubsystem::Stat_GetNumCreatureKilled(TSubclassOf<  AFGCreature > creature){ return int32(); }
void AFGStatisticsSubsystem::Stat_ItemsManuallyCrafted(TSubclassOf<  UFGItemDescriptor > itemDescriptor, int32 numCrafted){ }
int32 AFGStatisticsSubsystem::Stat_GetNumItemsManuallyCrafted(TSubclassOf<  UFGItemDescriptor > itemDescriptor){ return int32(); }
void AFGStatisticsSubsystem::Stat_ActorBuilt(TSubclassOf<  AActor > actor, int32 numBuilt){ }
void AFGStatisticsSubsystem::Stat_ActorDismantled(TSubclassOf<  AActor > actor, int32 numDismantled){ }
int32 AFGStatisticsSubsystem::Stat_GetNumActorsBuilt_Current(TSubclassOf<  AActor > actor){ return int32(); }
int32 AFGStatisticsSubsystem::Stat_GetNumActorsBuilt_CurrentMax(TSubclassOf<  AActor > actor){ return int32(); }
int32 AFGStatisticsSubsystem::Stat_GetNumActorsBuilt_Total(TSubclassOf<  AActor > actor){ return int32(); }
int32 AFGStatisticsSubsystem::Stat_GetNumActorsBuilt_TotalDismantled(TSubclassOf<  AActor > actor){ return int32(); }
void AFGStatisticsSubsystem::GetStatisticsDebugData(TArray<FString>& out_debugData){ }
