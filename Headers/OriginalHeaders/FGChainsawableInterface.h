// Copyright 2016-2018 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGChainsawableInterface.generated.h"

/**
* For blueprint support of the interface, we will never add anything to it, just use it to
* have a UCLASS to be able to access
*/
UINTERFACE( Blueprintable )
class UFGChainsawableInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * Actors attached that implement this interface will be considered by the chainsaw to be chainsawable.
 */
class IFGChainsawableInterface
{
	GENERATED_IINTERFACE_BODY()

	/* @returns true if this thing is chainsawable */
	UFUNCTION( BlueprintNativeEvent, Category = "Chainsaw" )
	bool IsChainsawable();

	/* @returns true if this thing is chainsawable */
	UFUNCTION( BlueprintNativeEvent, Category = "Chainsaw" )
	UStaticMeshComponent* GetMeshComponent();

	/* @returns the items you get for chainsawing this actor */
	UFUNCTION( BlueprintNativeEvent, Category = "Chainsaw" )
	FInventoryStack GetActorChainsawReturn();
};
