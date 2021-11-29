#if UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// An asset post processor used to compensate for a new bug introduced by Unity in 2019.3.12f1
    /// </summary>
    public class MMNVAssetPostProcessor : AssetPostprocessor
    {
        /// <summary>
        /// On GeneratedCSProject, we force ReferenceOutputAssembly to true to avoid missing references in VS.
        /// </summary>
        /// <param name="path"></param>
        /// <param name="content"></param>
        /// <returns></returns>
        private static string OnGeneratedCSProject(string path, string content)
        {
            return content.Replace("<ReferenceOutputAssembly>false</ReferenceOutputAssembly>", "<ReferenceOutputAssembly>true</ReferenceOutputAssembly>");
        }
    } 
}
#endif