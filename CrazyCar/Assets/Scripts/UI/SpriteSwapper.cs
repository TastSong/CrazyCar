using UnityEngine;
using UnityEngine.UI;

public class SpriteSwapper : MonoBehaviour {
    public Sprite enabledSprite;
    public Sprite disabledSprite;

<<<<<<< HEAD:CrazyCar/Assets/Scripts/Setting/SpriteSwapper.cs
    private bool m_swapped;
=======
        private bool m_swapped = true;
>>>>>>> parent of 7918dff2 (添加setting):CrazyCar/Assets/Scripts/UI/SpriteSwapper.cs

    private Image m_image;

<<<<<<< HEAD:CrazyCar/Assets/Scripts/Setting/SpriteSwapper.cs
    public void Awake() {
        m_image = GetComponent<Image>();
        m_swapped = PlayerPrefs.GetInt("sound_on") == 1;
    }
=======
        public void Awake()
        {
            m_image = GetComponent<Image>();
        }
>>>>>>> parent of 7918dff2 (添加setting):CrazyCar/Assets/Scripts/UI/SpriteSwapper.cs

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

