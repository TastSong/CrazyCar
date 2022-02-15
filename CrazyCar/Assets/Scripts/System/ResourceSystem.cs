using LitJson;
using System;
using System.Collections;
using System.IO;
using System.Text;
using QFramework;
using UnityEngine;
using UnityEngine.Networking;
using Utils;
using System.Collections.Generic;

public enum ResourceType {
    None = 0,
    Loaded,
    ToDownload
}

public delegate void ProgressCallback(float value, float totalBytes);

public interface IResourceSystem : ISystem {
    ResourceType curResourceType { get; set; }
    void CheckNewResource();
    void DownloadAssets(Action success, ProgressCallback progressCallback, Action fail);
    Sprite GetAvatarResource(int aid);
    EquipResource GetEquipResource(string rid);
}

class ABInfo {
    public string name;
    public string hash = "";
    public uint crc = 0;
    public string url = "";
    public float size = 1000;
    public string localABPath;
    public string localPrafabPath;
    public AssetBundle assetBundle;
}

public enum ABType {
    Avatar,
    Equip
}

public class ResourceSystem : AbstractSystem, IResourceSystem {
    public ResourceType curResourceType { get; set; }

    private Dictionary<ABType, ABInfo> abDic = new Dictionary<ABType, ABInfo>();

    public void CheckNewResource() {
        //Debug.Log("CheckNewResource");
#if UNITY_EDITOR
        foreach (var item in abDic) {
            if (item.Value.assetBundle == null) {
                item.Value.assetBundle = AssetBundle.LoadFromFile(item.Value.localABPath);
            }
        }
        curResourceType = ResourceType.Loaded;
        return;
#else
        CheckNew();
#endif
    }

    private void CheckNew() {

        foreach (var item in abDic) {
            if (item.Value.assetBundle == null) {
                CheckCoroutine();
                return;
            } 
        }
        curResourceType = ResourceType.Loaded;
    }

