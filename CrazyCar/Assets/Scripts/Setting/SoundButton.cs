using UnityEngine;

public class SoundButton : MonoBehaviour {
    private SpriteSwapper m_spriteSwapper;
    private bool m_on;

    private void Start() {
        m_spriteSwapper = GetComponentInChildren<SpriteSwapper>();
        m_on = PlayerPrefs.GetInt("sound_on") == 1;
        if (!m_on) {
            m_spriteSwapper.SwapSprite();
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
