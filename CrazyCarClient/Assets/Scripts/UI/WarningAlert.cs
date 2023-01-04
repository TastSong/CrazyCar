using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using System;
using System.Collections.Generic;

public class WarningAlert : MonoBehaviour {
    public Text warningText;

    private class WarningAlertInfo{
        public string text;
        public float time;
        public Action callback;

        public WarningAlertInfo(string content, float t, Action action) {
            text = content;
            time = t;
            callback = action;
        }
    }
    private Queue<WarningAlertInfo> queue = new Queue<WarningAlertInfo>();
    private Coroutine warningCor;


    public void ShowWithText(string text, float time = 1.0f, Action callback = null) {
        WarningAlertInfo info = new WarningAlertInfo(text, time, callback);
        queue.Enqueue(info);
        gameObject.SetActiveFast(true);
        if (warningCor == null) {
            warningCor = StartCoroutine(HideWarningAlert());
        }       
    }

    private IEnumerator HideWarningAlert() {
        while (queue.Count != 0) {
            WarningAlertInfo info = queue.Dequeue();
            warningText.text = info.text;
            yield return new WaitForSeconds(info.time);           
            info.callback?.Invoke();
        }
        warningCor = null;
        gameObject.SetActiveFast(false);
    }
}
