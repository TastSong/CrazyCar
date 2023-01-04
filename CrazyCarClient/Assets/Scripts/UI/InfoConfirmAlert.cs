using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Utils;
using System;
using QFramework;
using System.Collections.Generic;

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

    private class InfoConfirmInfo {
        public string title;
        public string content;
        public Action succ;
        public Action fail;
        public string confirmText;
        public string cancelText;
        public ConfirmAlertType type;

        public InfoConfirmInfo(string title = "Tips", string content = "", Action success = null, Action fail = null,
        string confirmText = "Confirm", string cancelText = "Cancel", ConfirmAlertType type = ConfirmAlertType.Double) {
            this.title = title;
            this.content = content;
            this.succ = success;
            this.fail = fail;
            this.confirmText = confirmText;
            this.cancelText = cancelText;
            this.type = type;
        }
    }
    private Queue<InfoConfirmInfo> queue = new Queue<InfoConfirmInfo>();

    private void Start() {
        cancelBtn.onClick.AddListener(() => {
            fail?.Invoke();
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (queue.Count == 0) {
                gameObject.SetActive(false);
            } else {
                UpdateUI(queue.Dequeue());
            }
        });

        confirmBtn.onClick.AddListener(() => {
            success?.Invoke();
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (queue.Count == 0) {
                gameObject.SetActive(false);
            } else {
                UpdateUI(queue.Dequeue());
            }
        });
    }

    public void ShowWithText(string title = "Tips", string content = "", Action success = null, Action fail = null,
        string confirmText ="Confirm", string cancelText = "Cancel", ConfirmAlertType type = ConfirmAlertType.Double) {
        InfoConfirmInfo info = new InfoConfirmInfo(title: title, content: content, success: success, fail: fail, confirmText: confirmText, cancelText: cancelText, type: type);
        queue.Enqueue(info);
        if (!gameObject.activeInHierarchy) {
            UpdateUI(queue.Dequeue());
        }       
        return;
    }

    private void UpdateUI(InfoConfirmInfo info) {
        gameObject.SetActiveFast(true);

        contentText.text = info.content;
        this.success = info.succ;
        this.fail = info.fail;
        cancelBtn.gameObject.SetActive(info.type == ConfirmAlertType.Double && fail != null);
        this.confirmText.text = GetI18NText("Confirm", info.confirmText);
        this.cancelText.text = GetI18NText("Cancel", info.cancelText);
        titleText.text = GetI18NText("Tips", info.title);
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