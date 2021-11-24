using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoustmSwitch : MonoBehaviour{
    public Slider slider;
    public Color enabledColor;
    public Color disabledColor;
    public Image colorImage;
    public Sprite enabledSprite;
    public Sprite disabledSprite;
    public Image changeImage;

    private void Start() {
        slider.maxValue = 1;
        slider.minValue = 0;
        slider.wholeNumbers = true;

        slider.onValueChanged.AddListener((value) => {
            UpdateUI((int)value);
        });

        UpdateUI((int)slider.value);
    }

    private void UpdateUI(int value) {
        if (value == 1) {
            colorImage.color = enabledColor;
            changeImage.sprite = enabledSprite;
        } else {
            colorImage.color = disabledColor;
            changeImage.sprite = disabledSprite;
        }
    }
}
