// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "VertexPaintDetectionUpdatePopUp.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Text/SRichTextBlock.h"
#include "SWebBrowser.h"
#include "Interfaces/IPluginManager.h"
#include "EditorStyleSet.h"
#include "VertexPaintDetectionUpdatConfig.h"


//--------------------------------------------------------

// On Browser Link Clicked

void VertexPaintDetectionUpdatePopUp::OnBrowserLinkClicked(const FSlateHyperlinkRun::FMetadata& Metadata) {

	const FString* URL = Metadata.Find(TEXT("href"));

	if (URL)
	{
		FPlatformProcess::LaunchURL(**URL, nullptr, nullptr);
	}
}


//--------------------------------------------------------

// Register

void VertexPaintDetectionUpdatePopUp::Register() {

	
	UVertexPaintDetectionUpdatConfig* updatePopupConfig = GetMutableDefault<UVertexPaintDetectionUpdatConfig>();

	if (updatePopupConfig) {


		IPluginManager& PluginManager = IPluginManager::Get();
		auto pluginTemp = PluginManager.FindPlugin(TEXT("VertexPaintDetectionPlugin"));


		if (pluginTemp.IsValid()) {

			const FString UpdatedConfigFile = pluginTemp.Get()->GetBaseDir() + "/Config/UpdateConfig.ini";

			if (FPaths::FileExists(UpdatedConfigFile)) {

				updatePopupConfig->LoadConfig(nullptr, *UpdatedConfigFile);
			}

			else {

				updatePopupConfig->SaveConfig(CPF_Config, *UpdatedConfigFile);
			}


			const FPluginDescriptor& Descriptor = pluginTemp.Get()->GetDescriptor();

			if (Descriptor.VersionName != updatePopupConfig->PluginVersionUpdate) {

				updatePopupConfig->PluginVersionUpdate = Descriptor.VersionName;
				updatePopupConfig->SaveConfig(CPF_Config, *UpdatedConfigFile);

				FCoreDelegates::OnPostEngineInit.AddLambda([]() {
					Open();
				});
			}
		}
	}
}


//--------------------------------------------------------

// Open

void VertexPaintDetectionUpdatePopUp::Open() {

	if (!FSlateApplication::Get().CanDisplayWindows())
	{
		return;
	}

	TSharedRef<SBorder> WindowContent = SNew(SBorder)
		.BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
		.Padding(FMargin(8.0f, 8.0f));

	TSharedPtr<SWindow> Window = SNew(SWindow)
		.AutoCenter(EAutoCenter::PreferredWorkArea)
		.SupportsMaximize(false)
		.SupportsMinimize(false)
		.SizingRule(ESizingRule::FixedSize)
		.ClientSize(FVector2D(700, 600))
		.Title(FText::FromString("Runtime Vertex Color Paint & Detection Plugin"))
		.IsTopmostWindow(true)
		[
			WindowContent
		];

	const FSlateFontInfo HeadingFont = FCoreStyle::GetDefaultFontStyle("Regular", 24);
	const FSlateFontInfo ContentFont = FCoreStyle::GetDefaultFontStyle("Regular", 12);

	TSharedRef<SVerticalBox> InnerContent = SNew(SVerticalBox)
		// Default settings example
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(10)
		[
			SNew(STextBlock)
			.Font(HeadingFont)
		.Text(FText::FromString("Runtime Vertex Color Paint & Detection Plugin"))
		]
	+ SVerticalBox::Slot()
		.FillHeight(1.0)
		.Padding(10)
		[
			SNew(SBorder)
			.Padding(10)

#if ENGINE_MAJOR_VERSION == 4

		.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))

#elif ENGINE_MAJOR_VERSION == 5

	#if ENGINE_MINOR_VERSION == 0

		.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))

	#else

		.BorderImage(FAppStyle::GetBrush("ToolPanel.DarkGroupBorder"))

	#endif
