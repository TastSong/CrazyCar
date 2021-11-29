// This iOS haptic interface is a pretty straightforward implementation of UIKit's framework :
// You can learn more about these methods at https://developer.apple.com/documentation/uikit/animation_and_haptics
// DO NOT remove this from your project, or iOS vibrations won't work anymore!

#import <Foundation/Foundation.h>

UISelectionFeedbackGenerator* SelectionFeedbackGenerator;
UINotificationFeedbackGenerator* NotificationFeedbackGenerator;
UIImpactFeedbackGenerator* LightImpactFeedbackGenerator;
UIImpactFeedbackGenerator* MediumImpactFeedbackGenerator;
UIImpactFeedbackGenerator* HeavyImpactFeedbackGenerator;
UIImpactFeedbackGenerator* RigidImpactFeedbackGenerator;
UIImpactFeedbackGenerator* SoftImpactFeedbackGenerator;

// INIT METHOD ---------------------------------------------------------------------------

void MMNViOS_InstantiateFeedbackGenerators()
{
    SelectionFeedbackGenerator = [[UISelectionFeedbackGenerator alloc] init];
    NotificationFeedbackGenerator = [[UINotificationFeedbackGenerator alloc] init];
    LightImpactFeedbackGenerator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
    MediumImpactFeedbackGenerator =  [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
    HeavyImpactFeedbackGenerator =  [[UIImpactFeedbackGenerator alloc] initWithStyle: UIImpactFeedbackStyleHeavy];
    if (@available(iOS 13, *))
    {
      RigidImpactFeedbackGenerator =  [[UIImpactFeedbackGenerator alloc] initWithStyle: UIImpactFeedbackStyleRigid];
    	SoftImpactFeedbackGenerator =  [[UIImpactFeedbackGenerator alloc] initWithStyle: UIImpactFeedbackStyleSoft];
    }
    else
    {
      RigidImpactFeedbackGenerator =  [[UIImpactFeedbackGenerator alloc] initWithStyle: UIImpactFeedbackStyleHeavy];
    	SoftImpactFeedbackGenerator =  [[UIImpactFeedbackGenerator alloc] initWithStyle: UIImpactFeedbackStyleLight];
    }
}

// RELEASE METHOD ---------------------------------------------------------------------------

void MMNViOS_ReleaseFeedbackGenerators ()
{
    SelectionFeedbackGenerator = nil;
    NotificationFeedbackGenerator = nil;
    LightImpactFeedbackGenerator = nil;
    MediumImpactFeedbackGenerator = nil;
    HeavyImpactFeedbackGenerator = nil;
    RigidImpactFeedbackGenerator = nil;
    SoftImpactFeedbackGenerator = nil;
}

// PREPARATION METHODS ----------------------------------------------------------------------

void MMNViOS_PrepareSelectionFeedbackGenerator()
{
    [SelectionFeedbackGenerator prepare];
}

void MMNViOS_PrepareNotificationFeedbackGenerator()
{
    [NotificationFeedbackGenerator prepare];
}

void MMNViOS_PrepareLightImpactFeedbackGenerator()
{
    [LightImpactFeedbackGenerator prepare];
}

void MMNViOS_PrepareMediumImpactFeedbackGenerator()
{
    [MediumImpactFeedbackGenerator prepare];
}

void MMNViOS_PrepareHeavyImpactFeedbackGenerator()
{
    [HeavyImpactFeedbackGenerator prepare];
}

void MMNViOS_PrepareRigidImpactFeedbackGenerator()
{
    [RigidImpactFeedbackGenerator prepare];
}

void MMNViOS_PrepareSoftImpactFeedbackGenerator()
{
    [SoftImpactFeedbackGenerator prepare];
}

// FEEDBACK TRIGGER METHODS -------------------------------------------------------------------------

void MMNViOS_SelectionHaptic()
{
    [SelectionFeedbackGenerator prepare];
    [SelectionFeedbackGenerator selectionChanged];
}

void MMNViOS_SuccessHaptic()
{
    [NotificationFeedbackGenerator prepare];
    [NotificationFeedbackGenerator notificationOccurred:UINotificationFeedbackTypeSuccess];
}

void MMNViOS_WarningHaptic()
{
    [NotificationFeedbackGenerator prepare];
    [NotificationFeedbackGenerator notificationOccurred:UINotificationFeedbackTypeWarning];
}

void MMNViOS_FailureHaptic()
{
    [NotificationFeedbackGenerator prepare];
    [NotificationFeedbackGenerator notificationOccurred:UINotificationFeedbackTypeError];
}

void MMNViOS_LightImpactHaptic()
{
    [LightImpactFeedbackGenerator prepare];
    [LightImpactFeedbackGenerator impactOccurred];
}

void MMNViOS_MediumImpactHaptic()
{
    [MediumImpactFeedbackGenerator prepare];
    [MediumImpactFeedbackGenerator impactOccurred];
}

void MMNViOS_HeavyImpactHaptic()
{
    [HeavyImpactFeedbackGenerator prepare];
    [HeavyImpactFeedbackGenerator impactOccurred];
}

void MMNViOS_RigidImpactHaptic()
{
    [RigidImpactFeedbackGenerator prepare];
    [RigidImpactFeedbackGenerator impactOccurred];
}

void MMNViOS_SoftImpactHaptic()
{
    [SoftImpactFeedbackGenerator prepare];
    [SoftImpactFeedbackGenerator impactOccurred];
}
