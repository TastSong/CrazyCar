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