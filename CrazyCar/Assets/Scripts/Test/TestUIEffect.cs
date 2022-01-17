using Coffee.UIExtensions;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class TestUIEffect : MonoBehaviour{
    public UIShiny xboxConnect;
    public UIDissolve xboxDisconnect;

    private void Update() {
        if (Input.GetKeyDown(KeyCode.A)) {
            PlayConnectAnim();
        }

        if (Input.GetKeyDown(KeyCode.S)) {
            PlayDisconnectAnim();
        }
    }

    [Obsolete]
    private void PlayConnectAnim() {
        xboxConnect.gameObject.SetActiveFast(true);
        float time = xboxConnect.duration + 1;
        StartCoroutine(DelayExe(time, () => {
            xboxConnect.gameObject.SetActiveFast(false);
            xboxConnect.effectFactor = 0;
            xboxConnect.play = true;
        }));
    }

    [Obsolete]
    private void PlayDisconnectAnim() {
        xboxDisconnect.gameObject.SetActiveFast(true);
        float time = xboxDisconnect.duration + 1;
        StartCoroutine(DelayExe(time, () => {
            xboxDisconnect.gameObject.SetActiveFast(false);
            xboxDisconnect.effectFactor = 0;
            xboxDisconnect.play = true;
        }));
    }

    private IEnumerator DelayExe(float t, Action fec) {
        yield return new WaitForSeconds(t);
        fec.Invoke();
    }
}
