using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR 
using Newtonsoft.Json;
#endif

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// A class to store AHAP metadata
    /// </summary>
    [System.Serializable]
    public class MMNVAHAPMetadata
    {
        public string Project;
        public string Created;
    }

    /// <summary>
    /// A class to store AHAP event parameters
    /// </summary>
    [System.Serializable]
    public class MMNVAHAPEventParameter
    {
        public string ParameterID;
        public int ParameterValue;
    }

    /// <summary>
    /// A class to store AHAP events
    /// </summary>
    [System.Serializable]
    public class MMNVAHAPEvent
    {
        public int Time;
        public string EventType;
        public double EventDuration;
        public List<MMNVAHAPEventParameter> EventParameters;
    }

    /// <summary>
    /// A class to store AHAP parameter curve control points
    /// </summary>
    [System.Serializable]
    public class MMNVAHAPParameterCurveControlPoint
    {
        public double Time;
        public double ParameterValue;
    }

    /// <summary>
    /// A class to store AHAP parameter curves
    /// </summary>
    [System.Serializable]
    public class MMNVAHAPParameterCurve
    {
        public string ParameterID;
        public double Time;
        public List<MMNVAHAPParameterCurveControlPoint> ParameterCurveControlPoints;
    }

    /// <summary>
    /// A class to store AHAP patterns
    /// </summary>
    [System.Serializable]
    public class MMNVAHAPPattern
    {
        public MMNVAHAPEvent Event;
        public MMNVAHAPParameterCurve ParameterCurve;
    }

    /// <summary>
    /// A class used to store and manipulate AHAP json contents
    /// </summary>
    [System.Serializable]
    public class MMNVAHAP
    {
        public float Version;
        public MMNVAHAPMetadata Metadata;
        public List<MMNVAHAPPattern> Pattern;

#if UNITY_EDITOR 
        /// <summary>
        /// Converts a AHAP string into a MMNVAndroidWaveForm
        /// </summary>
        /// <param name="AHAPasString"></param>
        /// <returns></returns>
        public static MMNVAndroidWaveForm AHAPtoAndroidWaveForm(string AHAPasString, float intensityMultiplier, float sharpnessMultiplier)
        {
            MMNVAHAP ahap = JsonConvert.DeserializeObject<MMNVAHAP>(AHAPasString);

            List<long> patterns = new List<long>();
            List<int> amplitudes = new List<int>();

            double totalTimeStamp = 0f;
            double previousTimeStamp = 0f;
            foreach (MMNVAHAPPattern pattern in ahap.Pattern)
            {
                if (pattern.ParameterCurve != null)
                {
                    if (pattern.ParameterCurve.ParameterID == "HapticIntensityControl")
                    {
                        foreach (MMNVAHAPParameterCurveControlPoint point in pattern.ParameterCurve.ParameterCurveControlPoints)
                        {
                            double timeStamp = point.Time - previousTimeStamp;
                            totalTimeStamp += timeStamp;
                            patterns.Add((long)(timeStamp * 1000));

                            float originalIntensity = (float)point.ParameterValue * intensityMultiplier;
                            int intensity = (int)Remap(originalIntensity, 0f, 1f, 0f, 255f);
                            amplitudes.Add(intensity);

                            previousTimeStamp = point.Time;
                        }
                    }
                }
            }

            MMNVAndroidWaveForm returnWaveForm = new MMNVAndroidWaveForm();

            returnWaveForm.Amplitudes = amplitudes.ToArray();
            returnWaveForm.Pattern = patterns.ToArray();

            return returnWaveForm;
        }

        /// <summary>
        /// Converts a AHAP string into a MMNRumbleWaveForm
        /// </summary>
        /// <param name="AHAPasString"></param>
        /// <returns></returns>
        public static MMNVRumbleWaveForm AHAPtoRumbleWaveForm(string AHAPasString, float intensityMultiplier, float sharpnessMultiplier)
        {
            MMNVAHAP ahap = JsonConvert.DeserializeObject<MMNVAHAP>(AHAPasString);

            List<long> patterns = new List<long>();
            List<int> lowFreqAmplitudes = new List<int>();
            List<int> highFreqAmplitudes = new List<int>();

            double totalTimeStamp = 0f;
            double previousTimeStamp = 0f;
            foreach (MMNVAHAPPattern pattern in ahap.Pattern)
            {
                if (pattern.ParameterCurve != null)
                {
                    if (pattern.ParameterCurve.ParameterID == "HapticIntensityControl")
                    {
                        foreach (MMNVAHAPParameterCurveControlPoint point in pattern.ParameterCurve.ParameterCurveControlPoints)
                        {

                            double timeStamp = point.Time - previousTimeStamp;
                            totalTimeStamp += timeStamp;
                            patterns.Add((long)(timeStamp * 1000));

                            float originalIntensity = (float)point.ParameterValue * intensityMultiplier;
                            int intensity = (int)Remap(originalIntensity, 0f, 1f, 0f, 255f);
                            lowFreqAmplitudes.Add(intensity);

                            previousTimeStamp = point.Time;
                        }
                    }
                    if (pattern.ParameterCurve.ParameterID == "HapticSharpnessControl")
                    {
                        foreach (MMNVAHAPParameterCurveControlPoint point in pattern.ParameterCurve.ParameterCurveControlPoints)
                        {
                            double timeStamp = point.Time - previousTimeStamp;
                            totalTimeStamp += timeStamp;
                            patterns.Add((long)(timeStamp * 1000));

                            float originalIntensity = (float)point.ParameterValue * sharpnessMultiplier;
                            int intensity = (int)Remap(originalIntensity, 0f, 1f, 0f, 255f);
                            highFreqAmplitudes.Add(intensity);

                            previousTimeStamp = point.Time;
                        }
                    }
                }
            }

            MMNVRumbleWaveForm returnWaveForm = new MMNVRumbleWaveForm();
            
            returnWaveForm.LowFrequencyAmplitudes = lowFreqAmplitudes.ToArray();
            returnWaveForm.HighFrequencyAmplitudes = highFreqAmplitudes.ToArray();
            returnWaveForm.Pattern = patterns.ToArray();

            return returnWaveForm;
        }
#endif
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
