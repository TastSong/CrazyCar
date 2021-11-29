using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// A class used to store android waveform values, used to trigger haptics with varying intensity
    /// </summary>
    [System.Serializable]
    public class MMNVRumbleWaveForm
    {
        public long[] Pattern;
        public int[] LowFrequencyAmplitudes;
        public int[] HighFrequencyAmplitudes;
    }
    
    /// <summary>
    /// A scriptable object used to store waveform values
    /// </summary>
    [CreateAssetMenu(fileName = "RumbleWaveFormAsset", menuName = "MoreMountains/NiceVibrations/RumbleWaveFormAsset")]
    public class MMNVRumbleWaveFormAsset : ScriptableObject
    {
        [Header("Properties")]
        public MMNVRumbleWaveForm WaveForm;

        [Header("AHAP")]
        public TextAsset AHAPFile;
        public float IntensityMultiplier = 1f;
        public float SharpnessMultiplier = 1f;
    }
}
