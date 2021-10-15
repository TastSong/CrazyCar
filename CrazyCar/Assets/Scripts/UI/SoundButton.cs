using UnityEngine;

public class SoundButton : MonoBehaviour {
    private SpriteSwapper m_spriteSwapper;
    private bool m_on;

<<<<<<< HEAD:CrazyCar/Assets/Scripts/Setting/SoundButton.cs
    private void Start() {
        m_spriteSwapper = GetComponentInChildren<SpriteSwapper>();
        m_on = PlayerPrefs.GetInt("sound_on") == 1;
        if (!m_on) {
            m_spriteSwapper.SwapSprite();
=======
        private void Start()
        {
            m_spriteSwapper = GetComponent<SpriteSwapper>();
            m_on = PlayerPrefs.GetInt("sound_on") == 1;
            if (!m_on)
                m_spriteSwapper.SwapSprite();
>>>>>>> parent of 7918dff2 (添加setting):CrazyCar/Assets/Scripts/UI/SoundButton.cs
        }
    }

    public void Toggle() {
        m_on = !m_on;
        AudioListener.volume = m_on ? 1 : 0;
        PlayerPrefs.SetInt("sound_on", m_on ? 1 : 0);
    }

    public void ToggleSprite() {
        m_on = !m_on;
        m_spriteSwapper.SwapSprite();
    }
}
