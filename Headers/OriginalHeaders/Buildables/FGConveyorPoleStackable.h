// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FGBuildablePole.h"
#include "FGConveyorPoleStackable.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API AFGConveyorPoleStackable : public AFGBuildablePole
{
	GENERATED_BODY()
public:
	AFGConveyorPoleStackable();
	
	/** Sets the connection component to be at correct height and registers */
	virtual void SetupConnectionComponent();
};
