// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FGProjectile.h"
#include "FGDestructiveProjectile.generated.h"

/** Holds the information necessary for spawning destroyed effects after all overlap calculations */
USTRUCT()
struct FDestroyedFoliageEffectData
{
	GENERATED_BODY()

	FDestroyedFoliageEffectData() :
		SpawnLocation( FVector::ZeroVector ),
		DestroyedEffect( nullptr ),
		Priority( 0 )
	{}
	
	FDestroyedFoliageEffectData( FVector spawnLocation, UParticleSystem* destroyedEffect, int32 priority ) :
		SpawnLocation( spawnLocation ),
		DestroyedEffect( destroyedEffect ),
		Priority( priority )
	{}

	bool operator<( const FDestroyedFoliageEffectData& other ) const { return Priority > other.Priority; };

	UPROPERTY()
	FVector SpawnLocation;
	UPROPERTY()
	class UParticleSystem* DestroyedEffect;
	UPROPERTY()
	int32 Priority;
};

/**
 *  Base class for any projectile that should destroy foliage or actors
 *	@todo: Optimize to collect overlapped foliage if attached to a static actor so that we don't need to populate on detonate
 */
UCLASS()
class FACTORYGAME_API AFGDestructiveProjectile : public AFGProjectile
{
	GENERATED_BODY()
public:
	AFGDestructiveProjectile();

	FORCEINLINE class USphereComponent* GetDesctructionCollisionComponent() const { return mDestructionCollisionComp; }

	virtual void PopulateDestructionContainers();

protected:
	virtual void OnExplode_Implementation() override;

	/** Handle the destruction and removal of foliage */
	virtual void HandleFoliageDestruction( );

	/** Handle the destruction of actors that meet the criteria */
	virtual void HandleActorDestruction( );

protected:
	/** Collision Component used to determine which objects should be considered for destruction */
	UPROPERTY( EditDefaultsOnly, Category = "Desctruction" )
	class USphereComponent* mDestructionCollisionComp;

	/** Should actors implementing destructable interfaces be considered for destruction */
	UPROPERTY( EditDefaultsOnly, Category = "Destruction" )
	bool mDestroysRelevantActors;

	/** Should foliage be considered for destruction */
	UPROPERTY( EditDefaultsOnly, Category = "Destruction" )
	bool mDestroysFoliage;

	/** Any amount of particle systems over this limit will not be spawned */
	UPROPERTY( EditDefaultsOnly, Category = "Destruction" )
	int32 mMaxParticleSpawnsPerDetonation;

private:
	/** Holds a list of all overlapped foliage mesh components (HierarchicalInstancedStaticMesh) with the blast radius */
	TArray< class UHierarchicalInstancedStaticMeshComponent* > mOverlappedHISMComponents;

	/** Holds a list of all actors within the blast radius implementing IFGExplosiveDestructableInterface */
	TArray< AActor* > mRelevantOverlappedActors;
};
