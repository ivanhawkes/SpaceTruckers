#pragma once

#include "Engine/DataTable.h"
#include "Universe.generated.h"


UCLASS(BlueprintType, Blueprintable)
class SPACETRUCKERS_API UUniverse : public UDataAsset
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
