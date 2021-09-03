// Copyright (C) 2015-2021 ricimi - All rights reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement.
// A Copy of the Asset Store EULA is available at http://unity3d.com/company/legal/as_terms.

using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace Ricimi
{
    // This class is based on the official source code for Unity's UI Button (which can
    // be found here: https://bitbucket.org/Unity-Technologies/ui), but adds a delay before
    // calling the button's on-clicked event. The reason for doing this lies in the fact
    // that the demo buttons are mostly used to open popups o trigger transitions to new scenes,
    // and it gives a nicer visual feeling to wait for the button animation to be played
    // for a bit before executing those actions (as opposed to interrupting said animation).
    public class AnimatedButton : UIBehaviour, IPointerDownHandler
    {
        [Serializable]
        public class ButtonClickedEvent : UnityEvent { }

        public bool interactable = true;

        [SerializeField]
        private ButtonClickedEvent m_OnClick = new ButtonClickedEvent();

        private Animator m_animator;

        override protected void Start()
        {
            base.Start();
            m_animator = GetComponent<Animator>();
        }

        public ButtonClickedEvent onClick
        {
            get { return m_OnClick; }
            set { m_OnClick = value; }
        }

        public virtual void OnPointerDown(PointerEventData eventData)
        {
            if (eventData.button != PointerEventData.InputButton.Left || !interactable)
                return;

            Press();
        }

        private void Press()
        {
            if (!IsActive())
                return;

            m_animator.SetTrigger("Pressed");
            Invoke("InvokeOnClickAction", 0.1f);
        }

        private void InvokeOnClickAction()
        {
            m_OnClick.Invoke();
        }
    }
}
