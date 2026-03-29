/*

     ____   ____  _      _______   
    |  _ \ / __ \| |    |__   __|  
    | |_) | |  | | |       | |     
    |  _ <| |  | | |       | |     
    | |_) | |__| | |____   | |     
    |____/ \____/|______|  |_|     
    
 * ------------------------------------------------------------
 * BUILD:   Bolt
 * TARGET:  version-3696e24a0ac248de
 * SPEED:   19137ms
 * COUNT:   280
 * ------------------------------------------------------------
 */

#pragma once
#include <cstdint>

namespace offsets {
    inline constexpr std::string_view version { "version-3696e24a0ac248de" };

    // Atmosphere
    inline constexpr uintptr_t Atmosphere_Color = 0xD0;
    inline constexpr uintptr_t Atmosphere_Decay = 0xDC;
    inline constexpr uintptr_t Atmosphere_Density = 0xE8;
    inline constexpr uintptr_t Atmosphere_Glare = 0xEC;
    inline constexpr uintptr_t Atmosphere_Haze = 0xF0;
    inline constexpr uintptr_t Atmosphere_Offset = 0xF4;

    // BasePart
    inline constexpr uintptr_t BasePart_CastShadow = 0xF5;
    inline constexpr uintptr_t BasePart_Color3 = 0x194;
    inline constexpr uintptr_t BasePart_Locked = 0xF6;
    inline constexpr uintptr_t BasePart_Massless = 0xF7;
    inline constexpr uintptr_t BasePart_Primitive = 0x148;
    inline constexpr uintptr_t BasePart_Reflectance = 0xEC;
    inline constexpr uintptr_t BasePart_Shape = 0x1B1;
    inline constexpr uintptr_t BasePart_Transparency = 0xF0;

    // BloomEffect
    inline constexpr uintptr_t BloomEffect_Intensity = 0xD0;
    inline constexpr uintptr_t BloomEffect_Size = 0xD4;
    inline constexpr uintptr_t BloomEffect_Threshold = 0xD8;

    // ByteCode
    inline constexpr uintptr_t ByteCode_Pointer = 0x10;
    inline constexpr uintptr_t ByteCode_Size = 0x20;

    // Camera
    inline constexpr uintptr_t Camera_CFrame = 0xF8;
    inline constexpr uintptr_t Camera_FieldOfView = 0x160;
    inline constexpr uintptr_t Camera_Position = 0x11C;
    inline constexpr uintptr_t Camera_Rotation = 0xF8;
    inline constexpr uintptr_t Camera_ViewportInt16 = 0x2AC;
    inline constexpr uintptr_t Camera_ViewportSize = 0x2E8;

    // CharacterMesh
    inline constexpr uintptr_t CharacterMesh_BaseTextureId = 0xE0;
    inline constexpr uintptr_t CharacterMesh_BodyPart = 0x160;
    inline constexpr uintptr_t CharacterMesh_MeshId = 0x110;
    inline constexpr uintptr_t CharacterMesh_OverlayTextureId = 0x140;

    // DataModel
    inline constexpr uintptr_t DataModel_CreatorId = 0x188;
    inline constexpr uintptr_t DataModel_GameId = 0x190;
    inline constexpr uintptr_t DataModel_GameLoaded = 0x600;
    inline constexpr uintptr_t DataModel_JobId = 0x138;
    inline constexpr uintptr_t DataModel_PlaceId = 0x198;
    inline constexpr uintptr_t DataModel_ServerIP = 0x5E8;
    inline constexpr uintptr_t DataModel_Workspace = 0x178;

    // FakeDataModel
    inline constexpr uintptr_t FakeDataModel_Pointer = 0x81D3D08;
    inline constexpr uintptr_t FakeDataModel_RealDataModel = 0x1C0;

    // GuiBase2D
    inline constexpr uintptr_t GuiBase2D_AbsolutePosition = 0x10C;
    inline constexpr uintptr_t GuiBase2D_AbsoluteRotation = 0x188;
    inline constexpr uintptr_t GuiBase2D_AbsoluteSize = 0x118;

