using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using Utils;

public enum ResourceType {
    None = 0,
    Loaded,
    ToDownload
}

public class ResourceManager {
    public static AssetBundle avatar;
    public ResourceType curResourceType = ResourceType.None;
    public delegate void ProgressCallback(float value, float totalBytes, bool isDownloading);

    private string hashAvatar = "";
    private uint CRCAvatar = 0;
    private string urlAvatar = "";
    private float sizeAvatar = 1000;
    private string localAvatarString = Application.streamingAssetsPath + "/avatar";

    public void CheckNewResource() {
        //Debug.Log("CheckNewResource");
#if UNITY_EDITOR
        if (avatar == null) {
            avatar = AssetBundle.LoadFromFile(localAvatarString);
        }       
        curResourceType = ResourceType.Loaded;
        return;
#else
        CheckNew();
#endif
    }

    private void CheckNew() {
        if (avatar != null) {
            curResourceType = ResourceType.Loaded;
        } else {
            CheckCoroutine();
        }
    }

    private void CheckCoroutine() {
        Debug.Log("CheckCoroutine......");

        GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.resourceUrl,
            succData: (data) => {
                Debug.Log(data.ToJson());
                hashAvatar = (string)data["avatar"]["hash"];
                CRCAvatar = uint.Parse((string)data["avatar"]["crc"]);
                urlAvatar = NetworkController.manager.HttpBaseUrl + (string)data["avatar"]["url"];
                sizeAvatar = float.Parse((string)data["avatar"]["size"]); 

                GetLocalResource();
            },
            code : (code) => {
                if (code != 200) {
                    string content = "资源下载失败";
                    GameController.manager.warningAlert.ShowWithText(
                        text: content,
                        callback: () => {
                            Application.Quit();
                        });
                }
            }));
    }

    private void GetLocalResource() {
        GameController.manager.StartCoroutine(ParseLocalResource());
    }

    private IEnumerator ParseLocalResource() {
        string localManiFest = Application.streamingAssetsPath + "/config.json";
#if UNITY_ANDROID
        WWW www = new WWW(localManiFest);
        yield return www;
        string data = www.text;
        if (data != null && data != "") 
        {
            JsonData maniData = JsonMapper.ToObject(data);
#else
        if (File.Exists(localManiFest)) {
            JsonData maniData = JsonMapper.ToObject(File.ReadAllText(localManiFest));
#endif
            Debug.Log(maniData.ToJson());
            string localAvatarHash = (string)maniData["avatar"];

            Debug.Log("++++++ remote hashAvatar = " + hashAvatar + "   localAvatarHash = " + localAvatarHash);
            if (localAvatarHash == hashAvatar) {
                avatar = AssetBundle.LoadFromFile(localAvatarString);
            }
        }

        // 下载线上之后，会缓存到一个文件夹，不会替换本地文件
        //Caching.ClearCache();
        if (!Caching.IsVersionCached(urlAvatar, Hash128.Parse(hashAvatar)) && avatar == null) {
            curResourceType = ResourceType.ToDownload;
        } else {
            curResourceType = ResourceType.Loaded;
        }
        yield return null;
    }

    public void DownloadAssets(Util.NoneParamFunction success, ProgressCallback progressCallback, Util.NoneParamFunction fail) {
        GameController.manager.StartCoroutine(Download(success, progressCallback, fail));
    }

    private IEnumerator Download(Util.NoneParamFunction success, ProgressCallback progressCallback, Util.NoneParamFunction fail) {
        if (avatar == null) {
            Debug.Log("Try to Load res From Web");
            float lastProgress = -1;
            var _req = UnityWebRequestAssetBundle.GetAssetBundle(urlAvatar, Hash128.Parse(hashAvatar), CRCAvatar);
            _req.SendWebRequest();
            long lastTime = Util.GetTime();
            Debug.Log("dowload before");
            while (!_req.isDone) {
                if (Mathf.Approximately(lastProgress, _req.downloadProgress)) {
                    if (Util.GetTime() - lastTime > 10 * 1000) {
                        //fail
                        fail?.Invoke();
                        yield break;
                    } else {
                    }
                } else {
                    lastProgress = _req.downloadProgress;
                    lastTime = Util.GetTime();
                }

                try {
                    progressCallback(_req.downloadProgress, sizeAvatar * 1024 * 1024, true);
                } catch {
                    Debug.LogError("bundleError");
                }

                yield return null;
            }

            Debug.Log("dowload avatar finish");
            try {
                avatar = DownloadHandlerAssetBundle.GetContent(_req);
            } catch (System.Exception e) {
                Debug.Log(e.ToString());
            }

            Debug.Log("get bundle finish");
            if (avatar == null) {
                fail?.Invoke();
                yield break;
            }
        }

        success?.Invoke();
    }

    public Sprite GetAvatarResource(int id) {
        Sprite resultSprite;
        try {
#if !UNITY_EDITOR
            Debug.Log("+++= " + "Assets/AB/Avatar/" + id + ".png");
            resultSprite = avatar.LoadAsset<Sprite>("Assets/AB/Avatar/" + id + ".png");
            if (resultSprite == null) {
                return null;
            }
#else
            resultSprite = UnityEditor.AssetDatabase.LoadAssetAtPath<Sprite>(
                "Assets/AB/Avatar/" + id.ToString() + ".png");

#endif
            return resultSprite;
        } catch (Exception e) {
            Debug.LogError(e);
            return null;
        }
    }
}
