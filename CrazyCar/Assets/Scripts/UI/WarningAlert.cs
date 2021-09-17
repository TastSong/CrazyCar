using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class WarningAlert : MonoBehaviour {
    public Text warningText;
    private Coroutine warningCor;


    public void ShowWithText(string text, float time = 1.0f, Util.NoneParamFunction callback = null, int fontSize = 64) {
        gameObject.SetActiveFast(true);
        warningText.text = text;
        warningText.fontSize = fontSize;
        if (warningCor != null) {
            StopCoroutine(warningCor);
        }

        warningCor = StartCoroutine(HideWarningAlert(time, callback));
    }

    private IEnumerator HideWarningAlert(float time, Util.NoneParamFunction callback = null) {
        yield return new WaitForSeconds(time);
        gameObject.SetActiveFast(false);
        callback?.Invoke();
    }

    public void Hide() {
        gameObject.SetActiveFast(false);
        warningText.text = "";
    }
}