    // GuiObject
    inline constexpr uintptr_t GuiObject_Active = 0x5B0;
    inline constexpr uintptr_t GuiObject_AnchorPoint = 0x560;
    inline constexpr uintptr_t GuiObject_AutomaticSize = 0x568;
    inline constexpr uintptr_t GuiObject_BackgroundColor3 = 0x548;
    inline constexpr uintptr_t GuiObject_BackgroundTransparency = 0x56C;
    inline constexpr uintptr_t GuiObject_BorderColor3 = 0x554;
    inline constexpr uintptr_t GuiObject_BorderMode = 0x570;
    inline constexpr uintptr_t GuiObject_BorderSizePixel = 0x574;
    inline constexpr uintptr_t GuiObject_ClipsDescendants = 0x5B1;
    inline constexpr uintptr_t GuiObject_GuiState = 0x580;
    inline constexpr uintptr_t GuiObject_Interactable = 0x5B3;
    inline constexpr uintptr_t GuiObject_LayoutOrder = 0x588;
    inline constexpr uintptr_t GuiObject_Position = 0x518;
    inline constexpr uintptr_t GuiObject_Rotation = 0x188;
    inline constexpr uintptr_t GuiObject_Selectable = 0x5B4;
    inline constexpr uintptr_t GuiObject_SelectionOrder = 0x5A4;
    inline constexpr uintptr_t GuiObject_Size = 0x538;
    inline constexpr uintptr_t GuiObject_SizeConstraint = 0x5A8;
    inline constexpr uintptr_t GuiObject_Visible = 0x5B5;
    inline constexpr uintptr_t GuiObject_ZIndex = 0x5AC;

    // Humanoid
    inline constexpr uintptr_t Humanoid_AutoJumpEnabled = 0x1D8;
    inline constexpr uintptr_t Humanoid_AutoRotate = 0x1D9;
    inline constexpr uintptr_t Humanoid_AutomaticScalingEnabled = 0x1DA;
    inline constexpr uintptr_t Humanoid_BreakJointsOnDeath = 0x1DB;
    inline constexpr uintptr_t Humanoid_CameraOffset = 0x140;
    inline constexpr uintptr_t Humanoid_DisplayDistanceType = 0x18C;
    inline constexpr uintptr_t Humanoid_EvaluateStateMachine = 0x1DC;
    inline constexpr uintptr_t Humanoid_Health = 0x194;
    inline constexpr uintptr_t Humanoid_HealthDisplayDistance = 0x198;
    inline constexpr uintptr_t Humanoid_HealthDisplayType = 0x19C;
    inline constexpr uintptr_t Humanoid_HipHeight = 0x1A0;
    inline constexpr uintptr_t Humanoid_JumpHeight = 0x1AC;
    inline constexpr uintptr_t Humanoid_JumpPower = 0x1B0;
    inline constexpr uintptr_t Humanoid_MaxHealth = 0x1B4;
    inline constexpr uintptr_t Humanoid_MaxSlopeAngle = 0x1B8;
    inline constexpr uintptr_t Humanoid_NameDisplayDistance = 0x1BC;
    inline constexpr uintptr_t Humanoid_NameOcclusion = 0x1C0;
    inline constexpr uintptr_t Humanoid_RequiresNeck = 0x1E0;
    inline constexpr uintptr_t Humanoid_RigType = 0x1C8;
    inline constexpr uintptr_t Humanoid_SeatPart = 0x120;
    inline constexpr uintptr_t Humanoid_Sit = 0x1E1;
    inline constexpr uintptr_t Humanoid_TargetPoint = 0x164;
    inline constexpr uintptr_t Humanoid_UseJumpPower = 0x1E3;
    inline constexpr uintptr_t Humanoid_WalkSpeed = 0x1D4;
    inline constexpr uintptr_t Humanoid_WalkSpeedCheck = 0x3BC;
    inline constexpr uintptr_t Humanoid_WalkToPoint = 0x17C;

