using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using LitJson;
using System;
using UnityEngine.Networking;
using System.Text;
using System.Threading;

public class TaskableAccessResult {
    public JsonData serverData; // 服务器返回code 200时， data字段值
    public JsonData rawServerData; // 服务器返回结果整个的值
    public long serverCode; // 服务器代码
    public string error; // 错误提示
    public long httpCode;
    public long code {
        get {
            if (serverCode > 0) {
                return serverCode;
            }
            return httpCode;
        }
    }

    public Exception exception;
    public bool hasError {
        get {
            return exception != null;
        }
    }
    public bool parseError {
        get {
            return httpCode > 0 && serverCode < 0;
        }
    }

    public bool httpError {
        get {
            return httpCode <= 0;
        }
    }

    public TaskableAccessResult(string result, long httpCode, Exception ex) {
        try {
            this.httpCode = httpCode;
            serverCode = -1;
            exception = ex;
            serverData = null;
            rawServerData = null;

            if (ex != null) {
                Debug.Log("Server Error " + ex);
                Debug.LogError("Server Error StackTrace" + ex.StackTrace);
                return;
            }

            JsonData data = JsonMapper.ToObject(result);
            rawServerData = data;
            int code = (int)data["code"];
            serverCode = code;

            if (code == 200 && data.Keys.Contains("data")) {
                serverData = data["data"];
            }

            if (code != 200 && data.Keys.Contains("error")) {
                error = (string)data["error"];
            }
        } catch (Exception e) {
            // Parse Error;
            exception = e;
            serverCode = -1;
        }
    }
}

public class TaskableHTTP {
    public static async UniTask<TaskableAccessResult> Get(string url, string server_token,
        CancellationToken cancelToken = default) {
        return await Req(url, "GET", server_token, null, cancelToken);
    }

    public static async UniTask<TaskableAccessResult> Get(string url, CancellationToken cancelToken = default) {
        return await Req(url, "GET", "", null, cancelToken);
    }

    public static async UniTask<TaskableAccessResult> Post(string url, string server_token, byte[] body,
        CancellationToken cancelToken = default) {
        return await Req(url, "POST", server_token, body, cancelToken);
    }

    public static async UniTask<TaskableAccessResult> Post(string url, byte[] body,
        CancellationToken cancelToken = default) {
        return await Req(url, "POST", "", body, cancelToken);
    }

    public static async UniTask<TaskableAccessResult> Req(string url, string method, string token, byte[] body,
        CancellationToken cancelToken) {
        try {
            var request = new UnityWebRequest(url, method);
            request.timeout = 30;

            if (method == "POST") {
                UploadHandler handler = new UploadHandlerRaw(body);
                handler.contentType = "application/json";
                request.useHttpContinue = false;
                request.uploadHandler = handler;
            }

            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Accept", "application/json");
            if (!string.IsNullOrEmpty(token)) {
                request.SetRequestHeader("Authorization", token);
            }

            request.downloadHandler = new DownloadHandlerBuffer();
            Debug.Log("request--->" + request.url);


            var response = await request.SendWebRequest().WithCancellation(cancelToken);
            //var response = request;
            //await UniTask.WaitUntil(() => request.isDone);

            if (response.isNetworkError || response.responseCode != 200) {
                return new TaskableAccessResult(null, response.responseCode,
                    new Exception("Http Access Error Code Return"));
            }

            byte[] results = request.downloadHandler.data;
            string s = Encoding.UTF8.GetString(results);
            return new TaskableAccessResult(s, response.responseCode, null);
        } catch (Exception e) {
            Debug.LogError("http" + e);
            if (e is UnityWebRequestException) {
                UnityWebRequestException ex = e as UnityWebRequestException;
                return new TaskableAccessResult(null, ex.ResponseCode, e);
            }

            return new TaskableAccessResult(null, -1, e);
        }
    }
}