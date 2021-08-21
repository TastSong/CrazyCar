using System;
using UnityEngine;
using Object = UnityEngine.Object;

namespace UnityEditor.Timeline
{
    static class UnityEditorInternals
    {
        public static Object DoObjectField(Rect position, Object obj, Type type, int controlId, bool allowScene)
        {
#if UNITY_2020_1_OR_NEWER
            var newObject = EditorGUI.DoObjectField(position, position, controlId, obj, null, type, null, allowScene, EditorStyles.objectField);
#else
            var newObject = EditorGUI.DoObjectField(position, position, controlId, obj, type, null, null, allowScene, EditorStyles.objectField);
#endif
            return newObject;
        }
    }
}
