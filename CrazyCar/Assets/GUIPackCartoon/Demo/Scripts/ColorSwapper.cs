// Copyright (C) 2015-2021 ricimi - All rights reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement.
// A Copy of the Asset Store EULA is available at http://unity3d.com/company/legal/as_terms.

using UnityEngine;
using UnityEngine.UI;

namespace Ricimi
{
    // Utility class for swapping the color of a UI Image between two predefined values.
    public class ColorSwapper : MonoBehaviour
    {
        public Color enabledColor;
        public Color disabledColor;

        private bool m_swapped = true;

        private Image m_image;

        private void Awake()
        {
            m_image = GetComponent<Image>();
        }

        public void SwapColor()
        {
            if (m_swapped)
            {
                m_swapped = false;
                m_image.color = disabledColor;
            }
            else
            {
                m_swapped = true;
                m_image.color = enabledColor;
            }
        }
    }
}