#endif

		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SRichTextBlock)
			.Text(FText::FromString(R"(
<LargeText>Thank you for using Runtime Vertex Color Paint & Detection Plugin!</>

If you are new to the Plugin then check out the <a id="browser" href="https://youtu.be/mLZ7fyc6kDI">Video Tutorial</> which can help you get started more quickly! The <a id="browser" href="https://docs.google.com/document/d/1bIarYezV921XkSbbZ8Pknla_4qEqKlY_NHvVwIYHGks/edit?usp=sharing">Documentation </> can also give you a better understanding of the plugin works. You can also join the <a id="browser" href="https://discord.gg/YkxMsxb4eP">Discord </> if you need any help or just want to share your work!

If you enjoy the plugin then please consider leaving a <a id="browser" href="https://www.unrealengine.com/marketplace/en-US/product/runtime-vertex-color-paint-detection-plugin">Review on the Marketplace Page</>, it would really mean a lot! <3 






<LargeText>Version 1.14</>


<RichTextBlock.Bold>1.14.2 HOT FIX</>

* Fixed bug where the Task Duration wasn't actually the duration of the task took, but the duration from when the task was created, until it finished, when it should be from when task starts until it finished

* Fixed bug where Normals we got from Static Meshes wasn't correct if the Mesh had been Rotated. 


<RichTextBlock.Bold>New Features</>

* Added Line of Sight Paint Condition, so you can set if only Vertices that has Line of Sight to an Actor or Location should get painted, for instance the Sun. So you can for instance only Dry a character where the sun actually hits him. Added so you can set to apply a different color if the condition fails as well, so you can dry slower on vertices that is in the shadow. Combines well with Paint Entire Mesh at Random Vertices as well where if you for instance have a Rain/Snow Storm coming in from side, the side of the character is the one that gets painted.
  Check out the Example Projects character for inspiration. Also future proofed Paint Conditions a bit and did a whole pass at it with better UX etc. 

* Added Bone Paint Condition, so you can set to only paint on specified Bones, if it's a Skeletal Mesh. Useful for instance if you have a Boss Fight, and you should only be able to Paint or "Freeze" exposed Limbs. 

* Changed so we use Gameplay Tags when Painting Color Snippets instead of strings, so you don't have to remember exactly what string ID was but can see all available snippets on the Paint Color Snippet Node with the gameplay tag dropdown menu. And if you want to randomize you can randomize from all of them if you select the top category, or just the ones from a specific category, for example if you have a sewer level and want spawn zombies and paint color snippets randomly on them but only those from ColorSnippets.Zombies.SewerLevel. You can choose to Set a specified Tag to Paint, and if it doesn't exist and Randomized is set to something, it will fall back to randomize from that category instead. 
  Added GetAllColorSnippetsTagsForMesh_Wrapper, GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper, GetMeshColorSnippetsTagsInTagCategory_Wrapper that you can use if you ever need to just get all available ones for a mesh. 

* Added a Rapid Json Module so we can Serialize, de-serialize about 3-4x faster than the regular built in one. With this we can bake large amount of data down to 24 Byte Strings, this should theoretically mean we can actually make Replay Systems with vertex colors support, since we can store snaps shots of meshes vertex data with very little Memory. Will possibly add that in the future to the example project. This could also make it possible for Sequencer Editing so that may also come one day!
  In the Callback Settings you can choose if you want to get the Colors as Serialized as well, which can be useful if you want to Save them or send them with web services, like if you can customize Weapon Skins and the user should be able to save those settings on the cloud. 

* Changed so we Store color snippet as JSon Serialized Strings, to save disk space and memory so we only de-serializes the color snippet we actually want to use and does it on async. Makes it possible to send them with web services as well and to make a much more optimized Save / Load System. 
  Make sure you open the Editor Widget so we can automatically can convert already existing color snippets to serialized ones. Will completely remove the old thing in 1.16 so make sure you do it before then otherwise your old snippets will be lost. 

* Added new Paint function SetMeshComponentVertexColorsUsingSerializedString where you can paint using a serialized json string, which can be very useful if you have a Save/Load System where you've saved the vertex colors as serialized string, and when loading you want to paint the meshes again. You can check out the save / load example in the Example Project Character. 


<RichTextBlock.Bold>Misc</>

* Optimized a bunch of functions by adding by ref which should save some Memory since some structs are quite big. 

* Changed so Set Include Colors in callback setting to be False by default since it saves a tiny bit of performance and the user has complete control of anything that can affect performance.

* Added Bool, Byte, String and Name to Additional Data to pass through

* Added callbacks to wheel paint component so you in the vehicle know what surface you're driving over. Can be used to for instance Slow it Down if driving over Tar.

* Changed face index parameter name to optionalFaceIndexForStaticMeshComponents so it's even clearer that you might not need to set it if you don't need the material or physics surface 

* Simplified SetMeshComponentVertexColors to just take in a FColor Array instead of an entire struct with mesh asset etc. as it didn't make sense. 

* Added so you can Move Color Snippets to another Color Snippet Data Asset if you changed your mind where they should go. 


<RichTextBlock.Bold>Bug Fixes</>

* Fixed bug where Previewing color snippet didn't seem to work if the mesh was really heavy, or at least didn't work for Wind Walker Echo with 100k verts. Reworked the logic a bit. 

* Minor Bug Fix to Paint Entire Mesh at Random Vertices

* Fixed bug with Get All Vertex Color Channels Physics Surface Is Registered To where if a physics surface was registered to several vertex color channls, it only returned the first it found instead of all of them

* Minor bug fixes here and there as usual. 

* Fixed issue with GetPhysicalMaterialUsingPhysicsSurface so it's more optimized. 


<LargeText>Version 1.13</>

<RichTextBlock.Bold>1.13.2 HOT FIX</>

* Fixed bug where if you paint a mesh with paint at location or paint within area, the two that use locations, the paint result didn't get 100% if the task queue had grown and the meshes where moving fast since we used world location. Added example in the example project for this as well. 

* Split up Paint and Detection Tasks into Two Seperate Task Queues, this fixed bug where the Paint jobs could get Dead Locked and never run. Because before, Detection Tasks was always moved to be the first in queue since they're oftentimes used to run SFX etc. But If you ran Detection Tasks all the time and trying to paint at the same time, your paint jobs wouldn't run since there would always be a detection task moved ahead of them. Now they won't interfere with eachother. 

* Fixed performance bugg where if you let a queue grow too large you could lose fps. For example at 1000 task queue for 1 mesh, you could be down to 20 FPS because the TMaps get so heavy to work with. Added a limit (which you can change in the project settings) so the task queue for one mesh can't go over a certain limit, which is 100 by default. You really don't want it to grow to big either since it will feel unresponsive if the latest paint jobs take a second to actually show it's effect. If you notice the task queue is often large (you can see them by using the plugins debug menu) then you should review your logic so instead of adding tasks every frame maybe do it when the previous task is finished if that is possible. 

* Added a Generic MultiSphereTracePaintAtLocation function and node that will sphere trace for meshes within an area of affect at a location, and adjust the hit results location so that it is ready to be used with Paint at Location afterwards so you can paint comfortably on all Meshes within the area of effect, so any seams between for instance floor meshes aren't visible. Updated example project so that character uses it by default. 

* Added ChaosVehiclesPlugin as a Dependency so we could have Friction related logic to the Wheel Paint Component so vehicles can skid etc. when detecting physics surfaces over Meshes as well. Also made a SetFrictionMultiplier Wrapper and Node so we can override the friction of the vehicle. 

* Made a custom physics material class in the example project and put things like braking deceleration, max speed etc. and worked that into the character so we comfortable can affect the characters speed per surface using that. 

* Removed the thing where we failed a Paint Within Area with Complex Shape if the task queue had grown over a limit of like 3. Instead can print a warning about it so the user can be aware of why it may not be good for that paint job if the task is to big since it traces for hits. 


<RichTextBlock.Bold>1.13.1 HOT FIX</>

* Fixed important bug when we check if the paint job will make any difference or not, where in a rare case it failed related to callback setting GetAmountOfColorsForEachChannel so unfortunately had to change some variable names etc. on that. Sorry for any inconvenience!

* Moved Vehicle Wheel Paint Component into the Plugin so you don't have to bother with the Example Project to get the latest updates to it. Also added simpler paint on wheel solution that Doesn't require meshes and landscape to generate overlaps, but at the cost of some detail, please check out the documentation on how to set that up. By default the component will try to use this. If you want to continue to use the old way then set UseExtraDetail bool to true in the component. Made parameters if you want to use paint limits for it as well and how much that should be. Also added more debug warnings if things wasn't setup correctly. 

* A few more UX improvements where a couple of things have gotten better names, a couple of functions been moved into custom nodes so they can throw an error if missing necessary input. 

* Spring Cleaned out a bunch of logic from the Vertex Paint Engine Subsystem and moved them to the game instance subsystem, editor subsystem etc. where they where better suited, also got rid of dependency on the engine subsystem from component. 

* Added Most Dominant Physics Surface As String so it can be used comfortable in Code as well if you're using WWise and their RTCPs or something. Some general cleanup regarding getting physics surface names etc. in the back-end as well. 

* Several fixes to the Example Project, so we can properly spawn fire again with Middle Mouse Click, cleaned up some logic on the character, updated some tooltips etc. 


<RichTextBlock.Bold>New Features</>

* Added a Paint Vehicle Wheels Example component in the Example Project that makes it possible for wheels on a vehicle to get painted, and to paint the ground under them, and spawn vfx etc. Check out the BPC_RuntimeVertexPaintAndDetectionComponent_VehicleWheel and the added Vehicle in the latest Example Project. There's a bunch of settings that can be made to it to suit different wheel sizes etc. It's also independent from each other so you can have a vehicle with as many as you want, like motorcycle with 2 or a truck with 8. Although the more you have the more tasks will run at the same time. You can for each one turn off if it should spawn FX, get painted, be able to paint the floor under it etc. so you can for instance optimize it by only having the back wheels paint the floors and spawn FX. 
  Press T to spawn the vehicle and drive around in the Example Project. 

* Added Paint Within Area for Landscapes as well, so if you have things like Wheels that should get painted when driving over a landscape that is now possible. Use the Complex Shape type when running Paint Within Area to enable this. Can check out the Example Project and the Vehicle and the BPC_RuntimeVertexPaintAndDetectionComponent_VehicleWheel for example setup. 

* Added in the Editor Widget under the Detection Tab you can set which surfaces can Blend and become a new Surface for a Registered Material, for instance if Sand + Puddle is painted over a certain limit, they become Mud. So now when running Get Closest Vertex Data, or Paint at Location, you will get the Most Dominant Surface that will check the surfaces and which has the strongest value, but also if there any blended surfaces that can come out of it and if that is the most dominant surface. This makes any implementation using it, such as footsteps FX etc. much much cleaner since you can pretty much use the Most Dominant Surface and it's value right away when deciding what FXs to spawn. You can also get this manually with the function GetTheMostDominantPhysicsSurfaceAndValue ().
  Recommend checking out the Example Projects characters latest implementation of this, or the BPC_RuntimeVertexPaintAndDetectionComponent_VehicleWheel that also uses this. 

* Added so in the Editor widget under the Detection Tab you can for a Registered Material set what color to apply to RGBA based off of a Physics Surface, which is a common use case like if you're walking over a landscape and you can get which physics surface it is from a line trace and you want to paint your feet depending on what it was. This is extremely useful in conjunction with the function GetColrosToApplyFromPhysicsMaterial() which is used by for instance the character to decide what to paint on the feet, or the BPC_RuntimeVertexPaintAndDetectionComponent_VehicleWheel to decide what to paint on the wheels. 

* Made it so with Paint Within Area you can choose the to run Falloff from the centre as usual, or based on the Z which disregards the X and Y distance and only cares about the Z distance. Can be useful if you have oceans and want some small falloff on the paint jobs. 

* Added a Get Vertex Color Channel Physics Surface Is Registered To, which can simply return if you for instance have registered Oil to be on the Alpha channel for a certain material in the Editor Widget, it will return the Alpha Channel. This is useful in situations where you want to apply colors to a channel based off the physics surface alone, but don't know which channel to affect. For instance the BP_FireExample in the example project uses this to determine which channel it should remove colors on, some materials might have Oil on the Alpha, another Grass on Green etc. 

* Added so you can Pass Through Additional Data when running a Paint / Detect Job, such as Vectors, rotators, paint settings etc. so when the Callback for the paint/detect job is run, you have access to that additional data. This can make implementations much more cleaner since you don't have to Cache Variables of what physics surface and the amount etc. for later use. Check out the character in the example project when we paint his feet and pass through the data of the floor so we can use it when the feet has finished painting. 


<RichTextBlock.Bold>Misc</>

* Added so Paint Color Snippets loads the data asset that is holding the colors on async, meaning if you're on a build there shouldn't be any hitches. In Editor you can still experience some because async loading doesn't work the same in editor compared to build. 

* Refactored Physics Surface Result a bit so it's much cleaner result. Also AmountOfPaintedColorsOfEachChannel so it's clearer and more understandable. 

* Fixed so Enums have nicer Display Names

* Added function library Converter from Collision Channel to Object Query, and vice versa

* General improvements to UX

* Optimization to Fire Example in the Example Project

)"))


#if ENGINE_MAJOR_VERSION == 4

.TextStyle(FEditorStyle::Get(), "NormalText")
.DecoratorStyleSet(&FEditorStyle::Get())

#elif ENGINE_MAJOR_VERSION == 5

	#if ENGINE_MINOR_VERSION == 0

.TextStyle(FEditorStyle::Get(), "NormalText")
.DecoratorStyleSet(&FEditorStyle::Get())

	#endif

.TextStyle(FAppStyle::Get(), "NormalText")
.DecoratorStyleSet(&FAppStyle::Get())

#endif


.AutoWrapText(true)
+ SRichTextBlock::HyperlinkDecorator(TEXT("browser"), FSlateHyperlinkRun::FOnClick::CreateStatic(&OnBrowserLinkClicked))
		]
		]
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(10)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().FillWidth(1.0f)
		[
			SNew(SButton)
			.Text(FText::FromString("Leave a Review"))
		.HAlign(HAlign_Center)
		.OnClicked_Lambda([]()
			{
				const FString URL = "https://www.unrealengine.com/marketplace/en-US/product/runtime-vertex-color-paint-detection-plugin";
				FPlatformProcess::LaunchURL(*URL, nullptr, nullptr);

				return FReply::Handled();
			})
		]
	+ SHorizontalBox::Slot().AutoWidth()
		[
			SNew(SSpacer)
			.Size(FVector2D(20, 10))
		]
	+ SHorizontalBox::Slot().FillWidth(1.0f)
		[
			SNew(SButton)
			.Text(FText::FromString("Close Window"))
		.HAlign(HAlign_Center)
		.OnClicked_Lambda([Window]()
			{
				Window->RequestDestroyWindow();

				return FReply::Handled();
			})
		]
		];

	WindowContent->SetContent(InnerContent);
	Window = FSlateApplication::Get().AddWindow(Window.ToSharedRef());
}
