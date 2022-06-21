using System;
using UnityEngine;
using Siccity.GLTFUtility;

namespace ReadyPlayerMe
{
    public class GltfUtilityAvatarImporter : IAvatarImporter
    {
        public Action<FailureType, string> OnFailed { get; set; }
        public Action<float> OnProgressChanged { get; set; }
        public Action<GameObject> OnCompleted { get; set; }
        
        private void Completed(GameObject avatar) => OnCompleted?.Invoke(avatar);
        private void ProgressChanged(float progress, ImportType type) => OnProgressChanged?.Invoke(progress);
        
        public void Import(byte[] bytes)
        {
            try
            {
                #if UNITY_EDITOR || UNITY_WEBGL
                    var avatar = Importer.LoadFromBytes(bytes, new ImportSettings());
                    OnCompleted?.Invoke(avatar);
                    OnProgressChanged?.Invoke(1);
                #else
                    Importer.ImportGLBAsync(bytes, new ImportSettings(), Completed, ProgressChanged);
                #endif
            }
            catch(Exception e)
            {
                OnFailed?.Invoke(FailureType.ModelImportError, $"Failed to import glb model from bytes. { e.Message }");
            }
        }

        public void Import(string path)
        {
            try
            {
                #if UNITY_EDITOR || UNITY_WEBGL
                    var avatar = Importer.LoadFromFile(path, new ImportSettings());
                    OnProgressChanged?.Invoke(1);
                    OnCompleted?.Invoke(avatar);
                #else
                    Importer.ImportGLBAsync(path, new ImportSettings(), Completed, ProgressChanged);
                #endif
            }
            catch(Exception e)
            {
                OnFailed?.Invoke(FailureType.ModelImportError, $"Failed to import glb model from path. { e.Message }");
            }
        }
    }
}
