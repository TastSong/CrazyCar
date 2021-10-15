using UnityEngine;
using UnityEngine.UI;

public class ColorSwapper : MonoBehaviour {
    public Color enabledColor;
    public Color disabledColor;

    private bool m_swapped = true;

    private Image m_image;

    private void Awake() {
        m_image = GetComponent<Image>();
    }

    public void SwapColor() {
        if (m_swapped) {
            m_swapped = false;
            m_image.color = disabledColor;
        } else {
            m_swapped = true;
            m_image.color = enabledColor;
        }
    }
}

