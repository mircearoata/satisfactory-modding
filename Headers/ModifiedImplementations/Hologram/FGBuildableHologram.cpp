// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableHologram.h"

void AFGBuildableHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
AFGBuildableHologram::AFGBuildableHologram(){ }
void AFGBuildableHologram::SetBuildableClass(TSubclassOf<  AFGBuildable > buildableClass){ }
void AFGBuildableHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
bool AFGBuildableHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGBuildableHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGBuildableHologram::AdjustForGround(const FHitResult& hitResult, FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
AActor* AFGBuildableHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID){ return nullptr; }
void AFGBuildableHologram::ScrollRotate(int32 delta, int32 step){ }
USceneComponent* AFGBuildableHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void AFGBuildableHologram::CheckValidPlacement(){ }
int32 AFGBuildableHologram::GetRotationStep() const{ return int32(); }
void AFGBuildableHologram::SnapToFloor( AFGBuildable* floor, FVector& location, FRotator& rotation){ }
void AFGBuildableHologram::SnapToFoundationSide( AFGBuildableFoundation* foundation, const FVector& localSideNormal, FVector& location, FRotator& rotation){ }
void AFGBuildableHologram::SnapToWall( AFGBuildableWall* wall,
	    const FVector& aimDirection,
	    const FVector& aimLocation,
	    EAxis::Type snapAxis,
	    const FVector& snapOffsetOnWall,
	    float snapRotationOnWall,
	    FVector& out_location,
	    FRotator& out_rotation){ }
void AFGBuildableHologram::CheckValidFloor(){ }
void AFGBuildableHologram::CheckClearance(){ }
bool AFGBuildableHologram::CheckClearanceForPrimitive(UPrimitiveComponent* comp, const FComponentQueryParams& params , bool allowSnapAndMoveAlongBuildings){ return bool(); }
bool AFGBuildableHologram::CheckClearanceForShapeSimple( FCollisionShape& shape, FTransform transform, ECollisionChannel chanel, const FComponentQueryParams& params){ return bool(); }
void AFGBuildableHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGBuildableHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGBuildableHologram::ConfigureBuildEffect( AFGBuildable* inBuildable){ }
void AFGBuildableHologram::SetupClearance( UBoxComponent* boxComponent){ }
void AFGBuildableHologram::SetMaterial( UMaterialInterface* material){ }
void AFGBuildableHologram::SetupFactoryConnectionMesh( UFGFactoryConnectionComponent* connectionComponent){ }
void AFGBuildableHologram::SetupPowerConnectionMesh( UFGPowerConnectionComponent* connectionComponent){ }
void AFGBuildableHologram::SetupPipeConnectionMesh( UFGPipeConnectionComponentBase* connectionComponent){ }
bool AFGBuildableHologram::ApplyBuildingClearnaceSnapping(FRotator& newRotation, FVector& newLocation, AFGBuildable* snapTarget, FVector traceStart, FVector traceEnd){ return bool(); }
FName AFGBuildableHologram::mInputConnectionMeshTag = FName();
FName AFGBuildableHologram::mOutputConnectionMeshTag = FName();
FName AFGBuildableHologram::mNeutralConnectionMeshTag = FName();
FName AFGBuildableHologram::mClearanceComponentName = FName();
FName AFGBuildableHologram::mPowerConnectionMeshTag = FName();
