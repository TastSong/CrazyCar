using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using System;

public class WarningAlert : MonoBehaviour {
    public Text warningText;
    private Coroutine warningCor;


    public void ShowWithText(string text, float time = 1.0f, Action callback = null) {
        gameObject.SetActiveFast(true);
        warningText.text = text;
        if (warningCor != null) {
            StopCoroutine(warningCor);
        }

        warningCor = StartCoroutine(HideWarningAlert(time, callback));
    }

    private IEnumerator HideWarningAlert(float time, Action callback = null) {
        yield return new WaitForSeconds(time);
        gameObject.SetActiveFast(false);
        callback?.Invoke();
    }

    public void Hide() {
        gameObject.SetActiveFast(false);
        warningText.text = "";
    }
}
