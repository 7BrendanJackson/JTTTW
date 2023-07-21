// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "GetCalculateColorsTasksAmount.h"


#define LOCTEXT_NAMESPACE "RuntimeVertexPaintAndDetection"

//-------------------------------------------------------

// Construct - Should be overriden by children

UGetCalculateColorsTasksAmount::UGetCalculateColorsTasksAmount() {

	FunctionReference.SetFromField<UFunction>(UVertexPaintFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UVertexPaintFunctionLibrary, GetCalculateColorsPaintTasksAmount_Wrapper)), true);
}


//-------------------------------------------------------

// Expand Node - Should be overriden by children with their specific pin checks

void UGetCalculateColorsTasksAmount::ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) {

	Super::ExpandNode(CompilerContext, SourceGraph);

	if (FindPinChecked(TEXT("WorldContextObject"))->LinkedTo.Num() == 0) {

		CompilerContext.MessageLog.Error(*LOCTEXT("WorldContextObject Missing Input!", "WorldContextObject Missing Input!").ToString());

		BreakAllNodeLinks();
		return;
	}
}


//-------------------------------------------------------

// Get Node Title - Should be overriden by children so they can set different title

FText UGetCalculateColorsTasksAmount::GetNodeTitle(ENodeTitleType::Type TitleType) const {

	return LOCTEXT("Get Calculate Colors Paint Tasks Amount", "Get Calculate Colors Paint Tasks Amount");
}

#undef LOCTEXT_NAMESPACE