// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "GetAmountOfTasksStartedByComp.h"


#define LOCTEXT_NAMESPACE "RuntimeVertexPaintAndDetection"

//-------------------------------------------------------

// Construct - Should be overriden by children

UGetAmountOfTasksStartedByComp::UGetAmountOfTasksStartedByComp() {

	FunctionReference.SetFromField<UFunction>(UVertexPaintFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UVertexPaintFunctionLibrary, GetAmountOfTasksStartedByComponent)), true);
}


//-------------------------------------------------------

// Expand Node - Should be overriden by children with their specific pin checks

void UGetAmountOfTasksStartedByComp::ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) {

	Super::ExpandNode(CompilerContext, SourceGraph);

	if (FindPinChecked(TEXT("paintComponent"))->LinkedTo.Num() == 0) {

		CompilerContext.MessageLog.Error(*LOCTEXT("paintComponent Missing Input!", "paintComponent Missing Input!").ToString());

		BreakAllNodeLinks();
		return;
	}
}


//-------------------------------------------------------

// Get Node Title - Should be overriden by children so they can set different title

FText UGetAmountOfTasksStartedByComp::GetNodeTitle(ENodeTitleType::Type TitleType) const {

	return LOCTEXT("Get Amount Of Tasks Started By Component", "Get Amount Of Tasks Started By Component");
}

#undef LOCTEXT_NAMESPACE