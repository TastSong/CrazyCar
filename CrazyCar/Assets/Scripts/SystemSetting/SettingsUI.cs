using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TMPro;

public class SettingsUI : MonoBehaviour {
    public Button closeBtn;
    public Button exitBtn;
    public TMP_Dropdown languageDropdown;

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            gameObject.SetActiveFast(false);
        });

        exitBtn.onClick.AddListener(() => {
            Application.Quit();
        });
    }
}
