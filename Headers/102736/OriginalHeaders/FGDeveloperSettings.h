#pragma once

#include "FGActorRepresentation.h"
#include "FGDeveloperSettings.generated.h"

UCLASS( config = Game, defaultconfig, meta = ( DisplayName = "Satisfactory Developer Settings" ) )
class FACTORYGAME_API UFGDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY( EditAnywhere, config, Category = Focus, meta = ( ToolTip = "Should widgets grab focus back on focus lost in PIE" ) )
	bool mGreedyFocusInPIE;

};