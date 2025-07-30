#pragma once

#include "LocationNames.generated.h"


USTRUCT(BlueprintType)
struct FLocationNames : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;
};
