using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace MoreMountains.NiceVibrations
{
    public class NiceVibrationsDemoManager : MonoBehaviour
    {
        /// a text object in the demo scene in which debug information will be displayed
        public Text DebugTextBox;

        protected string _debugString;
        protected string _platformString;
        protected const string _CURRENTVERSION = "1.7";

        /// <summary>
        /// On Awake, we initialize our iOS haptics.
        /// Of course, this only needs to be done when on iOS, or targeting iOS. 
        /// A test will be done and this method will do nothing if running on anything else
        /// </summary>
        protected virtual void Awake()
        {
            MMNViOS.iOSInitializeHaptics();
        }

        /// <summary>
        /// On Start, we display our debug information
        /// </summary>
        protected virtual void Start()
        {
            DisplayInformation();
        }

        /// <summary>
        /// Displays the debug information (API version on Android, iOS sdk version, and error message otherwise)
        /// </summary>
        protected virtual void DisplayInformation()
        {
            if (MMVibrationManager.Android())
            {
                _platformString = "API version " + MMNVAndroid.AndroidSDKVersion().ToString();
            }
            else if (MMVibrationManager.iOS())
            {
                _platformString = "iOS " + MMNViOS.iOSSDKVersion();
            }
            else
            {
                _platformString = Application.platform + ", not supported by Nice Vibrations for now.";
            }

            DebugTextBox.text = "Platform : " + _platformString + "\n Nice Vibrations v" + _CURRENTVERSION;
        }

        /// <summary>
        /// On Disable, we release our iOS haptics (to save memory and avoid garbage).
        /// Of course, this only needs to be done when on iOS, or targeting iOS. 
        /// A test will be done and this method will do nothing if running on anything else
        /// </summary>
        protected virtual void OnDisable()
        {
            MMNViOS.iOSReleaseHaptics();
        }

        /// <summary>
        /// The following methods are bound (via the inspector) to buttons in the demo scene, and will call the corresponding vibration methods
        /// </summary>

        /// <summary>
        /// Triggers the default Unity vibration, without any control over duration, pattern or amplitude
        /// </summary>
        public virtual void TriggerDefault()
        {
#if UNITY_IOS || UNITY_ANDROID
				Handheld.Vibrate ();	
#endif
        }

        /// <summary>
        /// Triggers the default Vibrate method, which will result in a medium vibration on Android and a medium impact on iOS
        /// </summary>
        public virtual void TriggerVibrate()
        {
            MMVibrationManager.Vibrate();
        }

        /// <summary>
        /// Triggers the selection haptic feedback, a light vibration on Android, and a light impact on iOS
        /// </summary>
        public virtual void TriggerSelection()
        {
            MMVibrationManager.Haptic(HapticTypes.Selection);
        }

        /// <summary>
        /// Triggers the success haptic feedback, a light then heavy vibration on Android, and a success impact on iOS
        /// </summary>
        public virtual void TriggerSuccess()
        {
            MMVibrationManager.Haptic(HapticTypes.Success);
        }

        /// <summary>
        /// Triggers the warning haptic feedback, a heavy then medium vibration on Android, and a warning impact on iOS
        /// </summary>
        public virtual void TriggerWarning()
        {
            MMVibrationManager.Haptic(HapticTypes.Warning);
        }

        /// <summary>
        /// Triggers the failure haptic feedback, a medium / heavy / heavy / light vibration pattern on Android, and a failure impact on iOS
        /// </summary>
        public virtual void TriggerFailure()
        {
            MMVibrationManager.Haptic(HapticTypes.Failure);
        }

        /// <summary>
        /// Triggers a light impact on iOS and a short and light vibration on Android.
        /// </summary>
        public virtual void TriggerLightImpact()
        {
            MMVibrationManager.Haptic(HapticTypes.LightImpact);
        }

        /// <summary>
        /// Triggers a medium impact on iOS and a medium and regular vibration on Android.
        /// </summary>
        public virtual void TriggerMediumImpact()
        {
            MMVibrationManager.Haptic(HapticTypes.MediumImpact);
        }

        /// <summary>
        /// Triggers a heavy impact on iOS and a long and heavy vibration on Android.
        /// </summary>
        public virtual void TriggerHeavyImpact()
        {
            MMVibrationManager.Haptic(HapticTypes.HeavyImpact);
        }
    }
}