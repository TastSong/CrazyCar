// Copyright (C) 2015-2021 ricimi - All rights reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement.
// A Copy of the Asset Store EULA is available at http://unity3d.com/company/legal/as_terms.

using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Ricimi
{
    // This class is based on the official source code for Unity's UI Button (which can
    // be found here: https://bitbucket.org/Unity-Technologies/ui), but adds functionality
    // for smooth tinting the associated image when being pressed.
    public class TintedButton : UIBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerUpHandler, IPointerDownHandler
    {
        [Serializable]
        public class ButtonClickedEvent : UnityEvent { }

        [SerializeField]
        private ButtonClickedEvent m_OnClick = new ButtonClickedEvent();

        private const float m_colorOffset = 0.2f;

        private bool m_pointerInside = false;
        private bool m_pointerPressed = false;

        public ButtonClickedEvent onClick
        {
            get { return m_OnClick; }
            set { m_OnClick = value; }
        }

        public virtual void OnPointerEnter(PointerEventData eventData)
        {
            if (eventData.button != PointerEventData.InputButton.Left)
                return;

            m_pointerInside = true;
            if (m_pointerPressed)
                Press();
        }

        public virtual void OnPointerExit(PointerEventData eventData)
        {
            if (eventData.button != PointerEventData.InputButton.Left)
                return;

            m_pointerInside = false;
            if (m_pointerPressed)
                Unpress();
        }

        public virtual void OnPointerUp(PointerEventData eventData)
        {
            if (eventData.button != PointerEventData.InputButton.Left)
                return;

            m_pointerPressed = false;
            if (m_pointerInside)
            {
                Unpress();
                m_OnClick.Invoke();
            }
        }

        public virtual void OnPointerDown(PointerEventData eventData)
        {
            if (eventData.button != PointerEventData.InputButton.Left)
                return;

            m_pointerPressed = true;
            if (m_pointerInside)
                Press();
        }

        private void Press()
        {
            if (!IsActive())
                return;

            Darken();
        }

        private void Unpress()
        {
            if (!IsActive())
                return;

            Brighten();
        }

        private void Darken()
        {
            var images = GetComponentsInChildren<Image>();
            foreach (var image in images)
                StartCoroutine(DarkenColor(image));
        }

        private void Brighten()
        {
            var images = GetComponentsInChildren<Image>();
            foreach (var image in images)
                StartCoroutine(BrightenColor(image));
        }

        private IEnumerator DarkenColor(Image image)
        {
            for (int i = 0; i < 20; i++)
            {
                var newColor = image.color;
                newColor.r -= 0.01f;
                newColor.g -= 0.01f;
                newColor.b -= 0.01f;
                image.color = newColor;
                yield return new WaitForSeconds(0.01f);
            }
        }

        private IEnumerator BrightenColor(Image image)
        {
            for (int i = 0; i < 20; i++)
            {
                var newColor = image.color;
                newColor.r += 0.01f;
                newColor.g += 0.01f;
                newColor.b += 0.01f;
                image.color = newColor;
                yield return new WaitForSeconds(0.01f);
            }
        }
    }
}
