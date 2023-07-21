// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VertexPaintDetectionStructs.h"
#include "Materials/MaterialInstanceConstant.h"
#include "VertexPaintMaterialDataAsset.generated.h"



/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintMaterialDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "If the Material is added in the paint on material TMap. Soft UMaterialInterface Ptr so it can be used with UMaterialInterface directly gotten from GetSoftPointerObjectsOfClass without resolving and casting, i.e. bringing them into memory. "))
		bool IsMaterialAddedToPaintOnMaterialDataAsset(TSoftObjectPtr<UMaterialInterface> material);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin")
		void RemoveFromVertexPaintMaterialInterface(TSoftObjectPtr<UMaterialInterface> material);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin")
		void AddToVertexPaintMaterialInterface(TSoftObjectPtr<UMaterialInterface> material, FVertexPaintMaterialDataAssetStruct materialDataAssetStruct) { vertexPaintMaterialInterfaces.Add(material, materialDataAssetStruct); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin")
		TMap<TSoftObjectPtr<UMaterialInterface>, FVertexPaintMaterialDataAssetStruct> GetVertexPaintMaterialInterface() { return vertexPaintMaterialInterfaces; }
	

private:

	// TMap of All Materials that uses Vertex Colors
	UPROPERTY(VisibleAnywhere, Category = "Runtime Vertex Color Paint and Detection Plugin")
		TMap<TSoftObjectPtr<UMaterialInterface>, FVertexPaintMaterialDataAssetStruct> vertexPaintMaterialInterfaces;
};
