using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Utils;

public enum ConfirmAlertType {
    Double = 0,
    Single
}

public class InfoConfirmAlert : MonoBehaviour {
    public Text titleText;
    public Text contentText;
    public Button cancelBtn;
    public Button confirmBtn;
    public Text confirmText;
    public Text cancelText;
    //public Image Bg;

    private Util.NoneParamFunction success;
    private Util.NoneParamFunction fail;
    private int dialogID = 0;

    void Start() {
        cancelBtn.onClick.AddListener(() => {
            fail?.Invoke();
            Util.DelayExecuteWithSecond(0.25f, () => {
                gameObject.SetActive(false);
            });
        });
        confirmBtn.onClick.AddListener(() => {
            success?.Invoke();
            Util.DelayExecuteWithSecond(0.25f, () => {
                gameObject.SetActive(false);
            });
        });
    }

    public int ShowWithText(string title = "提示", string content = "", Util.NoneParamFunction success = null, Util.NoneParamFunction fail = null,
        string confirmText = "确定", string cancelText = "取消", ConfirmAlertType type = ConfirmAlertType.Double,
        int titleTextFont = 20, float bgHeight = 160f) {
        if (SceneManager.GetActiveScene().buildIndex == (int)SceneID.Loading) {
            // 在场景正在loading时 延迟加载
            GameController.manager.StartCoroutine(DelayShow(title, content, success, fail, confirmText, cancelText, type));
            return 0;
        }
        Debug.Log("info");
        titleText.fontSize = titleTextFont;
        contentText.text = content;
        if (content == "") {
            Debug.LogError("没内容弹啥弹窗！！！！！！！！！！！！！！！！");
        }
        contentText.text = content;
        gameObject.SetActiveFast(true);
        this.success = success;
        this.fail = fail;
        cancelBtn.gameObject.SetActive(type == ConfirmAlertType.Double && fail != null);

        this.confirmText.text = confirmText;
        this.cancelText.text = cancelText;
        titleText.text =title;
        //Bg.rectTransform.sizeDelta = new Vector2(Bg.rectTransform.sizeDelta.x, bgHeight);
        dialogID += 1;
        dialogID %= 25535;
        return dialogID;
    }

    // 延迟出现Alert
    private IEnumerator DelayShow(string title, string content, Util.NoneParamFunction success, Util.NoneParamFunction fail,
        string confirmText, string cancelText, ConfirmAlertType type) {
        yield return new WaitForSeconds(0.5f);
        ShowWithText(title, content, success, fail, confirmText, cancelText, type);
    }

    public void Close(int id) {
        if (dialogID == id) {
            gameObject.SetActiveFast(false);
        }
    }
}