    // InputObject
    inline constexpr uintptr_t InputObject_MousePosition = 0xEC;

    // Instance
    inline constexpr uintptr_t Instance_AttributeContainer = 0x48;
    inline constexpr uintptr_t Instance_AttributeList = 0x18;
    inline constexpr uintptr_t Instance_AttributeToNext = 0x58;
    inline constexpr uintptr_t Instance_AttributeToValue = 0x18;
    inline constexpr uintptr_t Instance_ChildrenEnd = 0x8;
    inline constexpr uintptr_t Instance_ChildrenStart = 0x70;
    inline constexpr uintptr_t Instance_ClassDescriptor = 0x18;
    inline constexpr uintptr_t Instance_ClassName = 0x8;
    inline constexpr uintptr_t Instance_Name = 0xB0;
    inline constexpr uintptr_t Instance_Parent = 0x68;

    // Lighting
    inline constexpr uintptr_t Lighting_Ambient = 0xD8;
    inline constexpr uintptr_t Lighting_Atmosphere = 0x1E8;
    inline constexpr uintptr_t Lighting_Brightness = 0x120;
    inline constexpr uintptr_t Lighting_ClockTime = 0x1B8;
    inline constexpr uintptr_t Lighting_ColorShift_Bottom = 0xE4;
    inline constexpr uintptr_t Lighting_ColorShift_Top = 0xF0;
    inline constexpr uintptr_t Lighting_EnvironmentDiffuseScale = 0x124;
    inline constexpr uintptr_t Lighting_EnvironmentSpecularScale = 0x128;
    inline constexpr uintptr_t Lighting_ExposureCompensation = 0x12C;
    inline constexpr uintptr_t Lighting_FogColor = 0xFC;
    inline constexpr uintptr_t Lighting_FogEnd = 0x134;
    inline constexpr uintptr_t Lighting_FogStart = 0x138;
    inline constexpr uintptr_t Lighting_OutdoorAmbient = 0x108;
    inline constexpr uintptr_t Lighting_ShadowSoftness = 0x140;
    inline constexpr uintptr_t Lighting_Sky = 0x1D8;

    // LightingParameters
    inline constexpr uintptr_t LightingParameters_GeographicLatitude = 0x190;
    inline constexpr uintptr_t LightingParameters_LightColor = 0x15C;
    inline constexpr uintptr_t LightingParameters_LightDirection = 0x168;
    inline constexpr uintptr_t LightingParameters_SkyAmbient = 0x150;
    inline constexpr uintptr_t LightingParameters_SkyAmbient2 = 0x194;
    inline constexpr uintptr_t LightingParameters_Source = 0x174;
    inline constexpr uintptr_t LightingParameters_TrueMoonPosition = 0x184;
    inline constexpr uintptr_t LightingParameters_TrueSunPosition = 0x178;

    // LocalScript
    inline constexpr uintptr_t LocalScript_Bytecode = 0x1A8;
    inline constexpr uintptr_t LocalScript_Hash = 0xE8;

    // MaterialColors
    inline constexpr uintptr_t MaterialColors_Asphalt = 0x30;
    inline constexpr uintptr_t MaterialColors_Basalt = 0x27;
    inline constexpr uintptr_t MaterialColors_Brick = 0xF;
    inline constexpr uintptr_t MaterialColors_Cobblestone = 0x33;
    inline constexpr uintptr_t MaterialColors_Concrete = 0xC;
    inline constexpr uintptr_t MaterialColors_CrackedLava = 0x2D;
    inline constexpr uintptr_t MaterialColors_Glacier = 0x1B;
    inline constexpr uintptr_t MaterialColors_Grass = 0x6;
    inline constexpr uintptr_t MaterialColors_Ground = 0x2A;
    inline constexpr uintptr_t MaterialColors_Ice = 0x36;
    inline constexpr uintptr_t MaterialColors_LeafyGrass = 0x39;
    inline constexpr uintptr_t MaterialColors_Limestone = 0x3F;
    inline constexpr uintptr_t MaterialColors_Mud = 0x24;
    inline constexpr uintptr_t MaterialColors_Pavement = 0x42;
    inline constexpr uintptr_t MaterialColors_Rock = 0x18;
    inline constexpr uintptr_t MaterialColors_Salt = 0x3C;
    inline constexpr uintptr_t MaterialColors_Sand = 0x12;
    inline constexpr uintptr_t MaterialColors_Sandstone = 0x21;
    inline constexpr uintptr_t MaterialColors_Slate = 0x9;
    inline constexpr uintptr_t MaterialColors_Snow = 0x1E;
    inline constexpr uintptr_t MaterialColors_WoodPlanks = 0x15;

