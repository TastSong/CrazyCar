using UnityEngine;
using System;
using System.Collections.Generic;


namespace TMPro
{

    [Serializable][ExcludeFromPresetAttribute]
    public class TMP_StyleSheet : ScriptableObject
    {
        /// <summary>
        ///
        /// </summary>
        internal List<TMP_Style> styles
        {
            get { return m_StyleList; }
        }

        [SerializeField]
        private List<TMP_Style> m_StyleList = new List<TMP_Style>(1);
        private Dictionary<int, TMP_Style> m_StyleLookupDictionary;

        private void Reset()
        {
            LoadStyleDictionaryInternal();
        }

        /// <summary>
        /// Get the Style for the given hash code value.
        /// </summary>
        /// <param name="hashCode">Hash code of the style.</param>
        /// <returns>The style matching the hash code.</returns>
        public TMP_Style GetStyle(int hashCode)
        {
            if (m_StyleLookupDictionary == null)
                LoadStyleDictionaryInternal();

            TMP_Style style;

            if (m_StyleLookupDictionary.TryGetValue(hashCode, out style))
                return style;

            return null;
        }

        /// <summary>
        /// Get the Style for the given name.
        /// </summary>
        /// <param name="name">The name of the style.</param>
        /// <returns>The style if found.</returns>
        public TMP_Style GetStyle(string name)
        {
            if (m_StyleLookupDictionary == null)
                LoadStyleDictionaryInternal();

            int hashCode = TMP_TextParsingUtilities.GetHashCode(name);
            TMP_Style style;

            if (m_StyleLookupDictionary.TryGetValue(hashCode, out style))
                return style;

            return null;
        }

        /// <summary>
        /// Function to refresh the Style Dictionary.
        /// </summary>
        public void RefreshStyles()
        {
            LoadStyleDictionaryInternal();
        }

        /// <summary>
        ///
        /// </summary>
        private void LoadStyleDictionaryInternal()
        {
            if (m_StyleLookupDictionary == null)
                m_StyleLookupDictionary = new Dictionary<int, TMP_Style>();
            else
                m_StyleLookupDictionary.Clear();

            // Read Styles from style list and store them into dictionary for faster access.
            for (int i = 0; i < m_StyleList.Count; i++)
            {
                m_StyleList[i].RefreshStyle();

                if (!m_StyleLookupDictionary.ContainsKey(m_StyleList[i].hashCode))
                    m_StyleLookupDictionary.Add(m_StyleList[i].hashCode, m_StyleList[i]);
            }

            // Add Normal Style if it does not already exists
            int normalStyleHashCode = TMP_TextParsingUtilities.GetHashCode("Normal");
            if (!m_StyleLookupDictionary.ContainsKey(normalStyleHashCode))
            {
                TMP_Style style = new TMP_Style("Normal", string.Empty, string.Empty);
                m_StyleList.Add(style);
                m_StyleLookupDictionary.Add(normalStyleHashCode, style);
            }

            #if UNITY_EDITOR
            //// Event to update objects when styles are changed in the editor.
            TMPro_EventManager.ON_TEXT_STYLE_PROPERTY_CHANGED(true);
            #endif
        }
    }

}
