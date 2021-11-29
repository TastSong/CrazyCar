using System.Collections;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;

namespace MoreMountains.NiceVibrations
{
    #if UNITY_EDITOR
    /// <summary>
    /// This custom inspector for MMNVAndroidWaveFormAssets adds a button to import values from an AHAP file
    /// </summary>
    [CustomEditor(typeof(MMNVRumbleWaveFormAsset))]
    public class MMNVRumbleWaveFormAssetEditor : Editor
    {        
        /// <summary>
        /// On inspector GUI, we draw an extra button
        /// </summary>
        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            MMNVRumbleWaveFormAsset waveformAsset = (MMNVRumbleWaveFormAsset)target;

            DrawDefaultInspector();

            if (waveformAsset.AHAPFile != null)
            {
                if (GUILayout.Button("Import from AHAP"))
                {
                    MMNVRumbleWaveForm tempWaveform = MMNVAHAP.AHAPtoRumbleWaveForm(waveformAsset.AHAPFile.text, waveformAsset.IntensityMultiplier, waveformAsset.SharpnessMultiplier);
                    waveformAsset.WaveForm.Pattern = tempWaveform.Pattern;
                    waveformAsset.WaveForm.LowFrequencyAmplitudes = tempWaveform.LowFrequencyAmplitudes;
                    waveformAsset.WaveForm.HighFrequencyAmplitudes = tempWaveform.HighFrequencyAmplitudes;
                }
            }            

            serializedObject.ApplyModifiedProperties();
        }
    }
    #endif
}
