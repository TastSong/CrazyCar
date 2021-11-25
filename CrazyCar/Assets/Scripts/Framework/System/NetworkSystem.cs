using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;
using Utils;
using UnityEngine.Networking;
using System;
using LitJson;
using System.Text;

public interface INetworkSystem : ISystem {
    ServerType ServerType { get; set; }
    string HttpBaseUrl { get; set; }
    IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null);
}

public class NetworkSystem : AbstractSystem, INetworkSystem {
    private ServerType serverType;

    public ServerType ServerType {
        get {
            return serverType;
        }
        set {
            serverType = value;
        } }
    public string HttpBaseUrl { get; set; }

    public IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null) {
        if (this.GetModel<IGameControllerModel>().StandAlone.Value) {
            yield break;
        }

        UnityWebRequest request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST);
        if (data != null) {
            request.uploadHandler = new UploadHandlerRaw(data);
        }
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("Accept", "application/json");
        if (!string.IsNullOrEmpty(token)) {
            request.SetRequestHeader("Authorization", token);
        }

        yield return request.SendWebRequest();

        if (request.isNetworkError || request.isHttpError) {
            Debug.LogError("Is Network Error url = " + url);
        } else {
            byte[] results = request.downloadHandler.data;
            string s = Encoding.UTF8.GetString(results);
            Debug.Log(s);
            JsonData d = JsonMapper.ToObject(s);

            code?.Invoke((int)d["code"]);
            if ((int)d["code"] == 200) {
                succData?.Invoke(d["data"]);
            }
        }
    }

    protected override void OnInit() {
        
    }
}
