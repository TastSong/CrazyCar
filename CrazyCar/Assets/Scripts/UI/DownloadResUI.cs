using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TMPro;

public class DownloadResUI : MonoBehaviour {
    public TMP_Text showText;
    public Slider progressSlider;

    private void Start() {
        CheckResource(() => {
            GameController.manager.tinyMsgHub.Publish(new DownloadResUIMessage());
        });
    }

    public void CheckResource(Util.NoneParamFunction success) {
        StartCoroutine(Check(success));
    }

    private IEnumerator Check(Util.NoneParamFunction success) {
        yield return new WaitUntil(() => {
            return GameController.manager != null && GameController.manager.resourceManager != null;
        });
        showText.text = "";
        progressSlider.value = 0;
        GameController.manager.resourceManager.CheckNewResource();
        yield return new WaitUntil(() => {
            return GameController.manager.resourceManager.curResourceType != ResourceType.None;
        });
        if (GameController.manager.resourceManager.curResourceType != ResourceType.None) {
            GameController.manager.resourceManager.DownloadAssets(() => {
                success?.Invoke();
            }, UpdateProgress, () => {
                GameController.manager.warningAlert.Show(text: "Download assets failed", callback: () => {
                    Application.Quit();
                });
            });
        } else {
            success?.Invoke();
        }
    }

    private float lastProgress;
    private float lastTime = -1;
    private void UpdateProgress(float value, float totalBytes, bool isDownloading) {
        if (value < 0.01f) {
            return;
        }

        if (isDownloading) {
            // download
            var t = Time.realtimeSinceStartup;
            float speed = 0f;
            try {
                speed = ((value - lastProgress) * totalBytes) / (t - lastTime);
                speed /= 1024;
            } catch {
            }

            if (lastTime < 0) {
                speed = 0f;
                lastTime = t;
            }

            progressSlider.value = value;
            if (speed > 1024) {
                showText.text = (speed / 1024).ToString("0.0") +  "M/s";
            } else {
                showText.text = speed.ToString("0.0") + "K/s";
            }
        } else {
            showText.text = "Resource loading";
        }
    }
}
