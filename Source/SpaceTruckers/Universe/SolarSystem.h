#pragma once

#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "SolarSystem.generated.h"


USTRUCT(BlueprintType)
struct FSolarSystem : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName id;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FTransform transform;
};
