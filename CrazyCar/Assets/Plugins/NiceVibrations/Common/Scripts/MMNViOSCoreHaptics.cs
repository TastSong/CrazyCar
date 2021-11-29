using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System;
using AOT;

#if UNITY_IOS
using UnityEngine.iOS;
#endif

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// This class handles all iOS haptics specific calls for devices that support the CoreHaptics API (post iOS 13)
    /// </summary>
	public static class MMNViOSCoreHaptics
    {
        public static event Action OnHapticPatternStopped;
        public static event Action OnHapticPatternError;
        public static event Action OnHapticPatternReset;

        private static float _initialContinuousIntensity;
        private static float _initialContinuousSharpness;

#if UNITY_IOS && !UNITY_EDITOR
        [DllImport("__Internal")]
        private static extern bool MMNViOS_CoreHapticsSupported();
        [DllImport("__Internal")]
        private static extern void MMNViOS_StopEngine();
        [DllImport("__Internal")]
        private static extern void MMNViOS_PlayTransientHapticPattern(float intensity, float sharpness);
        [DllImport("__Internal")]
        private static extern void MMNViOS_PlayContinuousHapticPattern(float intensity, float sharpness, float duration);
        [DllImport("__Internal")]
        private static extern void MMNViOS_UpdateContinuousHapticPattern(float intensity, float sharpness);
        [DllImport("__Internal")]
        private static extern void MMNViOS_StopContinuousHaptic();
        [DllImport("__Internal")]
        private static extern void MMNViOS_PlayCoreHapticsFromJSON(string jsonString);
        [DllImport("__Internal")]
        private static extern void MMNViOS_CoreHapticsRegisterHapticEngineFinishedCallback(Action callback);
        [DllImport("__Internal")]
        private static extern void MMNViOS_CoreHapticsRegisterHapticEngineErrorCallback(Action callback);
        [DllImport("__Internal")]
        private static extern void MMNViOS_CoreHapticsRegisterHapticEngineResetCallback(Action callback);
        [DllImport("__Internal")]
        private static extern void MMNViOS_CoreHapticsSetDebugMode(bool status);
#else
        private static bool MMNViOS_CoreHapticsSupported() { return false; }
        private static void MMNViOS_CoreHapticsSetDebugMode(bool status) { }
        private static void MMNViOS_StopEngine() { }
        private static void MMNViOS_PlayTransientHapticPattern(float intensity, float sharpness) { }
        private static void MMNViOS_PlayContinuousHapticPattern(float intensity, float sharpness, float duration) { }
        private static void MMNViOS_UpdateContinuousHapticPattern(float intensity, float sharpness) { }
        private static void MMNViOS_StopContinuousHaptic() { }
        private static void MMNViOS_PlayCoreHapticsFromJSON(string jsonString) { }
        private static void MMNViOS_CoreHapticsRegisterHapticEngineFinishedCallback(Action callback) { }
        private static void MMNViOS_CoreHapticsRegisterHapticEngineErrorCallback(Action callback) { }
        private static void MMNViOS_CoreHapticsRegisterHapticEngineResetCallback(Action callback) { }
#endif

        /// <summary>
        /// On construction we initialize our haptic engine
        /// </summary>
        static MMNViOSCoreHaptics()
        {
            MMNViOS_CoreHapticsRegisterHapticEngineFinishedCallback(HapticStoppedCallback);
            MMNViOS_CoreHapticsRegisterHapticEngineErrorCallback(HapticsErrorCallback);
            MMNViOS_CoreHapticsRegisterHapticEngineResetCallback(HapticsResetCallback);
        }

        /// <summary>
        /// Plays a core haptics pattern from a JSON string that matches the AHAP format
        /// </summary>
        /// <param name="jsonString"></param>
        public static void PlayCoreHapticsFromJSON(string jsonString)
        {
            MMNViOS_PlayCoreHapticsFromJSON(jsonString);
        }

        /// <summary>
        /// Plays a transient haptic pattern of the specified intensity and sharpness.
        /// Transient haptics are very short haptic patterns.
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        public static void PlayTransientHapticPattern(float intensity, float sharpness)
        {
            MMNViOS_PlayTransientHapticPattern(intensity, sharpness);
        }

        /// <summary>
        /// Plays a continuous haptic at the specified intensity and sharpness for the specified duration
        /// The coroutineMonobehaviour parameter is optional, only send that if you intend to raise this specific continuous pattern's intensity higher than its
        /// initial value
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        /// <param name="duration"></param>
        /// <param name="coroutineMonobehaviour"></param>
        public static void PlayContinuousHapticPattern(float intensity, float sharpness, float duration, MonoBehaviour coroutineMonobehaviour = null)
        {
            if (intensity < 0.01f)
            {
                intensity = 0.01f;
            }
            
            _initialContinuousIntensity = intensity;
            _initialContinuousSharpness = sharpness;

            if (coroutineMonobehaviour != null)
            {
                _initialContinuousIntensity = 1f;
                MMNViOS_PlayContinuousHapticPattern(1f, sharpness, duration);
                coroutineMonobehaviour.StartCoroutine(ContinuousHapticPatternCoroutine(intensity, sharpness));
            }
            else
            {
                MMNViOS_PlayContinuousHapticPattern(intensity, sharpness, duration);
            }            
        }

        /// <summary>
        /// This coroutine waits for a frame and returns intensity to its normal value
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        /// <returns></returns>
        public static IEnumerator ContinuousHapticPatternCoroutine(float intensity, float sharpness)
        {
            yield return null;
            MMNViOS_UpdateContinuousHapticPattern(intensity, sharpness);
        }

        /// <summary>
        /// This method lets you update the intensity and sharpness of a continuous haptics as it's playing.
        /// Note that this one is a direct implementation of Apple's native method that serves that same purpose, and
        /// the way it works can be confusing, as instead of just setting the value, it multiplies and adds like so :
        /// Sending a dynamic parameter for intensity multiplies the original pattern’s event intensity by the dynamic parameter value.
        /// Sending a dynamic parameter for sharpness adds the dynamic parameter value to the original pattern’s event sharpness.
        /// If you'd rather not have to do weird maths to just set two values, you can use
        /// the UpdateContinuousHapticPatternRational method, which will handle that for you.
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        public static void UpdateContinuousHapticPattern(float intensity, float sharpness)
        {
            MMNViOS_UpdateContinuousHapticPattern(intensity, sharpness);
        }

        /// <summary>
        /// This method lets you update the intensity and sharpness of a continuous haptics as it's playing.
        /// It simply sets the intensity and sharpness values to the ones set in parameters
        /// Just note that due to limitations in Apple's implementation, the intensity can't go higher than its initial value.
        /// The only way to bypass that is to pass a monobehaviour to PlayContinuousHapticPattern when calling it
        /// </summary>
        /// <param name="intensity"></param>
        /// <param name="sharpness"></param>
        public static void UpdateContinuousHapticPatternRational(float intensity, float sharpness)
        {
            if (_initialContinuousIntensity < 0.01f)
            {
                _initialContinuousIntensity = 0.01f;
            }

            float newIntensity = intensity / _initialContinuousIntensity;
            float newSharpness = sharpness - _initialContinuousSharpness;

            MMNViOS_UpdateContinuousHapticPattern(newIntensity, newSharpness);
        }

        /// <summary>
        /// Stops all running or continuous haptic patterns
        /// </summary>
        public static void StopHapticPatterns() 
        {
            MMNViOS_StopContinuousHaptic();
        }

        /// <summary>
        /// Sets the debug mode to true or false.
        /// While debug mode is active, pretty much every haptic call will output a log in the console.
        /// Useful when debugging without a device
        /// </summary>
        /// <param name="newStatus"></param>
        public static void SetDebugMode(bool newStatus)
        {
            MMNViOS_CoreHapticsSetDebugMode(newStatus);
        }

        /// <summary>
        /// Returns true if CoreHaptics are supported, false otherwise
        /// </summary>
        /// <returns></returns>
        public static bool CoreHapticsSupported()
        {
            return MMNViOS_CoreHapticsSupported();
        }
        
        /// <summary>
        /// Triggers the haptics stopped callback
        /// </summary>
        [MonoPInvokeCallback(typeof(Action))]
        private static void HapticStoppedCallback()
        {
            OnHapticPatternStopped?.Invoke();
        }

        /// <summary>
        /// Triggers the haptics error callback
        /// </summary>
        [MonoPInvokeCallback(typeof(Action))]
        private static void HapticsErrorCallback()
        {
            OnHapticPatternError?.Invoke();
        }

        /// <summary>
        /// Triggers the haptics reset callback
        /// </summary>
        [MonoPInvokeCallback(typeof(Action))]
        private static void HapticsResetCallback()
        {
            OnHapticPatternReset?.Invoke();
        }

    }
}
