// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VertexPaintDetectionStructs.h"
#include "Components/StaticMeshComponent.h" // Had to include this here because of FPaintedVertex down below
#include "Serialization/JsonSerializer.h"
#include "VertexPaintFunctionLibrary.generated.h"

class UChaosWheeledVehicleMovementComponent;

/**
 *
 */
UCLASS()
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:


	//-------------------------------------------------------

	// Paint and Detect Types

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Detect", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets the Closest Vertex Data on  Static, Skeletal, or Spline Meshes such as Colors, Position and Normal. It can also return All of the Colors, Positions and Normals if set to do so in the callback settings, as well as Get Average Color within an Area, and the Estimated Color at Actual Hit Location. \nTrace Complex has to be True if doing a trace onto the mesh so we can get the faceIndex for Static Meshes! \ndetectWith is the source of the hit, for example Shoe, Bullet etc. and will just be returned in the Detected Delegate. \nIf Area of Effect is higher than 0, then you can get the Average Color and Physics Surface of that Area! \nGetEstimatedColorAtHitLocationSettings will get the vertex colors as close to the hit location as possible, which is useful if meshes have few vertices. \n\nDetection Tasks will always get moved to be the first in a Task Queue, so they run as quickly as possible since they're often used for SFX and/or VFX. "))
		static void GetClosestVertexDataOnMesh_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexDetectInfoStruct getClosestVertexDataStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Detect", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Get All Vertex Colors Only on Static, Skeletal or Spline Meshes. This is faster than GetClosestVertexDataOnMesh since it doesn't require the task to loop through the vertices, but only gets the total colors. If you change the callback settings to return the positions and/or normal, the bones and the colors (if skeletal mesh comp), or get amount of color for each channel, then it will also loop through the vertices in order to get those, but will make the task take just as long as GetClosestVertexDataOnMesh. "))
		static void GetAllVertexColorsOnly_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexDetectGetColorsOnlyStruct getAllVertexColorsStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Paint", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Paint Vertex Colors in Runtime on Static, Skeletal or Spline Meshes. \n\nStrength to Apply should be between -1 - 1, Fall Off Strength 0-1, Area of Effect > 0, Area of Effect with Full Color > 0 if you want to have an area around the paint location to be fully painted. \n\nPaint on Color Limit can be used if you don't want to paint over a certain amount on a channel, for instance if Rain should only be able to make you wet up to a certain amount. \n\nTrace Complex has to be True if Line Tracing as it is required to get the faceIndex! \n\nAffect Cloth Physics is a UE5 Exclusive Feature!"))
		static void PaintOnMeshAtLocation_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintAtLocationStruct paintAtLocationStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Paint", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Paint Vertex Colors on a Static, Skeletal or Spline Meshes on what is Within the componentToCheckIfIsWithins Area. \n\nStrength to Apply should be between -1 - 1, Fall Off Strength 0-1, Area of Effect with Full Color > 0 if you want an area in the component location to have full color. \n\nRecommended to use isSphereShape, or isSquareOrRectangleShape such as a big rectangle for example for a body of water, as they are the cheapest. \n\nisComplexShape is expensive since for every vertex on the component that is within the bounds of componentToCheckIfIsWithin, we line trace to see if it hits componentToCheckIfIsWithin collison. Should only be used if you really need a mesh with complex shapes, like if you paint a pattern once or something. \n\nNOTE Extra Extent to Apply Paint does Not work for isComplexShape. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!"))
		static void PaintOnMeshWithinArea_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> componentsToCheckIfIsWithin, FVertexPainthWithinAreaStruct paintWithinAreaStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Paint", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Paint Vertex Colors on the Entire Mesh on Static, Skeletal or Spline Meshes. \n\n In the Apply Vertex Color Settings you can choose to Set the colors, which is useful if the Mesh's default colors is undesirable and you want to 'Clean' the Mesh by painting it with 0, 0, 0, 0. Remember that with UEs Mesh Painting Tool you can propogate colors to the source mesh permanently, so you can set the source to always be 0, 0, 0, 0. \nPaint Entire Mesh can be combined effectively with Paint Color Conditions under Apply Vertex Color Settings, where you can for instance Paint Entire Mesh, but only if a Channel is between certain values, so for instance under Rooftops won't get painted. \nYou can opt to Paint on Random Vertices over the Entire Mesh as well, which is great for Rain Effects or similar. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!"))
		static void PaintOnEntireMesh_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintOnEntireMeshStruct paintOnEntireMeshStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Paint", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Paints a Color Snippet on Mesh with the Color Snippet Tag Provided, if the Tag is registered for the Mesh. If it isn't registered for the mesh, or set to default, but we've set to Randomize a Tag under a category, then we will do that instead, if there any tags under that category that is registered to the Mesh. \n\nColor Snippets can be very useful if you want to be able to store snippets of exactly how a Mesh should look for later use, for example variations of Weapon Skins, or if you want your character to look exactly in a certain way for a level, cutscene, or just want to store different variations of zombies and randomly choose a snippet when spawning one. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!"))
		static void PaintColorSnippetOnMesh_Wrappers(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintColorSnippetStruct paintColorSnippetStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Paint", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Sets Color Data to a Component using FVertexDetectMeshDataStruct. You can opt to provide a Component as well, if you do then you will get a Callback on it's FSetMeshComponentVertexColors Delegate, which can be useful if you want to Load Data, but don't want to start 50 tasks at once but do them one at a time. Then for each callback to the delegate, you can start the next task.\n You can choose if you want to propogate LOD0 Colors to the rest, this is useful if you for instance have a Save/Load system, and only want to save LOD0 to save storage. "))
		static void SetMeshComponentVertexColors_Wrapper(UPrimitiveComponent* meshComponent, FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Paint", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Sets Color Data to a Component using Serialized String, useful if Loading Data. You can opt to provide a Component as well, if you do then you will get a Callback on it's FSetMeshComponentVertexColors Delegate, which can be useful if you want to Load Data, but don't want to start 50 tasks at once but do them one at a time. Then for each callback to the delegate, you can start the next task.\n You can choose if you want to propogate LOD0 Colors to the rest, this is useful if you for instance have a Save/Load system, and only want to save LOD0 to save storage. "))
		static void SetMeshComponentVertexColorsUsingSerializedString_Wrapper(UPrimitiveComponent* meshComponent, FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);


	//-------------------------------------------------------

	// Utilities

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "Checks if the world is valid, that it is a game world and is not being teared down. "))
		static bool IsWorldValid(UWorld* world);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "This is a function that Multisphere Traces at an location for meshes within the area of effect, and adjust the hit result impact point so that it is from the location we sent in (i.e. we paint on other meshes, from like an offset location), then returns an Hit Result array of Unique Meshes that is ready to be used with a Paint at Location function. \nThis is very useful since we can paint on Multiple Meshes at once like floors, but where the we don't get any visible Seams between the floors, since if the other floors is within the area of effect, we will paint on that as well! \nNOTE However that since we're multi sphere tracing for and to the same location, we don't get any usable face index, which means that we can't get the physics surface information. So if you intend on running a Detectinon and is such data Before and/or After the Paint at Location, then this won't work. "))
		static TArray<FHitResult> MultisphereTraceForPaintAtLocation_Wrapper(const UObject* WorldContextObject, const FVector& location, const float& areaOfEffect, const TArray<TEnumAsByte<EObjectTypeQuery>>& objectTypesToTraceFor, int& expectedCallbacksFromPaintAtLocation);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets the Amount of tasks that this component started. "))
		static int GetAmountOfTasksStartedByComponent(UVertexPaintDetectionComponent* paintComponent);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static UVertexPaintColorSnippetRefs* GetColorSnippetReferenceDataAsset();

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static UVertexPaintOptimizationDataAsset* GetOptimizationDataAsset();

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static UVertexPaintMaterialDataAsset* GetVertexPaintMaterialDataAsset();

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static int GetAmountOfLODsToPaintOn(UPrimitiveComponent* meshComp, bool overrideLODToPaintUpOn, int overrideUpToLOD);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Returns all of the Meshes that we've Painted on Since the Session Started. Useful for Save/Load systems if you want to save vertex data on the meshes that has been changed. \nYou can manually clear this by running ClearMeshPaintedSinceSessionStarted() which may be good if you for instance is going back to a Main Menu or something similar. \nNote that this may have null references in case components has been destroyed since we can't bind to a mesh components destroyed event and clear them up, and looping through all of them to check and remove any null refs would be an added cost since this can grow very big if your session has been going on for a while or you just have a big game with alot of meshes that can bet painted. So recommend using a valid check if you intend to loop through the components. "))
		static TMap<UPrimitiveComponent*, int> GetMeshPaintedSinceSessionStarted_Wrapper(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Clears meshesPaintedOnSinceSessionStarted, useful if you go back to a Main Menu and unload all sublevels or something similar. "))
		static void ClearMeshPaintedSinceSessionStarted_Wrapper(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets the Amount of Calculate Colors Paint Tasks for Mesh Components in the Queue. Mainly useful to present it on widgets etc. "))
		static TMap<UPrimitiveComponent*, int> GetCalculateColorsPaintTasksAmount_Wrapper(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets the Amount of Calculate Colors Detection Tasks for Mesh Components in the Queue. Mainly useful to present it on widgets etc. "))
		static TMap<UPrimitiveComponent*, int> GetCalculateColorsDetectionTasksAmount_Wrapper(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets all the color snippets on a stored mesh and the associated color snippet data asset they are stored on. Can be used if you for example want to get all available snippets of a zombie and randomize which to use when spawning or similar."))
		static void GetAllMeshColorSnippetsAsString_Wrapper(UPrimitiveComponent* meshComponent, TMap<FString, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetsAndDataAssets);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets all the color snippets tags on a stored mesh and the associated color snippet data asset they are stored on. Can be used if you for example want to get all available snippets of a zombie and randomize which to use when spawning so you can always spawn a unique one or similar."))
		static void GetAllMeshColorSnippetsAsTags_Wrapper(UPrimitiveComponent* meshComponent, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssets);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets all the color snippets tags on a stored mesh Under a Tag Category, and the associated Color Snippet Data Asset they are stored on. Can be used if you for example want to get All Available Snippets of a Zombie for a Certain Area"))
		static void GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(UPrimitiveComponent* meshComponent, FGameplayTag tagCategory, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssetsUnderTagCategory);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets all the color snippets tags on a stored mesh In a Tag Category, i.e. the direct children of the category and not tags under those, and the associated Color Snippet Data Asset they are stored on. \nFor instance if you have Enemy tags like ColorSnippet.Zombie, ColorSnippet.Zombie.Bloody, ColorSnippet.Zombie.Sewers.Filthy. If you would then run this with ColorSnippet.Zombie, you would get ColorSnippet.Zombie.Bloody and others directly under ColorSnippet.Zombie., and not .Sewers.Filthy. "))
		static void GetMeshColorSnippetsTagsInTagCategory_Wrapper(UPrimitiveComponent* meshComponent, FGameplayTag tagCategory, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssetsUnderTagCategory);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets the colors of the component either for All LODs if that is True, or up to a specified LOD. You can use GetAllVertexColorsOnly if you want to be more specific in what you get, for instance get the colors of each bones etc. "))
		static FVertexDetectMeshDataStruct GetMeshComponentVertexColors_Wrapper(UPrimitiveComponent* meshComponent, bool& success, bool getColorsForAllLODs, int getColorsUpToLOD = 1);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Get Vertex Color Amount to Apply on RGBA based off of what's registered in the Editor Widget for each Physical Surface and Channel. This is useful when you only know a Physical Surface and Material want to apply vertex color to a mesh, and want a centralized place where you get it from. For instance if you have a Vehicle driving over a Landscape, and you line trace and get the Physical Surface of the landscape where the Wheel is, and you want to Paint the Wheel with something based only on the Physical Surface and the Material. \nYou can set a defaultValue to return if the function fails or if a channel is not registered. This is useful if you for instance want the default behaviour to Remove Colors, with -0.1 or something similar. So if a vehicle is driving over a material that isn't registered, i.e. the wheels won't get painted by something, but you still want the wheels paint to come off. "))
		static bool GetColorsToApplyFromPhysicsMaterial_Wrapper(UMaterialInterface* materialToApplyColorsTo, TEnumAsByte<EPhysicalSurface> physicalSurface, float& redAmountToApply, float& greenAmountToApply, float& blueAmountToApply, float& alphaAmountToApply, float defaultAmountIfFailOrChannelIsNotRegistered = -0.1f);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "optionalMaterialPhysicsSurfaceWasDetectedOn is used to check if the surfaces can blend  This will get loop through and get the Most Dominant Surface from the Physics Surface Array, so it and the physics Sruface Color Value array has to be in sync. This combines well with the Physics Result Structs you get from GetClosestVertexData or PaintAtLocation Callback Events. \nIf you provide the Material that the physics surfaces was on, it will also check the Blendable Surfaces that has been Registered in the Editor Widget, and check if any sent in here can Blend and become another Surface, if so, that surface could be the Most dominant one. For example if Red Channel is Sand, Blue Channel is Puddle, they can be set to blend into Mud in the Editor Widget. \n\nThis is very useful when you want to run SFX or VFX based on detected surfaces. "))
		static bool GetTheMostDominantPhysicsSurface_Wrapper(UMaterialInterface* optionalMaterialPhysicsSurfaceWasDetectedOn, TArray<TEnumAsByte<EPhysicalSurface>> physicsSurfaces, TArray<float> physicsSurfaceValues, TEnumAsByte<EPhysicalSurface>& mostDominantPhysicsSurfaceFromArray, float& mostDominantPhysicsSurfaceColorValue);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Gets the Red, Green, Blue or Alpha Channel that the Physics Surface is registered to in the Editor Widget. Useful if you have a physics surface and you want to know what color channel that you should apply paint on just based on that. It can also return Default if it's set to that (i.e. what is on the material when nothing is on it), but if it can't get the info it will not be successfull. "))
		static TArray<Enum_SurfaceAtChannel> GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(UMaterialInterface* material, TEnumAsByte<EPhysicalSurface> physicsSurface, bool& successfull);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static TArray<TEnumAsByte<EPhysicalSurface>> GetAllPhysicsSurfaces();

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "Draws Debug Box of the primitive components Bounds. "))
		static void DrawPrimitiveComponentBoundsBox(UPrimitiveComponent* component, float lifetime = 5.0f, float thickness = 3.0f, FLinearColor colorToDraw = FLinearColor::Red);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (DisplayName = "Get Amount of Painted Colors for Each Channel", ToolTip = "Gets the Amount of vertices with colors above the min amount, gets them in Percent from 0-100, as well as the average color value of the ones above the minimum. Useful if you want to check that you've painted the majority of something. \nNOTE You can get this by running a Paint or Detect Job as well, which is more performant as well since they can run on async thread! "))
		static FVertexDetectAmountOfPaintedColorsOfEachChannel GetAmountOfPaintedColorsForEachChannel(const TArray<FColor>& vertexColors, float minColorAmountToBeConsidered = 0.01f);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (DisplayName = "Set Static Mesh And Release Override Vertex Colors", ToolTip = "Sets the LOD Count so it doesn't have the same LOD as the mesh we're switching from, as well as overriding the vertex color buffer with a new one and initalizing fresh color array. Then we run SetStaticMesh(). This was necessary otherwise it didn't work since just SetStaticMesh doesn't refresh lod count or clean up vertex colors. "))
		static void VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors(UStaticMeshComponent* staticMeshComponent, UStaticMesh* newMesh);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (DisplayName = "Set Skeletal Mesh And Release Resources", ToolTip = "Unlike just running SetSkeletalMesh(), this doesn't cause a crash when switching meshes if applying vertex colors on them since it runs ReleasesResurces first and BeginOverrideVertexColors etc., then calls the SetSkeletalMesh(). "))
		static void VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources(USkeletalMeshComponent* skeletalMeshComponent, USkeletalMesh* newMesh);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (DisplayName = "Sort String Array Alphabetically", ToolTip = "Sorts an array of strings alphabetically"))
		static TArray<FString> VertexPaintDetectionPlugin_SortStringArrayAlphabetically(TArray<FString> strings);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (DisplayName = "Sort Names Alphabetically", ToolTip = "Sorts the TMap Alphabetically while matching the index. So you can send in a TMap of AssetNames and Indexes, and get a TMap back but with them in alphabetical order. Intended to be used with the Asset Registry->GetAssets...() functions, see example in the Vertex Paint Editor Utility Widget"))
		static TMap<int, FString> VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically(TMap<int, FString> assetIndexAndName);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "Utility function since 5.1 don't use the same get skeletal mesh in BP as 4.27 and 5.0. By using this we don't have to update the examples or Widget BP"))
		static USkeletalMesh* VertexPaintDetectionPlugin_GetSkeletalMesh(USkeletalMeshComponent* skeletalMeshComp);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static TArray<FColor> VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD(USkeletalMeshComponent* skeletalMeshComponent, int lod);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static TArray<FColor> VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD(UStaticMeshComponent* staticMeshComponent, int lod);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static EObjectTypeQuery CollisionChannelToObjectType(ECollisionChannel channel);

	UFUNCTION(BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin")
		static ECollisionChannel ObjectTypeToCollisionChannel(EObjectTypeQuery object);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Checks if any of the Cached Physical Materials Assets in the Game Instance Subsystem uses the physics surface we pass through as paramater here, then returns the first one it finds. We cache all of them since it's very expensive to run GetAssetsOfClass. \nIf setting a specified physicsSurface class then we will only look through those classes. If it's set to be the base PhysicalMaterial then we will look through all of them. \nMake sure only one physics material uses a physics surface, otherwise you might get the wrong physics material. \nAlso make sure that you add the folder that has all the physics materials to Additional Directories to be Cooked in the Project Settings, in case there's a risk any of them isn't referenced by anything and won't get cooked, but has a physics surface that is registered in the editor widget. ", DeterminesOutputType = "physicalMaterialClass"))
		static UPhysicalMaterial* GetPhysicalMaterialUsingPhysicsSurface_Wrapper(const UObject* WorldContextObject, TSubclassOf<UPhysicalMaterial> physicalMaterialClass, TEnumAsByte<EPhysicalSurface> physicsSurface);

	static FCalculateColorsInfo AdjustCallbackVertexData(FCalculateColorsInfo calculateColorsInfo, bool resetColorsOfBoneIfNotIncluded = true, bool resetAmountOfPaintedColorsOfEachChannelIfNotIncluded = true, bool resetMeshVertexDataIfNotIncluded = true);

	static FVertexDetectMeshDataStruct PropogateLOD0VertexColorsToLODs(const TArray<FPaintedVertex>& lod0PaintedVerts, FVertexDetectMeshDataStruct vertexDetectMeshData, const TArray<FBox>& lodBaseBounds, TArray<FColorVertexBuffer*>& optionalColorVertexBufferToUpdate);

	static FString GetPhysicsSurfaceAsString(TEnumAsByte<EPhysicalSurface> physicsSurface);

	static FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel ClampAmountOfPaintedColorsOfEachChannel(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel amountOfColorsOfEachChannel);

	static FVertexPaintingLimitStruct ClampPaintLimits(FVertexPaintingLimitStruct paintLimits);

	static TSharedPtr<FJsonValue> SerializeColorElementToJson(int lod, int arrayElement, FColor colorElement);

	static FColor DeSerializeColorElementToJson(int arrayElement, TSharedPtr<FJsonObject> JsonObject);


	//-------------------------------------------------------

	// Chaos Cloth & Vehicles

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (BlueprintInternalUseOnly = "true", ToolTip = "Useful function for affecting the friction of a Chaos Wheeled Vehicle Wheel, used by the BPC_RuntimeVertexPaintAndDetectionComponent_VehicleWheel when it is driving over Meshes to make sure the vehicle gets it's friction affected then as well, just like when it's driving over landscapes. \nSince UE4's Chaos Wheeled Vehicle Component doesn't have the set friction multiplier function, i made a wrapper that runs it if it's UE5. "))
		static void SetChaosWheeledVehicleFrictionMultiplier_Wrapper(UChaosWheeledVehicleMovementComponent* chaosWheeledVehicleMovementComponent, int wheelIndex, float friction);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "Returns Skeletal Mesh Cloths if it ha any. Can be used in conjunction with UVertexPaintFunctionLibrary::SetChaosClothPhysics if you want to directly set physics on a cloth. Also useful when implementing interface GetSkeletalMeshClothPhysicsSettings on a BP and has to return physics setting for each Cloth the Mesh has. \NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor! "))
		static TArray<UClothingAssetBase*> GetClothAssets(USkeletalMesh* skeletalMesh);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Cloth", meta = (ToolTip = "Set Cloth Physics on the Cloth sent in for the Skeletal Mesh. Can use UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetClothingAssets() to get a Skeletal Meshes Clothing Assets in the order they're set in the Skeletal Mesh, so you have to be aware of which cloth is at which index. \n\NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor! "))
		static void SetChaosClothPhysics(USkeletalMeshComponent* skeletalMeshComponent, UClothingAssetBase* clothingAsset, const FVertexDetectChaosClothPhysicsSettings& clothPhysicsSettings);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin|Cloth", meta = (ToolTip = "Updates Cloth Physics with the exisisting Vertex Colors \nThis function is useful if Vertex Colors has been changed by something else other than the component, or pre-painetd in the editor and you want them to behave correctly. \n\NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor! "))
		static void UpdateChaosClothPhysicsWithExistingColors(USkeletalMeshComponent* skeletalMeshComponent);

	static void UpdateChaosClothPhysics(AActor* actor, USkeletalMeshComponent* skeletalMeshComponent, bool useGivenColorAsAvarageColor, FLinearColor avarageColor);

	static FVertexDetectChaosClothPhysicsSettings GetChaosClothPhysicsSettingsBasedOnVertexColors(UClothingAssetBase* clothingAsset, TArray<FColor> clothColors, FVertexDetectClothSettingsStruct clothPhysicsSettings, USkeletalMeshComponent* skeletalMeshComponent, bool useGivenColorAsAvarageColor, FLinearColor avarageColor);



