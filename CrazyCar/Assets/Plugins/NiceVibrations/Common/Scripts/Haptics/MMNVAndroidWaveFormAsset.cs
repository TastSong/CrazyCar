using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// A class used to store android waveform values, used to trigger haptics with varying intensity
    /// </summary>
    [System.Serializable]
    public class MMNVAndroidWaveForm
    {
        public long[] Pattern;
        public int[] Amplitudes;
    }
    
    /// <summary>
    /// A scriptable object used to store waveform values
    /// </summary>
    [CreateAssetMenu(fileName = "AndroidWaveFormAsset", menuName = "MoreMountains/NiceVibrations/AndroidWaveFormAsset")]
    public class MMNVAndroidWaveFormAsset : ScriptableObject
    {
        [Header("Properties")]
        public MMNVAndroidWaveForm WaveForm;

        [Header("AHAP")]
        public TextAsset AHAPFile;
        public float IntensityMultiplier = 1f;
        public float SharpnessMultiplier = 1f;
    }
}