    // MeshPart
    inline constexpr uintptr_t MeshPart_MeshId = 0x2E8;
    inline constexpr uintptr_t MeshPart_TextureId = 0x318;

    // ModuleScript
    inline constexpr uintptr_t ModuleScript_Bytecode = 0x150;
    inline constexpr uintptr_t ModuleScript_Hash = 0xE8;
    inline constexpr uintptr_t ModuleScript_IsRobloxScript = 0x180;

    // MouseService
    inline constexpr uintptr_t MouseService_InputObject = 0x110;

    // Player
    inline constexpr uintptr_t Player_AccountAge = 0x31C;
    inline constexpr uintptr_t Player_Character = 0x398;
    inline constexpr uintptr_t Player_DisplayName = 0x130;
    inline constexpr uintptr_t Player_HealthDisplayDistance = 0x348;
    inline constexpr uintptr_t Player_LocaleId = 0x6C8;
    inline constexpr uintptr_t Player_NameDisplayDistance = 0x354;
    inline constexpr uintptr_t Player_Team = 0x2A0;
    inline constexpr uintptr_t Player_TeamColor = 0x360;
    inline constexpr uintptr_t Player_UserId = 0x2C8;

    // Players
    inline constexpr uintptr_t Players_LocalPlayer = 0x130;

    // Primitive
    inline constexpr uintptr_t Primitive_AssemblyAngularVelocity = 0xFC;
    inline constexpr uintptr_t Primitive_AssemblyLinearVelocity = 0xF0;
    inline constexpr uintptr_t Primitive_CFrame = 0xC0;
    inline constexpr uintptr_t Primitive_Material = 0x246;
    inline constexpr uintptr_t Primitive_Orientation = 0xC0;
    inline constexpr uintptr_t Primitive_Position = 0xE4;
    inline constexpr uintptr_t Primitive_PrimitiveFlags = 0x1AE;
    inline constexpr uintptr_t Primitive_Rotation = 0xC0;
    inline constexpr uintptr_t Primitive_Size = 0x1B0;

    // PrimitiveFlags
    inline constexpr uintptr_t PrimitiveFlags_Anchored = 0x2;
    inline constexpr uintptr_t PrimitiveFlags_CanCollide = 0x8;
    inline constexpr uintptr_t PrimitiveFlags_CanQuery = 0x20;
    inline constexpr uintptr_t PrimitiveFlags_CanTouch = 0x10;

    // ProximityPrompt
    inline constexpr uintptr_t ProximityPrompt_ActionText = 0xD0;
    inline constexpr uintptr_t ProximityPrompt_Enabled = 0x156;
    inline constexpr uintptr_t ProximityPrompt_HoldDuration = 0x140;
    inline constexpr uintptr_t ProximityPrompt_KeyboardKeyCode = 0x144;
    inline constexpr uintptr_t ProximityPrompt_MaxActivationDistance = 0x148;
    inline constexpr uintptr_t ProximityPrompt_ObjectText = 0xF0;
    inline constexpr uintptr_t ProximityPrompt_RequiresLineOfSight = 0x157;

    // RenderView
    inline constexpr uintptr_t RenderView_LightingValid = 0x148;
    inline constexpr uintptr_t RenderView_SkyboxValid = 0x28D;

    // ScriptContext
    inline constexpr uintptr_t ScriptContext_RequireBypass = 0x930;

    // Seat
    inline constexpr uintptr_t Seat_Occupant = 0x220;

