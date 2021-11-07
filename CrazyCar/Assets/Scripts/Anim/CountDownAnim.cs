using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Utils;
using UnityEngine.UI;
using System;

public class CountDownAnim : MonoBehaviour {
    public Text countDownText;

    private void Start() {
        countDownText.transform.localScale = Vector3.zero;
    }

    public void PlayAnim(int time, Action succ = null) {
        GameController.manager.StartCoroutine(CountDown(time));
        PlayScreenEffect();
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

    private void PlayScreenEffect() {
        ScreenEffectsManager.manager.wireframeProjector.gameObject.SetActiveFast(true);
        Sequence sequence = DOTween.Sequence();
        sequence.Append(DOTween.To(() => ScreenEffectsManager.manager.wireframeProjector.farClipPlane,
            x => ScreenEffectsManager.manager.wireframeProjector.farClipPlane = x, 300, 3.4f));
        sequence.Append(DOTween.To(() => ScreenEffectsManager.manager.wireframeProjector.farClipPlane,
            x => ScreenEffectsManager.manager.wireframeProjector.farClipPlane = x, 0, 1.4f));
        sequence.OnComplete(() => {
            ScreenEffectsManager.manager.wireframeProjector.gameObject.SetActiveFast(false);
        });
    }

    private IEnumerator CountDown(int time) {
        while(time > 0) {
            countDownText.text = time.ToString();
            yield return new WaitForSecondsRealtime(1.0f);
            time--;
        }
    }
}
