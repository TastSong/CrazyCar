using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// A minimal test class you can drop in any scene that can be used to trigger vibrations from its inspector
    /// </summary>
    public class MMVibrationManagerTester : MonoBehaviour
    {
        /// the possible haptic methods for this feedback
        public enum HapticMethods { NativePreset, Transient, Continuous, AdvancedPattern, Stop }
        /// the timescale to operate on
        public enum Timescales { ScaledTime, UnscaledTime }
        
        [Header("Haptics")]
        public HapticMethods HapticMethod = HapticMethods.NativePreset;

        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.NativePreset)]
        public HapticTypes HapticType = HapticTypes.None;

        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.Transient)]
        public float TransientIntensity = 1f;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.Transient)]
        public float TransientSharpness = 1f;

        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.Continuous)]
        public float InitialContinuousIntensity = 1f;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.Continuous)]
        public AnimationCurve ContinuousIntensityCurve = new AnimationCurve(new Keyframe(0, 1), new Keyframe(1f, 1f));
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.Continuous)]
        public float InitialContinuousSharpness = 1f;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.Continuous)]
        public AnimationCurve ContinuousSharpnessCurve = new AnimationCurve(new Keyframe(0, 1), new Keyframe(1f, 1f));
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.Continuous)]
        public float ContinuousDuration = 1f;

        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.AdvancedPattern)]
        public TextAsset AHAPFileForIOS;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.AdvancedPattern)]
        public MMNVAndroidWaveFormAsset AndroidWaveFormFile;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.AdvancedPattern)]
        public MMNVRumbleWaveFormAsset RumbleWaveFormFile;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.AdvancedPattern)]
        public int AndroidRepeat = -1;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.AdvancedPattern)]
        public int RumbleRepeat = -1;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.AdvancedPattern)]
        public HapticTypes OldIOSFallback;
        [MMNVEnumCondition("HapticMethod", (int)HapticMethods.AdvancedPattern)]
        public Timescales Timescale = Timescales.UnscaledTime;

        [Header("Rumble")]
        public bool AllowRumble = true;

        [MMNVInspectorButton("TestVibration")]
        public bool TestVibrationButton;

        protected static bool _continuousPlaying = false;
        protected static float _continuousStartedAt = 0f;

        /// <summary>
        /// When this feedback gets played
        /// </summary>
        /// <param name="position"></param>
        /// <param name="attenuation"></param>
        protected virtual void TestVibration()
        {

            Vector3 position = this.transform.position;

            switch (HapticMethod)
            {
                case HapticMethods.AdvancedPattern:
                    string iOSString = (AHAPFileForIOS == null) ? "" : AHAPFileForIOS.text;

                    long[] androidPattern = (AndroidWaveFormFile == null) ? null : AndroidWaveFormFile.WaveForm.Pattern;
                    int[] androidAmplitude = (AndroidWaveFormFile == null) ? null : AndroidWaveFormFile.WaveForm.Amplitudes;
                    
                    long[] rumblePattern = (RumbleWaveFormFile == null) ? null : RumbleWaveFormFile.WaveForm.Pattern;
                    int[] lowFreqAmplitude = (RumbleWaveFormFile == null) ? null : RumbleWaveFormFile.WaveForm.LowFrequencyAmplitudes;
                    int[] highFreqAmplitude = (RumbleWaveFormFile == null) ? null : RumbleWaveFormFile.WaveForm.HighFrequencyAmplitudes;

                    MMVibrationManager.AdvancedHapticPattern(iOSString, androidPattern, androidAmplitude, AndroidRepeat,
                                                                        rumblePattern, lowFreqAmplitude, highFreqAmplitude, RumbleRepeat,
                                                                OldIOSFallback, this);
                    break;

                case HapticMethods.Continuous:
                    StartCoroutine(ContinuousHapticsCoroutine());
                    break;

                case HapticMethods.NativePreset:
                    MMVibrationManager.Haptic(HapticType, false, AllowRumble, this);
                    break;

                case HapticMethods.Transient:
                    MMVibrationManager.TransientHaptic(TransientIntensity, TransientSharpness, AllowRumble, this);
                    break;

                case HapticMethods.Stop:
                    if (_continuousPlaying)
                    {
                        MMVibrationManager.StopContinuousHaptic(AllowRumble);
                        _continuousPlaying = false;
                    }
                    break;
            }
        }

        /// <summary>
        /// A coroutine used to update continuous haptics as they're playing
        /// </summary>
        /// <returns></returns>
        protected virtual IEnumerator ContinuousHapticsCoroutine()
        {
            _continuousStartedAt = (Timescale == Timescales.ScaledTime) ? Time.time : Time.unscaledTime;
            _continuousPlaying = true;
            float elapsedTime = ComputeElapsedTime();

            MMVibrationManager.ContinuousHaptic(InitialContinuousIntensity, InitialContinuousSharpness, ContinuousDuration, HapticTypes.Success, this);

            while (_continuousPlaying && (elapsedTime < ContinuousDuration))
            {
                elapsedTime = ComputeElapsedTime();
                float remappedTime = Remap(elapsedTime, 0f, ContinuousDuration, 0f, 1f);
                float intensity = ContinuousIntensityCurve.Evaluate(remappedTime);
                float sharpness = ContinuousSharpnessCurve.Evaluate(remappedTime);
                MMVibrationManager.UpdateContinuousHaptic(intensity, sharpness, true);
                if (AllowRumble)
                {
                    #if MOREMOUNTAINS_NICEVIBRATIONS_RUMBLE
                        MMNVRumble.RumbleContinuous(intensity, sharpness);
                    #endif
                }
                yield return null;
            }
            if (_continuousPlaying)
            {
                _continuousPlaying = false;
                MMVibrationManager.StopContinuousHaptic(AllowRumble);
            }
        }

        /// <summary>
        /// This methods computes and returns the elapsed time since the start of the last played continuous haptic
        /// </summary>
        /// <returns></returns>
        protected virtual float ComputeElapsedTime()
        {
            float elapsedTime = (Timescale == Timescales.ScaledTime) ? Time.time - _continuousStartedAt : Time.unscaledTime - _continuousStartedAt;
            return elapsedTime;
        }

        /// <summary>
        /// Remaps value x from AB to CD
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