    // Sky
    inline constexpr uintptr_t Sky_MoonAngularSize = 0x25C;
    inline constexpr uintptr_t Sky_MoonTextureId = 0xE0;
    inline constexpr uintptr_t Sky_SkyboxBk = 0x110;
    inline constexpr uintptr_t Sky_SkyboxDn = 0x140;
    inline constexpr uintptr_t Sky_SkyboxFt = 0x170;
    inline constexpr uintptr_t Sky_SkyboxLf = 0x1A0;
    inline constexpr uintptr_t Sky_SkyboxOrientation = 0x250;
    inline constexpr uintptr_t Sky_SkyboxRt = 0x1D0;
    inline constexpr uintptr_t Sky_SkyboxUp = 0x200;
    inline constexpr uintptr_t Sky_StarCount = 0x260;
    inline constexpr uintptr_t Sky_SunAngularSize = 0x264;
    inline constexpr uintptr_t Sky_SunTextureId = 0x230;

    // SpecialMesh
    inline constexpr uintptr_t SpecialMesh_MeshId = 0x108;
    inline constexpr uintptr_t SpecialMesh_Offset = 0xD0;
    inline constexpr uintptr_t SpecialMesh_Scale = 0xDC;
    inline constexpr uintptr_t SpecialMesh_TextureId = 0x130;

    // TaskScheduler
    inline constexpr uintptr_t TaskScheduler_JobEnd = 0xD0;
    inline constexpr uintptr_t TaskScheduler_JobName = 0x18;
    inline constexpr uintptr_t TaskScheduler_JobStart = 0xC8;
    inline constexpr uintptr_t TaskScheduler_MaxFps = 0xB0;
    inline constexpr uintptr_t TaskScheduler_Pointer = 0x82879C8;

    // Team
    inline constexpr uintptr_t Team_TeamColor = 0xD0;

    // Terrain
    inline constexpr uintptr_t Terrain_GrassLength = 0x1F8;
    inline constexpr uintptr_t Terrain_MaterialColors = 0x290;
    inline constexpr uintptr_t Terrain_WaterColor = 0x1E8;
    inline constexpr uintptr_t Terrain_WaterReflectance = 0x200;
    inline constexpr uintptr_t Terrain_WaterTransparency = 0x204;
    inline constexpr uintptr_t Terrain_WaterWaveSize = 0x208;
    inline constexpr uintptr_t Terrain_WaterWaveSpeed = 0x20C;

    // TextButton
    inline constexpr uintptr_t TextButton_AutoButtonColor = 0x9CC;
    inline constexpr uintptr_t TextButton_ContentText = 0xCE0;
    inline constexpr uintptr_t TextButton_Font = 0x1108;
    inline constexpr uintptr_t TextButton_LineHeight = 0xD54;
    inline constexpr uintptr_t TextButton_LocalizedText = 0xCE0;
    inline constexpr uintptr_t TextButton_MaxVisibleGraphemes = 0x1114;
    inline constexpr uintptr_t TextButton_Modal = 0x9CD;
    inline constexpr uintptr_t TextButton_RichText = 0xDFD;
    inline constexpr uintptr_t TextButton_Selected = 0x9CE;
    inline constexpr uintptr_t TextButton_Text = 0xCE0;
    inline constexpr uintptr_t TextButton_TextColor3 = 0x10F0;
    inline constexpr uintptr_t TextButton_TextDirection = 0xE00;
    inline constexpr uintptr_t TextButton_TextScaled = 0xD50;
    inline constexpr uintptr_t TextButton_TextSize = 0x111C;
    inline constexpr uintptr_t TextButton_TextStrokeColor3 = 0x10FC;
    inline constexpr uintptr_t TextButton_TextStrokeTransparency = 0x1120;
    inline constexpr uintptr_t TextButton_TextTransparency = 0x1124;
    inline constexpr uintptr_t TextButton_TextTruncate = 0x1128;
    inline constexpr uintptr_t TextButton_TextWrapped = 0xDA0;
    inline constexpr uintptr_t TextButton_TextXAlignment = 0x112C;
    inline constexpr uintptr_t TextButton_TextYAlignment = 0xD9C;

