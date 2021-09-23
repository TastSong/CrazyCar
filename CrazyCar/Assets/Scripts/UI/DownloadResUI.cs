using LitJson;
using System.Collections;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class DownloadResUI : MonoBehaviour {
    public Text showText;
    public Slider progressSlider;

    private void Start() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("platform");
        w.Write(Util.GetPlatform());
        w.WritePropertyName("version");
        w.Write(Application.version);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.forcedUpdatingUrl,
            data: bytes, succData: (data) => {
                if ((bool)data["is_forced_updating"]) {
                    GameController.manager.infoConfirmAlert.ShowWithText(content: "版本过低",
                        success: () => {
                            Application.OpenURL((string)data["url"]);
                            Application.Quit();
                        },
                        confirmText: "Download");
                } else {
                    CheckResource(() => {
                        GameController.manager.tinyMsgHub.Publish(new DownloadResFinishMsg());
                    });
                }
            }));  
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
                GameController.manager.warningAlert.ShowWithText(text: "Download assets failed", callback: () => {
                    Application.Quit();
                });
            });
        } else {
            success?.Invoke();
        }
    }

    private float lastProgress = 0;
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
                showText.text = (speed / 1024).ToString("0.0") + "M/s";
            } else {
                showText.text = speed.ToString("0.0") + "K/s";
            }
        } else {
            showText.text = "Resource loading";
        }
    }
}
