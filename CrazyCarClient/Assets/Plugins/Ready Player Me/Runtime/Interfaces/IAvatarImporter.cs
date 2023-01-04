using System;
using UnityEngine;

namespace ReadyPlayerMe 
{
    public interface IAvatarImporter
    {
        Action<FailureType, string> OnFailed { get; set; }
        Action<float> OnProgressChanged { get; set; }
        Action<GameObject> OnCompleted { get; set; }
        void Import(byte[] bytes);
        void Import(string path);
    }
}
