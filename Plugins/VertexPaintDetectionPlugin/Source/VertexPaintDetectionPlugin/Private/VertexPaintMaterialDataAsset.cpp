// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "VertexPaintMaterialDataAsset.h"


//-------------------------------------------------------

// Is Material Added To Paint On Material Data Asset

bool UVertexPaintMaterialDataAsset::IsMaterialAddedToPaintOnMaterialDataAsset(TSoftObjectPtr<UMaterialInterface> material) {

	if (!material) return false;

	TArray<TSoftObjectPtr<UMaterialInterface>> storedMaterialsTemp;
	GetVertexPaintMaterialInterface().GenerateKeyArray(storedMaterialsTemp);

	// When moving materials around to different folder, we couldn't do a simple .Contains() since it didn't return true eventhough the data asset had updated the material to the latest path. So we had to restrt the editor. This fixes that issue without having to load the material. 
	for (auto materialsTemp : storedMaterialsTemp) {

		if (materialsTemp.ToSoftObjectPath().ToString() == material.ToSoftObjectPath().ToString())
			return true;
	}

	// return GetVertexPaintMaterialInterface().Contains(material);

	return false;
}

void UVertexPaintMaterialDataAsset::RemoveFromVertexPaintMaterialInterface(TSoftObjectPtr<UMaterialInterface> material) {


	// if (vertexPaintMaterialInterfaces.Contains(material))
	
	// NOTE Doesn't have a .Contains check here because then we can't remove it if the material was Forced deleted and the TMap had null
	vertexPaintMaterialInterfaces.Remove(material);
}

