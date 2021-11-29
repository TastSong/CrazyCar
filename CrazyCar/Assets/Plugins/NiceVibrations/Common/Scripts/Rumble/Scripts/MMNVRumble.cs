using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR;

namespace MoreMountains.NiceVibrations
{
    public static class MMNVRumble 
    {
        /// whether or not the rumble engine is running right now
        public static bool Rumbling = false;
        /// whether or not we're playing a continuous rumble right now
        public static bool RumblingContinuous = false;

        public static UnityEngine.InputSystem.Gamepad GetGamepad(int id)
        {
            if (id != -1)
            {
                if (id >= UnityEngine.InputSystem.Gamepad.all.Count)
                {
                    return UnityEngine.InputSystem.Gamepad.current;
                }
                else
                {
                    return UnityEngine.InputSystem.Gamepad.all[id];
                }                
            }
            return UnityEngine.InputSystem.Gamepad.current;
        }

        /// <summary>
        /// Rumbles the controller at the specified frequencies for the specified duration
        /// </summary>
        /// <param name="lowFrequency">from 0 to 1</param>
        /// <param name="highFrequency">from 0 to 1</param>
        /// <param name="duration">the duration of the rumble, in seconds</param>
        /// <param name="coroutineSupport">a monobehaviour to run the coroutine on (usually just use "this")</param>
        public static void Rumble(float lowFrequency, float highFrequency, float duration, MonoBehaviour coroutineSupport, int controllerID = -1)
        {
            coroutineSupport.StartCoroutine(RumbleCoroutine(lowFrequency, highFrequency, duration, controllerID));
        }
        
        /// <summary>
        /// A coroutine used to rumble 
        /// </summary>
        /// <param name="lowFrequency"></param>
        /// <param name="highFrequency"></param>
        /// <param name="duration"></param>
        /// <returns></returns>
        private static IEnumerator RumbleCoroutine(float lowFrequency, float highFrequency, float duration, int controllerID = -1)
        {
            if (GetGamepad(controllerID) == null)
            {
                yield break;
            }
            Rumbling = true;
            GetGamepad(controllerID).SetMotorSpeeds(lowFrequency, highFrequency);
            float startedAt = Time.unscaledTime;
            while (Time.unscaledTime - startedAt < duration)
            {
                yield return null;
            }
            InputSystem.ResetHaptics();
            Rumbling = false;
        }

        /// <summary>
        /// Requests a rumble for the specified pattern, amplitude and optional repeat
        /// </summary>
        /// <param name="pattern">Pattern.</param>
        /// <param name="amplitudes">Amplitudes (from 0 to 255).</param>
        /// <param name="repeat">Repeat : -1 : no repeat, 0 : infinite, 1 : repeat once, 2 : repeat twice, etc</param>
        public static void Rumble(long[] pattern, int[] amplitudes, int repeat, MonoBehaviour coroutineSupport, int controllerID = -1)
        {
            if ((pattern == null) || (amplitudes == null))
            {
                return;
            }
            coroutineSupport.StartCoroutine(RumblePatternCoroutine(pattern, amplitudes, amplitudes, repeat, coroutineSupport, controllerID));
        }

        /// <summary>
        /// Requests a rumble for the specified pattern, low and high frequency amplitudes and optional repeat
        /// </summary>
        /// <param name="pattern"></param>
        /// <param name="lowFreqAmplitudes"></param>
        /// <param name="highFreqAmplitudes"></param>
        /// <param name="repeat"></param>
        /// <param name="coroutineSupport"></param>
        public static void Rumble(long[] pattern, int[] lowFreqAmplitudes, int[] highFreqAmplitudes, int repeat, MonoBehaviour coroutineSupport, int controllerID = -1)
        {
            if ((pattern == null) || (lowFreqAmplitudes == null) || (highFreqAmplitudes == null))
            {
                return;
            }
            coroutineSupport.StartCoroutine(RumblePatternCoroutine(pattern, lowFreqAmplitudes, highFreqAmplitudes, repeat, coroutineSupport, controllerID));
        }

        /// <summary>
        /// A coroutine used to play patterns
        /// </summary>
        /// <param name="pattern"></param>
        /// <param name="lowFreqAmplitudes"></param>
        /// <param name="highFreqAmplitudes"></param>
        /// <param name="repeat"></param>
        /// <returns></returns>
        private static IEnumerator RumblePatternCoroutine(long[] pattern, int[] lowFreqAmplitudes,
            int[] highFreqAmplitudes, int repeat, MonoBehaviour coroutineSupport, int controllerID = -1)
        {
            float startedAt = Time.unscaledTime;
            float currentTime = startedAt;
            int currentIndex = 0;
            
            UnityEngine.InputSystem.Gamepad currentGamepad = GetGamepad(controllerID);
            
            while (currentIndex < pattern.Length)
            {
                if (currentGamepad == null)
                {
                    yield break;
                }

                int count = 0;
                float totalLowFrequency = 0;
                float totalHighFrequency = 0;

                do
                {
                    float duration = pattern[currentIndex];
                    float lowFrequencyAmplitude = (lowFreqAmplitudes.Length > currentIndex) ? lowFreqAmplitudes[currentIndex] / 255f : 0f;
                    totalLowFrequency += lowFrequencyAmplitude;
                    float highFrequencyAmplitude = (highFreqAmplitudes.Length > currentIndex) ? highFreqAmplitudes[currentIndex] / 255f : 0f;
                    totalHighFrequency += highFrequencyAmplitude;
                    currentTime += duration / 1000f;
                    count++;
                    currentIndex++;
                } while (currentTime < Time.unscaledTime && currentIndex < pattern.Length);

                currentGamepad.SetMotorSpeeds(totalLowFrequency / count, totalHighFrequency / count);

                while (currentTime > Time.unscaledTime && currentIndex < pattern.Length)
                {
                    yield return null;
                }
            }
            currentGamepad.SetMotorSpeeds(0f, 0f);
        }

        /// <summary>
        /// Lets you update rumble values while playing them
        /// </summary>
        /// <param name="lowFrequency"></param>
        /// <param name="highFrequency"></param>
        public static void RumbleContinuous(float lowFrequency, float highFrequency, int controllerID = -1)
        {
            if (GetGamepad(controllerID) == null)
            {
                return;
            }
            Rumbling = true;
            RumblingContinuous = true;
            GetGamepad(controllerID).SetMotorSpeeds(lowFrequency, highFrequency);
        }

        /// <summary>
        /// Stops all rumbles
        /// </summary>
        public static void StopRumble()
        {
            Rumbling = false;
            RumblingContinuous = false;
            InputSystem.ResetHaptics();
        }

        /// <summary>
        /// Pauses all rumbles
        /// </summary>
        public static void PauseRumble()
        {
            Rumbling = false;
            RumblingContinuous = false;
            InputSystem.PauseHaptics();
        }

        /// <summary>
        /// Resumes all rumbles
        /// </summary>
        public static void ResumeRumble()
        {
            Rumbling = true;
            InputSystem.ResumeHaptics();
        }
    }
}
