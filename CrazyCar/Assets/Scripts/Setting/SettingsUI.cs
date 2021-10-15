using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class SettingsUI : MonoBehaviour {
    public Button closeBtn;

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            gameObject.SetActiveFast(false);
        });
    }
}
