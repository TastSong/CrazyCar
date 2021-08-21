using System;
using System.Collections.Generic;

namespace UnityEditor.Timeline
{
    // Class used for uniquely format names used in the GenericMenu. We can't add duplicate MenuItem in GenericMenu
    // so that's why we need to keep information about the text we want to uniquely format.
    class SequenceMenuNameFormater
    {
        Dictionary<int, int> m_UniqueItem = new Dictionary<int, int>();

        public string Format(string text)
        {
            var key = text.GetHashCode();
            var index = 0;

            if (m_UniqueItem.ContainsKey(key))
            {
                index = m_UniqueItem[key];
                index++;
                m_UniqueItem[key] = index;
            }
            else
            {
                m_UniqueItem.Add(key, index);
                return text;
            }

            return $"{text}{index}";
        }
    }
}
