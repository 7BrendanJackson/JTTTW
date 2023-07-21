// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved.


#include "GetPhysMatUsingPhysicsSurface.h"


#define LOCTEXT_NAMESPACE "RuntimeVertexPaintAndDetection"

//-------------------------------------------------------

// Construct - Should be overriden by children

UGetPhysMatUsingPhysicsSurface::UGetPhysMatUsingPhysicsSurface() {

	FunctionReference.SetFromField<UFunction>(UVertexPaintFunctionLibrary::StaticClass()->FindFunctionByName(GET_FUNCTION_NAME_CHECKED(UVertexPaintFunctionLibrary, GetPhysicalMaterialUsingPhysicsSurface_Wrapper)), true);
}


//-------------------------------------------------------

// Expand Node - Should be overriden by children with their specific pin checks

void UGetPhysMatUsingPhysicsSurface::ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) {

	Super::ExpandNode(CompilerContext, SourceGraph);

	if (FindPinChecked(TEXT("WorldContextObject"))->LinkedTo.Num() == 0) {

		CompilerContext.MessageLog.Error(*LOCTEXT("WorldContextObject Missing Input!", "WorldContextObject Missing Input!").ToString());

		BreakAllNodeLinks();
		return;
	}
}


//-------------------------------------------------------

// Get Node Title - Should be overriden by children so they can set different title

FText UGetPhysMatUsingPhysicsSurface::GetNodeTitle(ENodeTitleType::Type TitleType) const {

	return LOCTEXT("Get Physical Material Using Physics Surface", "Get Physical Material Using Physics Surface");
}

#undef LOCTEXT_NAMESPACE