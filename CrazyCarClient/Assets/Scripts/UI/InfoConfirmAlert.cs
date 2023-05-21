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

public class InfoConfirmInfo {
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

public class InfoConfirmAlert : UIPenal {
    public Text titleText;
    public Text contentText;
    public Button cancelBtn;
    public Button confirmBtn;
    public Text confirmText;
    public Text cancelText;

    private Action success;
    private Action fail;
    
    private Queue<InfoConfirmInfo> queue = new Queue<InfoConfirmInfo>();

    public override void InitData(object data) {
        InfoConfirmInfo info = data as InfoConfirmInfo;
        if (info == null) {
            return;
        }
        ShowWithText(info.title, info.content, info.succ, info.fail, info.confirmText, info.cancelText, info.type);
    }

    private void Start() {
        cancelBtn.onClick.AddListener(() => {
            fail?.Invoke();
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (queue.Count == 0) {
                gameObject.SetActive(false);
            } else {
                UpdateUI(queue.Dequeue());
            }
        });

        confirmBtn.onClick.AddListener(() => {
            success?.Invoke();
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (queue.Count == 0) {
                gameObject.SetActive(false);
            } else {
                UpdateUI(queue.Dequeue());
            }
        });
    }

    private void ShowWithText(string title = "Tips", string content = "", Action success = null, Action fail = null,
        string confirmText ="Confirm", string cancelText = "Cancel", ConfirmAlertType type = ConfirmAlertType.Double) {
        InfoConfirmInfo info = new InfoConfirmInfo(title: title, content: content, success: success, fail: fail, confirmText: confirmText, cancelText: cancelText, type: type);
        queue.Enqueue(info);
        UpdateUI(queue.Dequeue());
        return;
    }

    private void UpdateUI(InfoConfirmInfo info) {
        gameObject.SetActiveFast(true);

        contentText.text = info.content;
        this.success = info.succ;
        this.fail = info.fail;
        cancelBtn.gameObject.SetActive(info.type == ConfirmAlertType.Double);
        this.confirmText.text = GetI18NText(info.confirmText);
        this.cancelText.text = GetI18NText(info.cancelText);
        titleText.text = GetI18NText(info.title);
    }

    public string GetI18NText(string showText) {
        if (this.GetSystem<II18NSystem>().InitFinish) {
            return this.GetSystem<II18NSystem>().GetText(showText);
        } else {
            return showText;
        }
    }
}