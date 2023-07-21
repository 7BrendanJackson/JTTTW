// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "VertexPaintFunctionWrapper.h"
#include "GetAmountOfTasksStartedByComp.generated.h"

/**
 * 
 */
UCLASS()
class VERTEXPAINTDETECTION_UNCOOKED_API UGetAmountOfTasksStartedByComp : public UVertexPaintFunctionWrapper
{
	GENERATED_BODY()
	
public:

	UGetAmountOfTasksStartedByComp();

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
};
