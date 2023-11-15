using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Utils;
using UnityEngine.UI;
using System;
using QFramework;

public class CountDownAnim : MonoBehaviour, IController {
    public Text countDownText;

    private void Start() {
        countDownText.transform.localScale = Vector3.zero;
    }

    public void PlayAnim(int time, Action succ = null) {
        CoroutineController.manager.StartCoroutine(CountDown(time));
        Sequence sequence = DOTween.Sequence();
        for (int i = 0; i < time; i++) {
            sequence.Append(countDownText.transform.DOScale(1, 0.5f));
            sequence.Append(countDownText.transform.DOScale(0, 0.5f));
        }
        sequence.OnComplete(() => {
            succ?.Invoke();          
            gameObject.SetActiveFast(false);
        });       
    }

    private IEnumerator CountDown(int time) {
        while(time > 0) {
            if (countDownText != null) {
                countDownText.text = time.ToString();
            }
            yield return new WaitForSecondsRealtime(1.0f);
            time--;
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
