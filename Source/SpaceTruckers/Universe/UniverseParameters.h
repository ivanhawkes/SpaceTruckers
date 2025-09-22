#pragma once

#include "Engine/DataTable.h"
#include "UniverseParameters.generated.h"


UCLASS(BlueprintType, Blueprintable)
class SPACETRUCKERS_API UUniverseParameters : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName id;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    uint64 seed;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;
};
