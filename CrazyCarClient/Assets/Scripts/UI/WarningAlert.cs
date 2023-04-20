using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using System;
using System.Collections.Generic;
using QFramework;

public class WarningAlertInfo {
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
    
    public WarningAlertInfo(string content, Action action) {
        text = content;
        time = 1;
        callback = action;
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

    private void ShowWithText(string text, float time = 1.0f, Action callback = null) {
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
            string content = this.GetSystem<II18NSystem>().GetText(info.text);
            if (content == "") {
                content = info.text;
            }
            warningText.text = content;
            yield return new WaitForSeconds(info.time);           
            info.callback?.Invoke();
        }
        warningCor = null;
        gameObject.SetActiveFast(false);
    }
}
