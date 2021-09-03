// Copyright (C) 2015-2021 ricimi - All rights reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement.
// A Copy of the Asset Store EULA is available at http://unity3d.com/company/legal/as_terms.

using UnityEngine;
using UnityEngine.UI;

namespace Ricimi
{
    // This class handles updating the sound UI widgets depending on the player's selection.
    public class SoundManager : MonoBehaviour
    {
        private Slider m_soundSlider;
        private GameObject m_soundButton;

        private void Start()
        {
            m_soundSlider = GetComponent<Slider>();
            m_soundSlider.value = PlayerPrefs.GetInt("sound_on");
            m_soundButton = GameObject.Find("SoundButton/Button");
        }

        public void SwitchSound()
        {
            AudioListener.volume = m_soundSlider.value;
            PlayerPrefs.SetInt("sound_on", (int)m_soundSlider.value);
            if (m_soundButton != null)
            {
                m_soundButton.GetComponent<SoundButton>().ToggleSprite();
            }
        }
    }
}
