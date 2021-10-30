// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FGBuildableFactoryBuilding.h"
#include "FGBuildablePillar.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API AFGBuildablePillar : public AFGBuildableFactoryBuilding
{
	GENERATED_BODY()
public:
	AFGBuildablePillar();

	const FVector& GetSize() const { return mSize; }

private:
	UPROPERTY( EditDefaultsOnly, Category = "Pillar" )
	FVector mSize;
};
