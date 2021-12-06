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
    //public Image Bg;

    private Action success;
    private Action fail;
    private int dialogID = 0;

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

    public int ShowWithText(string title = "Tips", string content = "", Action success = null, Action fail = null,
        string confirmText ="Confirm", string cancelText = "Cancel", ConfirmAlertType type = ConfirmAlertType.Double) {
        if (SceneManager.GetActiveScene().buildIndex == (int)SceneID.Loading) {
            // 在场景正在loading时 延迟加载
            CoroutineController.manager.StartCoroutine(DelayShow(title, content, success, fail, confirmText, cancelText, type));
            return 0;
        }
        contentText.text = content;
        if (content == "") {
            Debug.LogError("没内容弹啥弹窗！！！！！！！！！！！！！！！！");
        }
        contentText.text = content;
        gameObject.SetActiveFast(true);
        this.success = success;
        this.fail = fail;
        cancelBtn.gameObject.SetActive(type == ConfirmAlertType.Double && fail != null);

        this.confirmText.text = GetI18NText("Confirm", confirmText);
        this.cancelText.text = GetI18NText("Cancel", cancelText);
        titleText.text = GetI18NText("Tips", title);
        //Bg.rectTransform.sizeDelta = new Vector2(Bg.rectTransform.sizeDelta.x, bgHeight);
        dialogID += 1;
        dialogID %= 25535;
        return dialogID;
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

    // 延迟出现Alert
    private IEnumerator DelayShow(string title, string content, Action success, Action fail,
        string confirmText, string cancelText, ConfirmAlertType type) {
        yield return new WaitForSeconds(0.5f);
        ShowWithText(title, content, success, fail, confirmText, cancelText, type);
    }

    public void Close(int id) {
        if (dialogID == id) {
            gameObject.SetActiveFast(false);
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}