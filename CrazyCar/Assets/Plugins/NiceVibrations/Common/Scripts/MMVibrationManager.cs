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
	public enum HapticTypes { Selection, Success, Warning, Failure, LightImpact, MediumImpact, HeavyImpact, RigidImpact, SoftImpact, None }

	/// <summary>
	/// This class will allow you to trigger vibrations and haptic feedbacks on both iOS and Android, 
	/// or on each specific platform independently.
	/// 
	/// For haptics patterns, it takes inspiration from the iOS guidelines : 
	/// https://developer.apple.com/ios/human-interface-guidelines/user-interaction/feedback
	/// Of course the iOS haptics are called directly as they are, and they're crudely reproduced on Android.
	/// Feel free to tweak the patterns or create your own.
	/// 
	/// Here's a brief overview of the patterns :
	/// 
	/// - selection : light
	/// - success : light / heavy
	/// - warning : heavy / medium
	/// - failure : medium / medium / heavy / light
	/// - light 
	/// - medium 
	/// - heavy  
    /// - soft
    /// - rigid
    /// 
    /// In addition, this class will also let you trigger core haptics on supported devices running recent versions of iOS (after iOS 13).
    /// These let you trigger transient or continuous haptics, or play AHAP based JSON strings for even more control.
	/// 
	/// </summary>
	public static class MMVibrationManager 
	{
        private static bool _vibrationsActive = true;
        private static bool _debugLogActive = false;
        
        public static float iOSVersion;
		public static long LightDuration = 20;
		public static long MediumDuration = 40;
        public static long HeavyDuration = 80;
        public static long RigidDuration = 20;
        public static long SoftDuration = 80;
        public static int LightAmplitude = 40;
		public static int MediumAmplitude = 120;
		public static int HeavyAmplitude = 255;
        public static int RigidAmplitude = 255;
        public static int SoftAmplitude = 40;

        private static long[] _rigidImpactPattern = { 0, RigidDuration };
        private static int[] _rigidImpactPatternAmplitude = { 0, RigidAmplitude };
        private static long[] _softImpactPattern = { 0, SoftDuration };
        private static int[] _softImpactPatternAmplitude = { 0, SoftAmplitude };
        private static long[] _lightImpactPattern = { 0, LightDuration };
        private static int[] _lightImpactPatternAmplitude = { 0, LightAmplitude };
        private static long[] _mediumImpactPattern = { 0, MediumDuration };
        private static int[] _mediumImpactPatternAmplitude = { 0, MediumAmplitude };        
        private static long[] _HeavyImpactPattern = { 0, HeavyDuration };
        private static int[] _HeavyImpactPatternAmplitude = { 0, HeavyAmplitude };
        private static long[] _successPattern = { 0, LightDuration, LightDuration, HeavyDuration};
		private static int[] _successPatternAmplitude = { 0, LightAmplitude, 0, HeavyAmplitude};
		private static long[] _warningPattern = { 0, HeavyDuration, LightDuration, MediumDuration};
		private static int[] _warningPatternAmplitude = { 0, HeavyAmplitude, 0, MediumAmplitude};
		private static long[] _failurePattern = { 0, MediumDuration, LightDuration, MediumDuration, LightDuration, HeavyDuration, LightDuration, LightDuration};
		private static int[] _failurePatternAmplitude = { 0, MediumAmplitude, 0, MediumAmplitude, 0, HeavyAmplitude, 0, LightAmplitude};

        /// <summary>
        /// On construction, computes the current iOS version
        /// </summary>
        static MMVibrationManager()
        {
            DebugLog("[MMVibrationManager] Initialize vibration manager");
            iOSVersion = ComputeiOSVersion();
        }

        /// <summary>
        /// Enables or disables all haptics called via this class
        /// </summary>
        /// <param name="status"></param>
        public static void SetHapticsActive(bool status)
        {
            DebugLog("[MMVibrationManager] Set haptics active : "+status);
            _vibrationsActive = status;
        }

        /// <summary>
        /// Returns true if haptics are supported on this device
        /// </summary>
        /// <returns></returns>
        public static bool HapticsSupported()
        {
            if (iOS())
            {
                if (iOSVersion >= 13)
                {
                    return MMNViOSCoreHaptics.CoreHapticsSupported();
                }
                else
                {
                    return MMNViOS.iOSHapticsSupported();
                }
            }
            if (Android())
            {
                return MMNVAndroid.AndroidHasVibrator();
            }
            return false;
        }

        /// <summary>
        /// Enables or disables console logs (off by default)
        /// </summary>
        /// <param name="log"></param>
        public static void SetDebugMode(bool log)
        {
            _debugLogActive = log;
            MMNViOSCoreHaptics.SetDebugMode(true);
        }

        /// <summary>
        /// Returns true if the current platform is Android, false otherwise.
        /// </summary>
        public static bool Android()
		{
            #if UNITY_ANDROID && !UNITY_EDITOR
				return true;
            #else
				return false;
            #endif
		}

		/// <summary>
		/// Returns true if the current platform is iOS, false otherwise
		/// </summary>
		/// <returns><c>true</c>, if O was ied, <c>false</c> otherwise.</returns>
		public static bool iOS()
		{
#if UNITY_IOS && !UNITY_EDITOR
				return true;
#else
				return false;
#endif
		}

		/// <summary>
		/// Triggers a simple vibration
		/// </summary>
		public static void Vibrate()
        {
            DebugLog("[MMVibrationManager] Vibrate");
            if (!_vibrationsActive)
            {
                return;
            }
            if (Android())
			{
			    MMNVAndroid.AndroidVibrate (MediumDuration);
			} 
			else if (iOS())
			{
                if (iOSVersion >= 13)
                {
                    MMNViOSCoreHaptics.PlayTransientHapticPattern(0.8f, 0.8f);
                }
                else
                {
                    MMNViOS.iOSTriggerHaptics(HapticTypes.MediumImpact);
                }                
			} 
		}

		/// <summary>
		/// Triggers a haptic feedback of the specified type
		/// </summary>
		/// <param name="type">Type.</param>
		public static void Haptic(HapticTypes type, bool defaultToRegularVibrate = false)
		{
            if (!_vibrationsActive)
            {
                return;
            }

            DebugLog("[MMVibrationManager] Regular Haptic");

            if (Android())
			{
				switch (type)
				{
                    case HapticTypes.None:
                        // do nothing
                        break;
					case HapticTypes.Selection:
						MMNVAndroid.AndroidVibrate (LightDuration, LightAmplitude);
						break;

					case HapticTypes.Success:
                        MMNVAndroid.AndroidVibrate(_successPattern, _successPatternAmplitude, -1);
						break;

					case HapticTypes.Warning:
                        MMNVAndroid.AndroidVibrate(_warningPattern, _warningPatternAmplitude, -1);
						break;

					case HapticTypes.Failure:
                        MMNVAndroid.AndroidVibrate(_failurePattern, _failurePatternAmplitude, -1);
						break;

					case HapticTypes.LightImpact:
                        MMNVAndroid.AndroidVibrate (_lightImpactPattern, _lightImpactPatternAmplitude, -1);
						break;

					case HapticTypes.MediumImpact:
                        MMNVAndroid.AndroidVibrate (_mediumImpactPattern, _mediumImpactPatternAmplitude, -1);
						break;

					case HapticTypes.HeavyImpact:
                        MMNVAndroid.AndroidVibrate (_HeavyImpactPattern, _HeavyImpactPatternAmplitude, -1);
						break;
                    case HapticTypes.RigidImpact:
                        MMNVAndroid.AndroidVibrate(_rigidImpactPattern, _rigidImpactPatternAmplitude, -1);
                        break;
                    case HapticTypes.SoftImpact:
                        MMNVAndroid.AndroidVibrate(_softImpactPattern, _softImpactPatternAmplitude, -1);
                        break;
				}
			} 
			else if (iOS())
			{
                MMNViOS.iOSTriggerHaptics(type, defaultToRegularVibrate);
			} 
		}

        /// <summary>
        /// Plays a transient haptic, a single, short haptic feedback, of the specified intensity and sharpness
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        public static void TransientHaptic(float intensity, float sharpness)
        {
            if (!_vibrationsActive)
            {
                return;
            }

            DebugLog("[MMVibrationManager] Transient Haptic");

            if (Android())
            {
                intensity = NiceVibrationsDemoHelpers.Remap(intensity, 0f, 1f, 0, 255);

                MMNVAndroid.AndroidVibrate(100, (int)(intensity));
            }
            else if (iOS())
            {
                if (iOSVersion >= 13)
                {
                    MMNViOSCoreHaptics.PlayTransientHapticPattern(intensity, sharpness);
                }
                else
                {
                    if (intensity < 0.3f)
                    {
                        MMNViOS.iOSTriggerHaptics(HapticTypes.LightImpact);
                    }
                    else if ((intensity >= 0.3f) && (intensity < 0.6f))
                    {
                        MMNViOS.iOSTriggerHaptics(HapticTypes.MediumImpact);
                    }
                    else
                    {
                        MMNViOS.iOSTriggerHaptics(HapticTypes.HeavyImpact);
                    }                    
                }
            }
        }

        /// <summary>
        /// Plays a continuous haptic of the specified intensity, sharpness and duration
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        /// <param name="duration"></param>
        public static void ContinuousHaptic(float intensity, float sharpness, float duration, HapticTypes fallbackOldiOS = HapticTypes.None, MonoBehaviour mono = null)
        {
            if (!_vibrationsActive)
            {
                return;
            }
            
            DebugLog("[MMVibrationManager] Continuous Haptic");

            if (Android())
            {
                intensity = NiceVibrationsDemoHelpers.Remap(intensity, 0f, 1f, 0, 255);

                MMNVAndroid.AndroidVibrate((long)(duration * 1000), (int)(intensity));
            }
            else if (iOS())
            {
                if (iOSVersion >= 13)
                {
                    MMNViOSCoreHaptics.PlayContinuousHapticPattern(intensity, sharpness, duration, mono);
                }
                else
                {
                    MMNViOS.iOSTriggerHaptics(fallbackOldiOS);                    
                }
            }
        }

        /// <summary>
        /// Stops all running pattern or continuous haptics
        /// </summary>
        public static void StopContinuousHaptic()
        {
            DebugLog("[MMVibrationManager] Stop Continuous Haptic");
            MMNViOSCoreHaptics.StopHapticPatterns();
            MMNVAndroid.AndroidCancelVibrations();
        }

        /// <summary>
        /// Plays a haptic pattern, the most complex type of haptic, defined by a JSON string on iOS, and a pattern on Android
        /// </summary>
        /// <param name="iOSJSONString"></param>
        /// <param name="androidPattern"></param>
        /// <param name="androidAmplitudes"></param>
        /// <param name="androidRepeat"></param>
        /// <param name="fallbackOldiOS"></param>
        public static void AdvancedHapticPattern(string iOSJSONString, long[] androidPattern, int[] androidAmplitudes, int androidRepeat, HapticTypes fallbackOldiOS = HapticTypes.None)
        {
            if (!_vibrationsActive)
            {
                return;
            }
            
            DebugLog("[MMVibrationManager] Advanced Haptic Pattern");

            if (Android())
            {
                MMNVAndroid.AndroidVibrate(androidPattern, androidAmplitudes, androidRepeat);
            }
            else if (iOS())
            {
                if (iOSVersion >= 13)
                {
                    MMNViOSCoreHaptics.PlayCoreHapticsFromJSON(iOSJSONString);
                }
                else
                {
                    MMNViOS.iOSTriggerHaptics(fallbackOldiOS);
                }
            }
        }

        /// <summary>
        /// Computes and stores the current iOS version
        /// </summary>
        /// <returns></returns>
        public static float ComputeiOSVersion()
        {
            int version = 0;
            string versionAsString = "0.0.0";
#if UNITY_IOS
                versionAsString = Device.systemVersion;
#endif

            string[] versionArray = versionAsString.Split('.');

            int.TryParse(versionArray[0], out version);

            DebugLog("[MMVibrationManager] iOS Version : "+version.ToString());

            return version;
        }

        // DEBUG -------------------------------------------------------------------------------------------------------------------

        /// <summary>
        /// Outputs the specified string to the console if in debug mode
        /// </summary>
        /// <param name="log"></param>
        private static void DebugLog(string log)
        {
            if (_debugLogActive)
            {
                Debug.Log(log);
            }
        }
    }
}