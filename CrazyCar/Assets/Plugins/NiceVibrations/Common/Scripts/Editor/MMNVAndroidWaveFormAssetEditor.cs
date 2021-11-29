using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// This custom inspector for MMNVAndroidWaveFormAssets adds a button to import values from an AHAP file
    /// </summary>
    [CustomEditor(typeof(MMNVAndroidWaveFormAsset))]
    public class MMNVAndroidWaveFormAssetEditor : Editor
    {
        /// <summary>
        /// On inspector GUI, we draw an extra button
        /// </summary>
        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            MMNVAndroidWaveFormAsset waveformAsset = (MMNVAndroidWaveFormAsset)target;

            DrawDefaultInspector();

            if (waveformAsset.AHAPFile != null)
            {
                if (GUILayout.Button("Import from AHAP"))
                {
                    MMNVAndroidWaveForm tempWaveform = MMNVAHAP.AHAPtoAndroidWaveForm(waveformAsset.AHAPFile.text);
                    waveformAsset.WaveForm.Pattern = tempWaveform.Pattern;
                    waveformAsset.WaveForm.Amplitudes = tempWaveform.Amplitudes;
                }
            }            

            serializedObject.ApplyModifiedProperties();
        }
    }
}