#if WITH_EDITOR

	//-------------------------------------------------------

	// Get Objects

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "Gets all the objects of a specific class from the project. Note that it doesn't work with BP assets. More performant if you only get objects from content folder and not Engine, Plugins folders etc. since otherwise we have to load the asset. \nIf Editor Only!"))
		static TArray<UObject*> VertexPaintDetectionPlugin_GetObjectsOfClass(TSubclassOf<UObject> objectsToGet, bool onlyGetObjectsFromContentFolder);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "Blueprint callable function to get the object path from soft ptr ref so we can avoid resolving them and bringing them into memory in order to display path names etc. \nIf Editor Only!"))
		static FSoftObjectPath VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr(TSoftObjectPtr<UObject> object);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "Blueprint callable function to get the object name from soft ptr ref so we can avoid resolving them and bringing them into memory in order to display names etc. \nIf Editor Only!"))
		static FString VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr(TSoftObjectPtr<UObject> object);

	UFUNCTION(BlueprintCallable, Category = "Runtime Vertex Color Paint and Detection Plugin", meta = (ToolTip = "Gets all the objects of a specific class from the project but in soft pointer form. Note that it doesn't work with BP assets. More performant if you only get objects from content folder and not Engine, Plugins folders etc. since otherwise we have to load the asset. \nNOTE Loading all things may be very heavy (and not necessary) if getting things like Materials or Static Meshes! \nIf Editor Only!", DeterminesOutputType = "objectsToGet"))
		static TArray<TSoftObjectPtr<UObject>> VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs(TSubclassOf<UObject> objectsToGet, bool loadObjects);

#endif

private:

	static TArray<Enum_SurfaceAtChannel> GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(UMaterialInterface* material, TEnumAsByte<EPhysicalSurface> physicsSurface, bool& successfull);
};
