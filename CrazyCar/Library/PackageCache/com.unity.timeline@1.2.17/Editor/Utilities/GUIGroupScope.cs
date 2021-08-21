using System;
using UnityEngine;

namespace UnityEditor
{
    struct GUIGroupScope : IDisposable
    {
        public GUIGroupScope(Rect position)
        {
            GUI.BeginGroup(position);
        }

        public void Dispose()
        {
            GUI.EndGroup();
        }
    }
}
