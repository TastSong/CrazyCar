using UnityEngine;
using UnityEngine.UI;

public class SpriteSwapper : MonoBehaviour {
    public Sprite enabledSprite;
    public Sprite disabledSprite;

    private bool m_swapped;

    private Image m_image;

    public void Awake() {
        m_image = GetComponent<Image>();
        m_swapped = PlayerPrefs.GetInt("sound_on") == 1;
    }

    public void SwapSprite() {
        if (m_swapped) {
            m_swapped = false;
            m_image.sprite = disabledSprite;
        } else {
            m_swapped = true;
            m_image.sprite = enabledSprite;
        }
    }
}

