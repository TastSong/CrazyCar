using LitJson;
using System.Collections;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using System;
using QFramework;

public class DownloadResUI : MonoBehaviour, IController {
    public Text showText;
    public Slider progressSlider;
    public Button standAloneBtn;

    private void Start() {
        standAloneBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand<EnableStandAloneCommand>();
        });
        //this.SendCommand<EnableStandAloneCommand>();

        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("platform");
        w.Write(Util.GetPlatform());
        w.WritePropertyName("version");
        w.Write(Application.version);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        Debug.Log("++++++ " + this.GetSystem<INetworkSystem>().HttpBaseUrl);
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        // Unity 2021 不能开启游戏就发送HTTP会有报错
        StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.forcedUpdatingUrl,
                data: bytes, succData: (data) => {
                    if ((bool)data["is_forced_updating"]) {
                        this.SendCommand(new ShowInfoConfirmAlertCommand(content: this.GetSystem<II18NSystem>().GetText("Version is too low"),
                            success: () => {
                                Application.OpenURL((string)data["url"]);
                                Application.Quit();
                            },
                            confirmText: this.GetSystem<II18NSystem>().GetText("Download")));
                    } else {
                        this.GetSystem<IAddressableSystem>().SetUpdateInfo(() => { DownloadRes(); });
                    }
                }));
    }

    private void DownloadRes() {
        this.GetSystem<IAddressableSystem>().GetDownloadAssets();

        this.GetSystem<IAddressableSystem>().SetCallBack(
            OnCheckCompleteNeedUpdate: (size) => {
                Debug.Log("需要更新");
                this.GetSystem<IAddressableSystem>().DownloadAsset();
            },
            OnCompleteDownload: () => {
                Debug.Log("下载完成");
                FinishDownloadRes();
            },
            OnCheckCompleteNoUpdate: () => {
                Debug.Log("不需要更新");
                FinishDownloadRes();
            },
            OnUpdate: (percent, tatalSize) => {
                try {
                    UpdateProgress(percent, tatalSize);
                } catch { }
            });
    }

    private void FinishDownloadRes() {
        this.SendCommand(new ShowPageCommand(UIPageType.LoginUI));
        this.SendCommand(new HidePageCommand(UIPageType.DownloadResUI));
    }

    private float lastProgress = 0;
    private float lastTime = -1;
    private void UpdateProgress(float value, float totalBytes) {
        if (value < 0.01f) {
            return;
        }

        if (value < 1f) {
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
            showText.text = this.GetSystem<II18NSystem>().GetText("Resource loading");
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