    // TextLabel
    inline constexpr uintptr_t TextLabel_ContentText = 0xA60;
    inline constexpr uintptr_t TextLabel_Font = 0xE88;
    inline constexpr uintptr_t TextLabel_LineHeight = 0xAD4;
    inline constexpr uintptr_t TextLabel_LocalizedText = 0xA60;
    inline constexpr uintptr_t TextLabel_MaxVisibleGraphemes = 0xE94;
    inline constexpr uintptr_t TextLabel_RichText = 0xB7D;
    inline constexpr uintptr_t TextLabel_Text = 0xA60;
    inline constexpr uintptr_t TextLabel_TextColor3 = 0xE70;
    inline constexpr uintptr_t TextLabel_TextDirection = 0xB80;
    inline constexpr uintptr_t TextLabel_TextScaled = 0xAD0;
    inline constexpr uintptr_t TextLabel_TextSize = 0xE9C;
    inline constexpr uintptr_t TextLabel_TextStrokeColor3 = 0xE7C;
    inline constexpr uintptr_t TextLabel_TextStrokeTransparency = 0xEA0;
    inline constexpr uintptr_t TextLabel_TextTransparency = 0xEA4;
    inline constexpr uintptr_t TextLabel_TextTruncate = 0xEA8;
    inline constexpr uintptr_t TextLabel_TextWrapped = 0xB20;
    inline constexpr uintptr_t TextLabel_TextXAlignment = 0xEAC;
    inline constexpr uintptr_t TextLabel_TextYAlignment = 0xB1C;

    // Tool
    inline constexpr uintptr_t Tool_CanBeDropped = 0x4A0;
    inline constexpr uintptr_t Tool_Enabled = 0x4A1;
    inline constexpr uintptr_t Tool_Grip = 0x470;
    inline constexpr uintptr_t Tool_GripForward = 0x488;
    inline constexpr uintptr_t Tool_GripPos = 0x494;
    inline constexpr uintptr_t Tool_GripRight = 0x470;
    inline constexpr uintptr_t Tool_GripUp = 0x47C;
    inline constexpr uintptr_t Tool_ManualActivationOnly = 0x4A2;
    inline constexpr uintptr_t Tool_RequiresHandle = 0x4A3;
    inline constexpr uintptr_t Tool_Tooltip = 0x450;

    // Value
    inline constexpr uintptr_t Value_Value = 0xD0;

    // VehicleSeat
    inline constexpr uintptr_t VehicleSeat_MaxSpeed = 0x238;
    inline constexpr uintptr_t VehicleSeat_Occupant = 0x218;
    inline constexpr uintptr_t VehicleSeat_SteerFloat = 0x240;
    inline constexpr uintptr_t VehicleSeat_ThrottleFloat = 0x248;
    inline constexpr uintptr_t VehicleSeat_Torque = 0x24C;
    inline constexpr uintptr_t VehicleSeat_TurnSpeed = 0x250;

    // VisualEngine
    inline constexpr uintptr_t VisualEngine_Dimensions = 0xA70;
    inline constexpr uintptr_t VisualEngine_FakeDataModel = 0xA50;
    inline constexpr uintptr_t VisualEngine_Pointer = 0x7D890C0;
    inline constexpr uintptr_t VisualEngine_RenderView = 0xB50;
    inline constexpr uintptr_t VisualEngine_ViewMatrix = 0x140;

    // Workspace
    inline constexpr uintptr_t Workspace_CurrentCamera = 0x468;
    inline constexpr uintptr_t Workspace_ReadOnlyGravity = 0x988;
    inline constexpr uintptr_t Workspace_World = 0x3E0;

    // World
    inline constexpr uintptr_t World_Gravity = 0x1D0;
    inline constexpr uintptr_t World_Primitives = 0x240;
    inline constexpr uintptr_t World_WorldSteps = 0x660;

} // namespace bolt
