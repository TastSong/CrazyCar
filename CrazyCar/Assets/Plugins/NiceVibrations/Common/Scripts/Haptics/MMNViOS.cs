using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System;

#if UNITY_IOS
	using UnityEngine.iOS;
#endif

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// This class handles all iOS haptics specific calls, pre-CoreHaptics API
    /// </summary>
    public static class MMNViOS 
    {
        // The following will only work if the iOSHapticInterface.m file is in a Plugins folder in your project.
        // It's a pretty straightforward implementation of iOS's UIFeedbackGenerator's methods.
        // You can learn more about them there : https://developer.apple.com/documentation/uikit/uifeedbackgenerator

#if UNITY_IOS && !UNITY_EDITOR
			[DllImport ("__Internal")]
			private static extern void MMNViOS_InstantiateFeedbackGenerators();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_ReleaseFeedbackGenerators();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_SelectionHaptic();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_SuccessHaptic();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_WarningHaptic();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_FailureHaptic();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_LightImpactHaptic();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_MediumImpactHaptic();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_HeavyImpactHaptic();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_RigidImpactHaptic();
			[DllImport ("__Internal")]
			private static extern void MMNViOS_SoftImpactHaptic();
#else
        private static void MMNViOS_InstantiateFeedbackGenerators() { }
            private static void MMNViOS_ReleaseFeedbackGenerators() { }
            private static void MMNViOS_SelectionHaptic() { }
            private static void MMNViOS_SuccessHaptic() { }
            private static void MMNViOS_WarningHaptic() { }
            private static void MMNViOS_FailureHaptic() { }
            private static void MMNViOS_LightImpactHaptic() { }
            private static void MMNViOS_MediumImpactHaptic() { }
            private static void MMNViOS_HeavyImpactHaptic() { }
            private static void MMNViOS_RigidImpactHaptic() { }
            private static void MMNViOS_SoftImpactHaptic() { }
#endif
        private static bool iOSHapticsInitialized = false;

        /// <summary>
        /// Call this method to initialize the haptics. If you forget to do it, Nice Vibrations will do it for you the first time you
        /// call iOSTriggerHaptics. It's better if you do it though.
        /// </summary>
        public static void iOSInitializeHaptics()
        {
            if (!MMNVPlatform.iOS()) { return; }
            MMNViOS_InstantiateFeedbackGenerators();
            iOSHapticsInitialized = true;
        }

        /// <summary>
        /// Releases the feedback generators, usually you'll want to call this at OnDisable(); or anytime you know you won't need 
        /// vibrations anymore.
        /// </summary>
        public static void iOSReleaseHaptics()
        {
            if (!MMNVPlatform.iOS()) { return; }
            MMNViOS_ReleaseFeedbackGenerators();
        }

        /// <summary>
		/// iOS only : triggers a haptic feedback of the specified type
		/// </summary>
		/// <param name="type">Type.</param>
		public static void iOSTriggerHaptics(HapticTypes type, bool defaultToRegularVibrate = false)
        {
            if (!MMNVPlatform.iOS()) { return; }

            if (!iOSHapticsInitialized)
            {
                iOSInitializeHaptics();
            }

            // this will trigger a standard vibration on all the iOS devices that don't support haptic feedback

            if (iOSHapticsSupported())
            {
                switch (type)
                {
                    case HapticTypes.Selection:
                        MMNViOS_SelectionHaptic();
                        break;

                    case HapticTypes.Success:
                        MMNViOS_SuccessHaptic();
                        break;

                    case HapticTypes.Warning:
                        MMNViOS_WarningHaptic();
                        break;

                    case HapticTypes.Failure:
                        MMNViOS_FailureHaptic();
                        break;

                    case HapticTypes.LightImpact:
                        MMNViOS_LightImpactHaptic();
                        break;

                    case HapticTypes.MediumImpact:
                        MMNViOS_MediumImpactHaptic();
                        break;

                    case HapticTypes.HeavyImpact:
                        MMNViOS_HeavyImpactHaptic();
                        break;

                    case HapticTypes.RigidImpact:
                        MMNViOS_RigidImpactHaptic();
                        break;

                    case HapticTypes.SoftImpact:
                        MMNViOS_SoftImpactHaptic();
                        break;
                }
            }
            else if (defaultToRegularVibrate)
            {
                #if UNITY_IOS
					Handheld.Vibrate();
                #endif
            }
        }

        /// <summary>
		/// Returns a string containing iOS SDK informations
		/// </summary>
		/// <returns>The OSSDK version.</returns>
		public static string iOSSDKVersion()
        {
            #if UNITY_IOS && !UNITY_EDITOR
				            return Device.systemVersion;
            #else
                        return null;
            #endif
        }


        /// <summary>
        /// Computes and stores the current iOS version
        /// </summary>
        /// <returns></returns>
        public static float ComputeiOSVersion()
        {
            int version = 0;
            string versionAsString = "0.0.0";
#if UNITY_IOS && !UNITY_EDITOR
                versionAsString = Device.systemVersion;
#endif

            string[] versionArray = versionAsString.Split('.');

            int.TryParse(versionArray[0], out version);

            return version;
        }

        /// <summary>
		/// This methods tests the current device generation against a list of devices that don't support haptics, and returns true if haptics are supported, false otherwise.
		/// </summary>
		/// <returns><c>true</c>, if supported was hapticsed, <c>false</c> otherwise.</returns>
		public static bool iOSHapticsSupported()
        {
            bool hapticsSupported = false;
            #if UNITY_IOS
			    DeviceGeneration generation = Device.generation;
			    if ((generation == DeviceGeneration.iPhone3G)
			    || (generation == DeviceGeneration.iPhone3GS)
			    || (generation == DeviceGeneration.iPodTouch1Gen)
			    || (generation == DeviceGeneration.iPodTouch2Gen)
			    || (generation == DeviceGeneration.iPodTouch3Gen)
			    || (generation == DeviceGeneration.iPodTouch4Gen)
			    || (generation == DeviceGeneration.iPhone4)
			    || (generation == DeviceGeneration.iPhone4S)
			    || (generation == DeviceGeneration.iPhone5)
			    || (generation == DeviceGeneration.iPhone5C)
			    || (generation == DeviceGeneration.iPhone5S)
			    || (generation == DeviceGeneration.iPhone6)
			    || (generation == DeviceGeneration.iPhone6Plus)
			    || (generation == DeviceGeneration.iPhone6S)
			    || (generation == DeviceGeneration.iPhone6SPlus)
                || (generation == DeviceGeneration.iPhoneSE1Gen)
                || (generation == DeviceGeneration.iPad1Gen)
                || (generation == DeviceGeneration.iPad2Gen)
                || (generation == DeviceGeneration.iPad3Gen)
                || (generation == DeviceGeneration.iPad4Gen)
                || (generation == DeviceGeneration.iPad5Gen)
                || (generation == DeviceGeneration.iPadAir1)
                || (generation == DeviceGeneration.iPadAir2)
                || (generation == DeviceGeneration.iPadMini1Gen)
                || (generation == DeviceGeneration.iPadMini2Gen)
                || (generation == DeviceGeneration.iPadMini3Gen)
                || (generation == DeviceGeneration.iPadMini4Gen)
                || (generation == DeviceGeneration.iPadPro10Inch1Gen)
                || (generation == DeviceGeneration.iPadPro10Inch2Gen)
                || (generation == DeviceGeneration.iPadPro11Inch)
                || (generation == DeviceGeneration.iPadPro1Gen)
                || (generation == DeviceGeneration.iPadPro2Gen)
                || (generation == DeviceGeneration.iPadPro3Gen)
                || (generation == DeviceGeneration.iPadUnknown)
                || (generation == DeviceGeneration.iPodTouch1Gen)
                || (generation == DeviceGeneration.iPodTouch2Gen)
                || (generation == DeviceGeneration.iPodTouch3Gen)
                || (generation == DeviceGeneration.iPodTouch4Gen)
                || (generation == DeviceGeneration.iPodTouch5Gen)
                || (generation == DeviceGeneration.iPodTouch6Gen)
			    || (generation == DeviceGeneration.iPhone6SPlus))
			    {
			        hapticsSupported = false;
			    }
			    else
			    {
			        hapticsSupported = true;
			    }
            #endif
            return hapticsSupported;
        }
    }
}
