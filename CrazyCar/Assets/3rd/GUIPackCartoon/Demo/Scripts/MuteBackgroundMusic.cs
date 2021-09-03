// Copyright (C) 2015-2021 ricimi - All rights reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement.
// A Copy of the Asset Store EULA is available at http://unity3d.com/company/legal/as_terms.

using UnityEngine;

namespace Ricimi
{
    // This class is responsible for fading the currently playing background music.
    public class MuteBackgroundMusic : MonoBehaviour
    {
        private BackgroundMusic m_bgMusic;

        private void Awake()
        {
            var backgroundMusic = GameObject.Find("BackgroundMusic");
            if (backgroundMusic != null)
            {
                m_bgMusic = backgroundMusic.GetComponent<BackgroundMusic>();
                if (m_bgMusic != null)
                    m_bgMusic.FadeOut();
            }
        }

        private void OnDestroy()
        {
            if (m_bgMusic != null)
                m_bgMusic.FadeIn();
        }
    }
}
