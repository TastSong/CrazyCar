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
	/// </summary>
	public static class MMVibrationManager
	{
        /// the current iOS version
        public static float iOSVersion;
        /// the duration of the light vibration (in microseconds)
		public static long LightDuration = 20;
        /// the duration of the medium vibration (in microseconds)
		public static long MediumDuration = 40;
        /// the duration of the heavy vibration (in microseconds)
        public static long HeavyDuration = 80;
        /// the duration of the rigid vibration (in microseconds)
        public static long RigidDuration = 20;
        /// the duration of the soft vibration (in microseconds)
        public static long SoftDuration = 80;
        /// the amplitude of the light vibration
        public static int LightAmplitude = 40;
        /// the amplitude of the medium vibration
		public static int MediumAmplitude = 120;
        /// the amplitude of the heavy vibration
		public static int HeavyAmplitude = 255;
        /// the amplitude of the rigid vibration
        public static int RigidAmplitude = 255;
        /// the amplitude of the soft vibration
        public static int SoftAmplitude = 40;

        private static bool _vibrationsActive = true;
        private static bool _debugLogActive = false;
        private static bool _hapticsPlayedOnce = false;

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

        #if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
        private static Vector3 _rumbleRigid = new Vector3(0.5f, 1f, 0.08f);
        private static Vector3 _rumbleSoft = new Vector3(1f, 0.03f, 0.1f);
        private static Vector3 _rumbleLight = new Vector3(0.5f, 0.5f, 0.02f);
        private static Vector3 _rumbleMedium = new Vector3(0.8f, 0.8f, 0.04f);
        private static Vector3 _rumbleHeavy = new Vector3(1f, 1f, 0.08f);
        private static Vector3 _rumbleSuccess = new Vector3(1f, 1f, 1f);
        private static Vector3 _rumbleWarning = new Vector3(1f, 1f, 1f);
        private static Vector3 _rumbleFailure = new Vector3(1f, 1f, 1f);
        private static Vector3 _rumbleSelection = new Vector3(1f, 1f, 1f);
        #endif


        /// <summary>
        /// On construction, computes the current iOS version
        /// </summary>
        static MMVibrationManager()
        {
            DebugLog("[MMVibrationManager] Initialize vibration manager");
            iOSVersion = MMNViOS.ComputeiOSVersion();
        }

        /// <summary>
        /// Enables or disables all haptics called via this class
        /// </summary>
        /// <param name="status"></param>
        public static void SetHapticsActive(bool status)
        {
            DebugLog("[MMVibrationManager] Set haptics active : "+status);
            _vibrationsActive = status;
            if (!status)
            {
                MMVibrationManager.StopContinuousHaptic(true);    
            }
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
            return MMNVPlatform.Android();
        }

		/// <summary>
		/// Returns true if the current platform is iOS, false otherwise
		/// </summary>
		/// <returns><c>true</c>, if O was ied, <c>false</c> otherwise.</returns>
		public static bool iOS()
		{
            return MMNVPlatform.iOS();
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
                if ((iOSVersion >= 13) && HapticsSupported())
                {
                    MMNViOSCoreHaptics.PlayTransientHapticPattern(0.8f, 0.8f, true);
                    _hapticsPlayedOnce = true;
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
		public static void Haptic(HapticTypes type, bool defaultToRegularVibrate = false, bool alsoRumble = false, MonoBehaviour coroutineSupport = null, int controllerID = -1)
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

            if (alsoRumble && (coroutineSupport != null))
            {
                #if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
                switch (type)
                {
                    case HapticTypes.None:
                        // do nothing
                        break;
                    case HapticTypes.Selection:
                        MMNVRumble.Rumble(_rumbleLight.x, _rumbleMedium.y, _rumbleLight.z, coroutineSupport, controllerID);
                        break;

                    case HapticTypes.Success:
                        MMNVRumble.Rumble(_successPattern, _successPatternAmplitude, -1, coroutineSupport, controllerID);
                        break;

                    case HapticTypes.Warning:
                        MMNVRumble.Rumble(_warningPattern, _warningPatternAmplitude, -1, coroutineSupport, controllerID);
                        break;

                    case HapticTypes.Failure:
                        MMNVRumble.Rumble(_failurePattern, _failurePatternAmplitude, -1, coroutineSupport, controllerID);
                        break;

                    case HapticTypes.LightImpact:
                        MMNVRumble.Rumble(_rumbleLight.x, _rumbleLight.y, _rumbleLight.z, coroutineSupport, controllerID);
                        break;

                    case HapticTypes.MediumImpact:
                        MMNVRumble.Rumble(_rumbleMedium.x, _rumbleMedium.y, _rumbleMedium.z, coroutineSupport, controllerID);
                        break;

                    case HapticTypes.HeavyImpact:
                        MMNVRumble.Rumble(_rumbleHeavy.x, _rumbleHeavy.y, _rumbleHeavy.z, coroutineSupport, controllerID);
                        break;
                    case HapticTypes.RigidImpact:
                        MMNVRumble.Rumble(_rumbleRigid.x, _rumbleRigid.y, _rumbleRigid.z, coroutineSupport, controllerID);
                        break;
                    case HapticTypes.SoftImpact:
                        MMNVRumble.Rumble(_rumbleSoft.x, _rumbleSoft.y, _rumbleSoft.z, coroutineSupport, controllerID);
                        break;
                }
                #endif
            }
		}

        /// <summary>
        /// Plays a transient haptic, a single, short haptic feedback, of the specified intensity and sharpness
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        public static void TransientHaptic(float intensity, float sharpness, bool alsoRumble = false, MonoBehaviour coroutineSupport = null, int controllerID = -1)
        {
            TransientHaptic(true, intensity, sharpness, true, intensity, sharpness, true, alsoRumble, intensity, sharpness, controllerID, coroutineSupport);
        }

        /// <summary>
        /// Plays a transient haptic, signature with more fine control
        /// </summary>
        /// <param name="vibrateiOS"></param>
        /// <param name="iOSIntensity"></param>
        /// <param name="iOSSharpness"></param>
        /// <param name="vibrateAndroid"></param>
        /// <param name="androidIntensity"></param>
        /// <param name="androidSharpness"></param>
        /// <param name="vibrateAndroidIfNoSupport"></param>
        /// <param name="rumble"></param>
        /// <param name="rumbleLowFrequency"></param>
        /// <param name="rumbleHighFrequency"></param>
        /// <param name="controllerID"></param>
        /// <param name="coroutineSupport"></param>
        public static void TransientHaptic(bool vibrateiOS, float iOSIntensity, float iOSSharpness, 
                                            bool vibrateAndroid, float androidIntensity = 1f, float androidSharpness = 1f,
                                            bool vibrateAndroidIfNoSupport = false,
                                            bool rumble = true, float rumbleLowFrequency = 1f, float rumbleHighFrequency = 1f, int controllerID = -1,
                                            MonoBehaviour coroutineSupport = null, bool threaded = true)
        {
            if (!_vibrationsActive)
            {
                return;
            }

            DebugLog("[MMVibrationManager] Transient Haptic");

            if (Android() && vibrateAndroid)
            {
                if (!MMNVAndroid.AndroidHasAmplitudeControl() && !vibrateAndroidIfNoSupport)
                {
                    return;
                }
                androidIntensity = Remap(androidIntensity, 0f, 1f, 0, 255);
                MMNVAndroid.AndroidVibrate(100, (int)(androidIntensity));
            }
            else if (iOS() && vibrateiOS)
            {
                if ((iOSVersion >= 13) && HapticsSupported())
                {
                    MMNViOSCoreHaptics.PlayTransientHapticPattern(iOSIntensity, iOSSharpness, threaded);
                    _hapticsPlayedOnce = true;
                }
                else
                {
                    if (iOSIntensity < 0.3f)
                    {
                        MMNViOS.iOSTriggerHaptics(HapticTypes.LightImpact);
                    }
                    else if ((iOSIntensity >= 0.3f) && (iOSIntensity < 0.6f))
                    {
                        MMNViOS.iOSTriggerHaptics(HapticTypes.MediumImpact);
                    }
                    else
                    {
                        MMNViOS.iOSTriggerHaptics(HapticTypes.HeavyImpact);
                    }
                }
            }
            if (rumble && (coroutineSupport != null))
            {
                #if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
                    MMNVRumble.Rumble(rumbleLowFrequency, rumbleHighFrequency, 0.08f, coroutineSupport, controllerID);
                #endif
            }
        }

        /// <summary>
        /// Plays a continuous haptic of the specified intensity, sharpness and duration
        /// </summary>
        /// <param name="intensity">the intensity of the haptic, between 0 and 1</param>
        /// <param name="sharpness">the sharpness of the haptic, between 0 and 1</param>
        /// <param name="duration">the duration in seconds</param>
        /// <param name="fallbackOldiOS">the fallback to use on old iOS versions that don't support Core Haptics</param>
        /// <param name="mono">a monobehaviour to use to sustain this haptic</param>
        /// <param name="alsoRumble">whether to also rumble or not</param>
        /// <param name="controllerID">the ID of the controller</param>
        /// <param name="threaded">whether to call this on the main thread (false) or a secondary one (true)</param>
        /// <param name="fullIntensity">whether to allow for full intensity control for subsequent updates</param>
        public static void ContinuousHaptic(float intensity, float sharpness, float duration, 
            HapticTypes fallbackOldiOS = HapticTypes.None, MonoBehaviour mono = null, bool alsoRumble = false, int controllerID = -1, bool threaded = false, bool fullIntensity = true)
        {
            ContinuousHaptic(true, intensity, sharpness, fallbackOldiOS, true, intensity, sharpness, false, alsoRumble, intensity, sharpness, controllerID, duration, mono, threaded, fullIntensity);
        }

        /// <summary>
        /// Plays a continuous haptic, full options signature 
        /// </summary>
        /// <param name="vibrateiOS"></param>
        /// <param name="iOSIntensity"></param>
        /// <param name="iOSSharpness"></param>
        /// <param name="fallbackOldiOS"></param>
        /// <param name="vibrateAndroid"></param>
        /// <param name="androidIntensity"></param>
        /// <param name="androidSharpness"></param>
        /// <param name="vibrateAndroidIfNoSupport"></param>
        /// <param name="rumble"></param>
        /// <param name="rumbleLowFrequency"></param>
        /// <param name="rumbleHighFrequency"></param>
        /// <param name="controllerID"></param>
        /// <param name="duration">the duration in seconds</param>
        /// <param name="mono">a monobehaviour to use to sustain this haptic</param>
        /// <param name="threaded">whether to call this on the main thread (false) or a secondary one (true)</param>
        /// <param name="fullIntensity">whether to allow for full intensity control for subsequent updates</param>
        public static void ContinuousHaptic(bool vibrateiOS, float iOSIntensity, float iOSSharpness, HapticTypes fallbackOldiOS,
                                            bool vibrateAndroid, float androidIntensity, float androidSharpness, 
                                            bool vibrateAndroidIfNoSupport,
                                            bool rumble, float rumbleLowFrequency, float rumbleHighFrequency, int controllerID,
                                            float duration, 
                                            MonoBehaviour mono = null, bool threaded = false, bool fullIntensity = true)
        {
            if (!_vibrationsActive)
            {
                return;
            }

            DebugLog("[MMVibrationManager] Continuous Haptic");

            if (Android() && vibrateAndroid)
            {
                if (!MMNVAndroid.AndroidHasAmplitudeControl() && !vibrateAndroidIfNoSupport)
                {
                    return;
                }
                androidIntensity = Remap(androidIntensity, 0f, 1f, 0, 255);
                MMNVAndroid.AndroidVibrate((long)(duration * 1000), (int)(androidIntensity));
            }
            else if (iOS() && vibrateiOS)
            {
                if ((iOSVersion >= 13) && HapticsSupported())
                {
                    MMNViOSCoreHaptics.PlayContinuousHapticPattern(iOSIntensity, iOSSharpness, duration, mono, threaded, fullIntensity);
                    _hapticsPlayedOnce = true;
                }
                else
                {
                    MMNViOS.iOSTriggerHaptics(fallbackOldiOS);
                }
            }
            if (rumble && (mono != null))
            {
#if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
                MMNVRumble.RumbleContinuous(rumbleLowFrequency, rumbleHighFrequency, controllerID);
#endif
            }
        }

        /// <summary>
        /// Updates a continuous haptic while it's playing. Not supported on Android for now, until Google adds API support for that
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        /// <param name="alsoRumble"></param>
        public static void UpdateContinuousHaptic(float intensity, float sharpness, bool alsoRumble = false, int controllerID = -1, bool threaded = false)
        {
            UpdateContinuousHaptic(true, intensity, sharpness, true, intensity, sharpness, alsoRumble, intensity, sharpness, controllerID, threaded);
        }

        /// <summary>
        /// Updates a continuous haptic while it's playing. Not supported on Android for now, until Google adds API support for that
        /// More options signature
        /// </summary>
        /// <param name="ios"></param>
        /// <param name="iosIntensity"></param>
        /// <param name="iosSharpness"></param>
        /// <param name="android"></param>
        /// <param name="androidIntensity"></param>
        /// <param name="androidSharpness"></param>
        /// <param name="rumble"></param>
        /// <param name="rumbleLowFrequency"></param>
        /// <param name="rumbleHighFrequency"></param>
        /// <param name="controllerID"></param>
        public static void UpdateContinuousHaptic(bool ios, float iosIntensity, float iosSharpness, 
                                                  bool android, float androidIntensity, float androidSharpness,
                                                  bool rumble, float rumbleLowFrequency, float rumbleHighFrequency, int controllerID = -1,
                                                  bool threaded = false)
        {
            if (iOS() && ios)
            {
                if ((iOSVersion >= 13) && HapticsSupported())
                {
                    MMNViOSCoreHaptics.UpdateContinuousHapticPattern(iosIntensity, iosSharpness, threaded);
                    _hapticsPlayedOnce = true;
                }
            }
            if (rumble)
            {
#if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
                MMNVRumble.RumbleContinuous(rumbleLowFrequency, rumbleHighFrequency, controllerID);
#endif
            }
        }

        /// <summary>
        /// Stops all currently running haptics
        /// </summary>
        /// <param name="alsoRumble"></param>
		public static void StopAllHaptics(bool alsoRumble = false)
		{
            if (!_hapticsPlayedOnce)
            {
                return;
            }

            DebugLog("[MMVibrationManager] Stop all haptics");
			MMNViOSCoreHaptics.StopEngine();
			MMNVAndroid.AndroidCancelVibrations();
			#if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
				if (alsoRumble)
				{
						MMNVRumble.StopRumble();
				}
			#endif
		}

        /// <summary>
        /// Stops all running pattern or continuous haptics
        /// </summary>
        public static void StopContinuousHaptic(bool alsoRumble = false)
        {
            DebugLog("[MMVibrationManager] Stop Continuous Haptic");
            MMNViOSCoreHaptics.StopHapticPatterns();
            MMNVAndroid.AndroidCancelVibrations();
            #if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
                if (alsoRumble)
                {
                    MMNVRumble.StopRumble();
                }
            #endif
        }

        /// <summary>
        /// Plays a haptic pattern, the most complex type of haptic, defined by a JSON string on iOS, and a pattern on Android
        /// </summary>
        /// <param name="iOSJSONString"></param>
        /// <param name="androidPattern"></param>
        /// <param name="androidAmplitudes"></param>
        /// <param name="androidRepeat"></param>
        /// <param name="fallbackOldiOS"></param>
        public static void AdvancedHapticPattern(string iOSJSONString,
                                                long[] androidPattern, int[] androidAmplitudes, int androidRepeat,
                                                long[] rumblePattern, int[] rumbleLowFreqAmplitudes, int[] rumbleHighFreqAmplitudes, int rumbleRepeat,
                                                HapticTypes fallbackOldiOS = HapticTypes.None,
                                                MonoBehaviour coroutineSupport = null, int controllerID = -1, bool threaded = false)
        {
            AdvancedHapticPattern(true, iOSJSONString, true, androidPattern, androidAmplitudes, androidRepeat, false, true, rumblePattern,
                rumbleLowFreqAmplitudes, rumbleHighFreqAmplitudes, rumbleRepeat, fallbackOldiOS, coroutineSupport, controllerID, threaded);
        }

        /// <summary>
        /// Plays a advanced haptic pattern, 
        /// </summary>
        /// <param name="ios"></param>
        /// <param name="iOSJSONString"></param>
        /// <param name="android"></param>
        /// <param name="androidPattern"></param>
        /// <param name="androidAmplitudes"></param>
        /// <param name="androidRepeat"></param>
        /// <param name="vibrateAndroidIfNoSupport"></param>
        /// <param name="rumble"></param>
        /// <param name="rumblePattern"></param>
        /// <param name="rumbleLowFreqAmplitudes"></param>
        /// <param name="rumbleHighFreqAmplitudes"></param>
        /// <param name="rumbleRepeat"></param>
        /// <param name="fallbackOldiOS"></param>
        /// <param name="coroutineSupport"></param>
        /// <param name="controllerID"></param>
        public static void AdvancedHapticPattern(bool ios, string iOSJSONString,
                                                bool android, long[] androidPattern, int[] androidAmplitudes, int androidRepeat,
                                                bool vibrateAndroidIfNoSupport,
                                                bool rumble, 
                                                long[] rumblePattern, int[] rumbleLowFreqAmplitudes, int[] rumbleHighFreqAmplitudes, int rumbleRepeat,
                                                HapticTypes fallbackOldiOS = HapticTypes.None,
                                                MonoBehaviour coroutineSupport = null, int controllerID = -1, bool threaded = false)
        {
            if (!_vibrationsActive)
            {
                return;
            }

            DebugLog("[MMVibrationManager] Advanced Haptic Pattern");

            if (Android())
            {
                if (!MMNVAndroid.AndroidHasAmplitudeControl() && !vibrateAndroidIfNoSupport)
                {
                    return;
                }
                MMNVAndroid.AndroidVibrate(androidPattern, androidAmplitudes, androidRepeat, threaded);
            }
            else if (iOS())
            {
                if ((iOSVersion >= 13) && HapticsSupported())
                {
                    MMNViOSCoreHaptics.PlayCoreHapticsFromJSON(iOSJSONString, threaded);
                    _hapticsPlayedOnce = true;
                }
                else
                {
                    MMNViOS.iOSTriggerHaptics(fallbackOldiOS);
                }
            }
#if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
            if (coroutineSupport != null)
            {
                MMNVRumble.Rumble(rumblePattern, rumbleLowFreqAmplitudes, rumbleHighFreqAmplitudes, rumbleRepeat, coroutineSupport, controllerID);
            }
#endif
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

        /// <summary>
        /// Remaps value x between AB to CD
        /// </summary>
        /// <param name="x"></param>
        /// <param name="A"></param>
        /// <param name="B"></param>
        /// <param name="C"></param>
        /// <param name="D"></param>
        /// <returns></returns>
        public static float Remap(float x, float A, float B, float C, float D)
        {
            float remappedValue = C + (x - A) / (B - A) * (D - C);
            return remappedValue;
        }
    }
}
