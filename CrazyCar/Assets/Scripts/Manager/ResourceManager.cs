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
    public static AssetBundle car;
    public ResourceType curResourceType = ResourceType.None;
    public delegate void ProgressCallback(float value, float totalBytes, bool isDownloading);

    private string hashCar = "";
    private uint CRCCar = 0;
    private string urlCar = "";
    private float sizeCar = 1000;
    private string localCarString = Application.streamingAssetsPath + "/car";

    public void CheckNewResource() {
        //Debug.Log("CheckNewResource");
#if UNITY_EDITOR
        if (car == null) {
            car = AssetBundle.LoadFromFile(localCarString);
        }       
        curResourceType = ResourceType.Loaded;
        return;
#else
        CheckNew();
#endif
    }

    private void CheckNew() {
        if (car != null) {
            curResourceType = ResourceType.Loaded;
        } else {
            CheckCoroutine();
        }
    }

    private void CheckCoroutine() {
        Debug.Log("CheckCoroutine......");

        GameController.manager.StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.resourceUrl,
            fatchData: (data) => {
                Debug.Log(data.ToJson());
                hashCar = (string)data["car"]["hash"];
                CRCCar = uint.Parse((string)data["car"]["crc"]);
                urlCar = NetworkController.manager.HttpBaseUrl + (string)data["car"]["url"];
                sizeCar = float.Parse((string)data["car"]["size"]); 

                GetLocalResource();
            },
            code : (code) => {
                if (code != 200) {
                    string content = "资源下载失败";
                    GameController.manager.warningAlert.Show(
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
            string localCarHash = (string)maniData["car"];

            Debug.Log("++++++ remote hashCar = " + hashCar + "   localCarHash = " + localCarHash);
            if (localCarHash == hashCar) {
                car = AssetBundle.LoadFromFile(localCarString);
            }
        }

        // 下载线上之后，会缓存到一个文件夹，不会替换本地文件
        if (!Caching.IsVersionCached(urlCar, Hash128.Parse(hashCar)) && car == null) {
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
        if (car == null) {
            Debug.Log("Try to Load res From Web");
            float lastProgress = -1;
            var _req = UnityWebRequestAssetBundle.GetAssetBundle(urlCar, Hash128.Parse(hashCar), CRCCar);
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
                    progressCallback(_req.downloadProgress, sizeCar * 1024 * 1024, true);
                } catch {
                    Debug.LogError("bundleError");
                }

                yield return null;
            }

            Debug.Log("dowload car finish");
            try {
                car = DownloadHandlerAssetBundle.GetContent(_req);
            } catch (System.Exception e) {
                Debug.Log(e.ToString());
            }

            Debug.Log("get bundle finish");
            if (car == null) {
                fail?.Invoke();
                yield break;
            }
        }

        success?.Invoke();
    }

    public GameObject GetCarResource(string id) {
        GameObject resultGO = new GameObject();
        try {
#if !UNITY_EDITOR
            Debug.Log("+++= " + "Assets/AB/Car/" + id + "/Prefab/" + id + ".prefab");
            resultGO = car.LoadAsset<GameObject>("Assets/AB/Car/" + id + "/Prefab/" + id + ".prefab");
            if (resultGO == null) {
                return null;
            }
#else
            resultGO = UnityEditor.AssetDatabase.LoadAssetAtPath<GameObject>(
                "Assets/AB/Car/"+ id + "/Prefab/" + id + ".prefab");

#endif
            return resultGO;
        } catch (Exception e) {
            Debug.LogError(e);
            return null;
        }
    }
}
