using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// An attribute to conditionnally hide fields based on the current selection in an enum.
    /// Usage :  [MMNVEnumCondition("rotationMode", (int)RotationMode.LookAtTarget, (int)RotationMode.RotateToAngles)]
    /// </summary>
    [AttributeUsage(AttributeTargets.Field | AttributeTargets.Property | AttributeTargets.Class | AttributeTargets.Struct, Inherited = true)]
    public class MMNVEnumConditionAttribute : PropertyAttribute
    {
        public string ConditionEnum = "";
        public bool Hidden = false;

        BitArray bitArray = new BitArray(32);
        public bool ContainsBitFlag(int enumValue)
        {
            return bitArray.Get(enumValue);
        }

        public MMNVEnumConditionAttribute(string conditionBoolean, params int[] enumValues)
        {
            this.ConditionEnum = conditionBoolean;
            this.Hidden = true;

            for (int i = 0; i < enumValues.Length; i++)
            {
                bitArray.Set(enumValues[i], true);
            }
        }
    }


#if UNITY_EDITOR
    [CustomPropertyDrawer(typeof(MMNVEnumConditionAttribute))]
    public class EnumConditionAttributeDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            MMNVEnumConditionAttribute enumConditionAttribute = (MMNVEnumConditionAttribute)attribute;
            bool enabled = GetConditionAttributeResult(enumConditionAttribute, property);
            bool previouslyEnabled = GUI.enabled;
            GUI.enabled = enabled;
            if (!enumConditionAttribute.Hidden || enabled)
            {
                EditorGUI.PropertyField(position, property, label, true);
            }
            GUI.enabled = previouslyEnabled;
        }

        private bool GetConditionAttributeResult(MMNVEnumConditionAttribute enumConditionAttribute, SerializedProperty property)
        {
            bool enabled = true;
            string propertyPath = property.propertyPath;
            string conditionPath = propertyPath.Replace(property.name, enumConditionAttribute.ConditionEnum);
            SerializedProperty sourcePropertyValue = property.serializedObject.FindProperty(conditionPath);

            if (sourcePropertyValue != null)
            {
                int currentEnum = sourcePropertyValue.enumValueIndex;

                enabled = enumConditionAttribute.ContainsBitFlag(currentEnum);
            }
            else
            {
                Debug.LogWarning("No matching boolean found for ConditionAttribute in object: " + enumConditionAttribute.ConditionEnum);
            }

            return enabled;
        }

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            MMNVEnumConditionAttribute enumConditionAttribute = (MMNVEnumConditionAttribute)attribute;
            bool enabled = GetConditionAttributeResult(enumConditionAttribute, property);

            if (!enumConditionAttribute.Hidden || enabled)
            {
                return EditorGUI.GetPropertyHeight(property, label);
            }
            else
            {
                return -EditorGUIUtility.standardVerticalSpacing;
            }
        }
    }
#endif
}

