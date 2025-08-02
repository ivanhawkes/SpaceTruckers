#pragma once

#include "NameList.generated.h"


USTRUCT(BlueprintType)
struct FNameList : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;
};
