#pragma once
UENUM(BlueprintType)
enum class EBrickUIStyleState : uint8
{
	Default,
	Button,
	Pressed,
	Focused,
	Marquee,
	Foreground,
	ForegroundPressed,
	ForegroundFocused,
	Custom UMETA(Hidden),
	Max UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBrickUIBrushStyle : uint8
{
	Default,
	Button,
	FolderButton,
	MapButton,
	HoldKeyBorder,
	BorderlessButton,
	Custom,
	Max UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBrickUIColorStyle : uint8
{
	Default,
	Selected,
	Active,
	Positive,
	Negative,
	Neutral,
	Custom,
	Max UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBrickUITextStyle : uint8
{
	Default,
	Bold,
	Small,
	Large,
	Positive,
	Negative,
	Neutral,
	HUD,
	Logo,
	Custom,
	Max UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EBrickUIIconAtlas : uint8
{
	Default,
	MenuButtons,
	MouseKeys,
	GamepadKeys,
	HUDIcons,
	FireModes,
	AmmoTypes,
	HealthIcons,
	Notifications,
	ConnectionIcons,
	ServerIcons,
	HUDNotifications,
	DashboardIcons,
	SocialMediaIcons,
	Custom,
	Max UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EValueChangedEventType : uint8
{
    Commit,
    Cancel,
    Pending
};

