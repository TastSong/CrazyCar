using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Utils;
using System;
using QFramework;

public enum ConfirmAlertType {
    Double = 0,
    Single
}

public class InfoConfirmAlert : MonoBehaviour, IController {
    public Text titleText;
    public Text contentText;
    public Button cancelBtn;
    public Button confirmBtn;
    public Text confirmText;
    public Text cancelText;

    private Action success;
    private Action fail;

    void Start() {
        cancelBtn.onClick.AddListener(() => {
            fail?.Invoke();
            this.GetSystem<ISoundSystem>().PlayClickSound();
            gameObject.SetActive(false);
        });
        confirmBtn.onClick.AddListener(() => {
            success?.Invoke();
            this.GetSystem<ISoundSystem>().PlayClickSound();
            gameObject.SetActive(false);
        });
    }

    public void ShowWithText(string title = "Tips", string content = "", Action success = null, Action fail = null,
        string confirmText ="Confirm", string cancelText = "Cancel", ConfirmAlertType type = ConfirmAlertType.Double) {
        contentText.text = content;
        contentText.text = content;
        gameObject.SetActiveFast(true);
        this.success = success;
        this.fail = fail;
        cancelBtn.gameObject.SetActive(type == ConfirmAlertType.Double && fail != null);

        this.confirmText.text = GetI18NText("Confirm", confirmText);
        this.cancelText.text = GetI18NText("Cancel", cancelText);
        titleText.text = GetI18NText("Tips", title);
        return;
    }

    public string GetI18NText(string normalText, string showText) {
        if (this.GetSystem<II18NSystem>().InitFinish) {
            if (normalText == showText) {
                return this.GetSystem<II18NSystem>().GetText(showText);
            } else {
                return showText;
            }
        } else {
            return normalText;
        }
    }


    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}