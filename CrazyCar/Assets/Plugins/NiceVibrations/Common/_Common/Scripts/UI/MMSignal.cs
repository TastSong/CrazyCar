using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// This class lets you output the value corresponding to one of the basic signal types it contains. Useful to draw basic signal curves.
    /// </summary>
    public class MMSignal : MonoBehaviour
    {
        public enum SignalType
        {
            DigitalNoise,
            Pulse,
            Sawtooth,
            Sine,
            Square,
            Triangle,
            WhiteNoise
        }
                
        /// <summary>
        /// Returns the corresponding value based on the selected SignalType for a given time value
        /// </summary>
        /// <param name="time"></param>
        /// <param name="signalType"></param>
        /// <param name="phase"></param>
        /// <param name="amplitude"></param>
        /// <param name="frequency"></param>
        /// <param name="offset"></param>
        /// <param name="Invert"></param>
        /// <returns></returns>
        public static float GetValue(float time, SignalType signalType, float phase, float amplitude, float frequency, float offset, bool Invert = false)
        {
            float value = 0f;
            float invert = Invert ? -1 : 1;
            float t = frequency * time + phase;

            switch (signalType)
            { 
                case SignalType.Sine: 
                    value = (float)Mathf.Sin(2f * Mathf.PI * t);
                    break;
                case SignalType.Square:
                    value = Mathf.Sign(Mathf.Sin(2f * Mathf.PI * t));
                    break;
                case SignalType.Triangle:
                    value = 1f - 4f * (float)Mathf.Abs(Mathf.Round(t - 0.25f) - (t - 0.25f));
                    break;
                case SignalType.Sawtooth:
                    value = 2f * (t - (float)Mathf.Floor(t + 0.5f));
                    break;
                case SignalType.Pulse: 
                    value = (Mathf.Abs(Mathf.Sin(2 * Mathf.PI * t)) < 1.0 - 10E-3) ? (0) : (1);
                    break;
                case SignalType.WhiteNoise:
                    value = 2f * Random.Range(0,int.MaxValue) / int.MaxValue - 1f;
                    break;
                case SignalType.DigitalNoise:
                    value = Random.Range(0,2);
                    break;
            }

            return (invert * amplitude * value + offset);
        }
    }      
}

