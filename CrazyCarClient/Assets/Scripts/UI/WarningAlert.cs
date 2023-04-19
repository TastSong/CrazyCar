using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using System;
using System.Collections.Generic;

public class WarningAlertInfo{
    public string text;
    public float time;
    public Action callback;

    public WarningAlertInfo(string content, float t, Action action) {
        text = content;
        time = t;
        callback = action;
    }
    
    public WarningAlertInfo(string content) {
        text = content;
        time = 1;
        callback = null;
    }
}

public class WarningAlert : UIPenal {
    public Text warningText;
    private Queue<WarningAlertInfo> queue = new Queue<WarningAlertInfo>();
    private Coroutine warningCor;
    
    public override void InitData(object data) {
        WarningAlertInfo info = data as WarningAlertInfo;
        if (info == null) {
            return;
        }
        ShowWithText(info.text, info.time, info.callback);
    }

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