    private void CheckCoroutine() {
        Debug.Log("CheckCoroutine......");
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
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
            RequestUrl.resourceUrl,
            data: bytes,
            succData: (data) => {
                Debug.Log(data.ToJson());
                abDic[ABType.Avatar].hash = (string)data["avatar"]["hash"];
                abDic[ABType.Avatar].crc = uint.Parse((string)data["avatar"]["crc"]);
                string avatarStr = (string)data["avatar"]["url"];
                if (avatarStr.Contains("http")) {
                    abDic[ABType.Avatar].url = avatarStr;
                } else {
                    abDic[ABType.Avatar].url = this.GetSystem<INetworkSystem>().HttpBaseUrl + (string)data["avatar"]["url"];
                }
                abDic[ABType.Avatar].size = float.Parse((string)data["avatar"]["size"]);

                abDic[ABType.Equip].hash = (string)data["equip"]["hash"];
                abDic[ABType.Equip].crc = uint.Parse((string)data["equip"]["crc"]);
                string equipStr = (string)data["equip"]["url"];
                if (equipStr.Contains("http")) {
                    abDic[ABType.Equip].url = equipStr;
                } else {
                    abDic[ABType.Equip].url = this.GetSystem<INetworkSystem>().HttpBaseUrl + (string)data["equip"]["url"];
                }
                abDic[ABType.Equip].size = float.Parse((string)data["equip"]["size"]);

                GetLocalResource();
            },
            code: (code) => {
                if (code != 200) {
                    string content = "资源下载失败";
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(
                        text: content,
                        callback: () => {
                            Application.Quit();
                        });
                }
            }));
    }

    private void GetLocalResource() {
        CoroutineController.manager.StartCoroutine(ParseLocalResource());
    }

    private IEnumerator ParseLocalResource() {
        string localManiFest = Application.streamingAssetsPath + "/config.json";
#if UNITY_ANDROID
        WWW www = new WWW(localManiFest);
        yield return www;
        string data = www.text;
        if (data != null && data != "") {
            JsonData maniData = JsonMapper.ToObject(data);
#else
        if (File.Exists(localManiFest)) {
            JsonData maniData = JsonMapper.ToObject(File.ReadAllText(localManiFest));
#endif
            Debug.Log(maniData.ToJson());
            string localAvatarHash = (string)maniData["avatar"];
            string localEquipHash = (string)maniData["equip"];

            Debug.Log("++++++ remote avatarHash = " + abDic[ABType.Avatar].hash + "   localAvatarHash = " + localAvatarHash);
            Debug.Log("++++++ remote equipHash = " + abDic[ABType.Equip].hash + "   localEquipHash = " + localEquipHash);
            if (localAvatarHash == abDic[ABType.Avatar].hash) {
                abDic[ABType.Avatar].assetBundle = AssetBundle.LoadFromFile(abDic[ABType.Avatar].localABPath);
            }
            if (localEquipHash == abDic[ABType.Equip].hash) {
                abDic[ABType.Equip].assetBundle = AssetBundle.LoadFromFile(abDic[ABType.Equip].localABPath);
            }
        }

        // 下载线上之后，会缓存到一个文件夹，不会替换本地文件
        //Caching.ClearCache();
        if (!Caching.IsVersionCached(abDic[ABType.Avatar].url, Hash128.Parse(abDic[ABType.Avatar].hash)) && abDic[ABType.Avatar].assetBundle == null ||
            (!Caching.IsVersionCached(abDic[ABType.Equip].url, Hash128.Parse(abDic[ABType.Equip].hash)) && abDic[ABType.Equip].assetBundle == null)) {
            curResourceType = ResourceType.ToDownload;
        } else {
            curResourceType = ResourceType.Loaded;
        }
        yield return null;
    }


    public void DownloadAssets(Action success, ProgressCallback progressCallback, Action fail) {
        CoroutineController.manager.StartCoroutine(Download(success, progressCallback, fail));
    }

    private IEnumerator Download(Action success, ProgressCallback progressCallback, Action fail) {
        foreach (var item in abDic) {
            if (item.Value.assetBundle == null) {
                Debug.Log("Try to Load " + item.Value.name + " From Web");
                float lastProgress = -1;
                var _req = UnityWebRequestAssetBundle.GetAssetBundle(item.Value.url, Hash128.Parse(item.Value.hash), item.Value.crc);
                _req.SendWebRequest();
                long lastTime = Util.GetTime();
                Debug.Log("dowload " + item.Value.name + " before");
                while (!_req.isDone) {
                    if (Mathf.Approximately(lastProgress, _req.downloadProgress)) {
                        if (Util.GetTime() - lastTime > 100 * 1000) {
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
                        progressCallback(_req.downloadProgress, item.Value.size * 1024 * 1024);
                    } catch {
                        Debug.LogError("bundleError");
                    }

                    yield return null;
                }

                Debug.Log("dowload " + item.Value.name + " finish");
                try {
                    item.Value.assetBundle = DownloadHandlerAssetBundle.GetContent(_req);
                } catch (System.Exception e) {
                    Debug.Log(e.ToString());
                }

                Debug.Log("get " + item.Value.name + " bundle finish");
                if (item.Value.assetBundle == null) {
                    fail?.Invoke();
                    yield break;
                }
            }
        }

        success?.Invoke();
    }

    public Sprite GetAvatarResource(int aid) {
        Sprite resultSprite;
        try {
#if !UNITY_EDITOR
            Debug.Log("+++ " + abDic[ABType.Avatar].localPrafabPath + aid + ".png");
            resultSprite = abDic[ABType.Avatar].assetBundle.LoadAsset<Sprite>(abDic[ABType.Avatar].localPrafabPath + aid + ".png");
            if (resultSprite == null) {
                return null;
            }
#else
            resultSprite = UnityEditor.AssetDatabase.LoadAssetAtPath<Sprite>(
                abDic[ABType.Avatar].localPrafabPath + aid.ToString() + ".png");

#endif
            return resultSprite;
        } catch (Exception e) {
            Debug.LogError(e);
            return null;
        }
    }

    public EquipResource GetEquipResource(string rid) {
        try {
            rid = rid.Trim();
            if (this.GetModel<IEquipModel>().EquipResource.ContainsKey(rid)) {
                return this.GetModel<IEquipModel>().EquipResource[rid];
            }
#if !UNITY_EDITOR
            var o = abDic[ABType.Equip].assetBundle.LoadAsset<GameObject>(abDic[ABType.Equip].localPrafabPath + rid + ".prefab");
			if(o == null) {
				return null;
			}
			var e = o.GetComponent<EquipResource>();
#else
            var e = UnityEditor.AssetDatabase.LoadAssetAtPath<EquipResource>(
                abDic[ABType.Equip].localPrafabPath + rid + ".prefab");

#endif
            this.GetModel<IEquipModel>().EquipResource[rid] = e;
            return e;
        } catch (Exception e) {
            Debug.LogError(e);
            return null;
        }
    }

    private void InitABInfo() {
        ABInfo avatarInfo = new ABInfo();    
        avatarInfo.name = "avatar";
        avatarInfo.localABPath = Application.streamingAssetsPath + "/avatar_" + Util.GetPlatform().ToLower();
        avatarInfo.localPrafabPath = "Assets/AB/Avatar/";
        abDic.Add(ABType.Avatar, avatarInfo);
        ABInfo equipInfo = new ABInfo();
        equipInfo.name = "equip";
        equipInfo.localABPath = Application.streamingAssetsPath + "/equip_" + Util.GetPlatform().ToLower();
        equipInfo.localPrafabPath = "Assets/AB/Equip/Items/";
        abDic.Add(ABType.Equip, equipInfo);
    }

    protected override void OnInit() {
        InitABInfo();
    }
}
