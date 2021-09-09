using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Utils {
    public static class GameObjectExtension {
        public static void SetActiveFast(this GameObject o, bool s) {
            if (o.activeSelf != s) {
                o.SetActive(s);
            }
        }
    }

    public static class RequestUrl {
        public static string loginUrl = "Login";
        public static string registerUrl = "Register";
        public static string avatarUrl = "Avatar";
        public static string changeAvatarUrl = "ChangeAvatar";
        public static string resourceUrl = "Resource";
        public static string timeTrailDetailUrl = "TimeTrailDetailUrl";
        public static string timeTrailResultUrl = "TimeTrailResultUrl";
        public static string timeTrailRankUrl = "TimeTrailRankUrl";
    }

    public static class PrefKeys {
        public const string lastLogNid = "lastLogNid";
        public const string userName = "userName";
        public const string password = "password";
        public const int rememberPassword = 0;
    }

    public static class LocalUrl {
        public static string avatarUrl = "Avatar/";
    }

    public enum SceneID {
        Login = 0,
        Index = 1,
        Loading = 2,
        Game = 3
    }


    public static class Util {
        public delegate void NoneParamFunction();

        public static float btnASTime = 0.25f;

        public static string GetServerBaseUrl(ServerType serverType) {
            switch (serverType) {
                case ServerType.Local:
                    return "http://localhost:8080/CrazyCarServer/";
                case ServerType.Remote:
                    return "http://139.9.103.145/CrazyCarServer/";
                default:
                    return "http://localhost:8080/CrazyCarServer/";
            }
        }

        public static string GetContentFromHexString(string hex) {
            byte[] buf1 = new byte[hex.Length / 2];
            for (int i = 0; i < hex.Length; i += 2) {
                // 将 16进制字符串 中的每两个字符转换成 byte，并加入到新申请的 byte数组 中
                buf1[i / 2] = Convert.ToByte(hex.Substring(i, 2), 16);
            }
            return Encoding.UTF8.GetString(buf1);
        }

        public static DateTime GetUTCDateTime(long timeStamp) {
            DateTime dateTimeStart = new DateTime(1970, 1, 1);
            DateTime time = dateTimeStart.AddSeconds(timeStamp);
            return time;
        }

        public static Coroutine DelayExecute(NoneParamFunction f, Func<bool> pre) {
            return GameController.manager.StartCoroutine(DelayExecuting(f, pre));
        }

        private static IEnumerator DelayExecuting(NoneParamFunction f, Func<bool> pre) {
            // at least wait for two frame
            yield return null;
            yield return null;
            yield return new WaitUntil(pre);
            f();
        }

        public static void DelayExecuteWithSecond(float sec, NoneParamFunction func) {
            GameController.manager.StartCoroutine(DelayExecutingWithSecond(sec, func));
        }

        private static IEnumerator DelayExecutingWithSecond(float sec, NoneParamFunction func) {
            yield return new WaitForSeconds(sec);
            func?.Invoke();
        }

        public static void DeleteChildren(Transform t, int startIndex = 0) {
            var children = new List<Transform>();
            for (var i = startIndex; i < t.childCount; i++) {
                children.Add(t.GetChild(i));
            }

            foreach (var child in children) {
                child.SetParent(null);
                UnityEngine.Object.Destroy(child.gameObject);
            }
        }

        public static string SecondToStirngWithFormat(double sec, string format) {
            format = format.ToLower();
            List<string> availableList = new List<string> { "h:m:s:c", "m:s:c", "h:m:s", "m:s", "h:m:s.c", "s" };
            if (!availableList.Contains(format)) {
                return "Time with Error Format, Add To Config First";
            }

            if (sec < 0) {
                sec = 0;
            }

            TimeSpan ts = new TimeSpan((long)(sec * 10000000));
            int num_left3 = (int)(1000 * sec);
            int num_int = (int)(sec);
            int num = num_left3 - num_int * 1000;
            string str = "";
            switch (format) {
                case "h:m:s.c":
                    str = ts.Hours.ToString("00") + ":" + ts.Minutes.ToString("00") + ":" + ts.Seconds.ToString("00") +
                          "." + ((num) / 10).ToString("00");
                    break;
                case "h:m:s:c":
                    str = ts.Hours.ToString("00") + ":" + ts.Minutes.ToString("00") + ":" + ts.Seconds.ToString("00") +
                          ":" + ((num) / 10).ToString("00");
                    break;
                case "m:s:c":
                    str = (ts.Hours * 60 + ts.Minutes).ToString("00") + ":" + ts.Seconds.ToString("00") + "." +
                          ((num) / 10).ToString("00");
                    break;
                case "h:m:s":
                    str = ts.Hours.ToString("00") + ":" + ts.Minutes.ToString("00") + ":" + ts.Seconds.ToString("00");
                    break;
                case "m:s":
                    str = (ts.Hours * 60 + ts.Minutes).ToString("00") + ":" + ts.Seconds.ToString("00");
                    break;
                case "s":
                    str = ts.Seconds.ToString("00");
                    break;
            }

            return str;
        }

        public static Dictionary<string, Sprite> cachedImageDic = new Dictionary<string, Sprite>();

        public static IEnumerator DownloadImage(string url, Image img, NoneParamFunction func = null) {
            if (!url.StartsWith("http")) {
                yield break;
            }

            if (cachedImageDic.ContainsKey(url)) {
                if (img != null) {
                    img.sprite = cachedImageDic[url];
                }
                func?.Invoke();
                yield break;
            }

            UnityWebRequest request = UnityWebRequest.Get(url);
            request.SetRequestHeader("Version", Application.version);
            yield return request.SendWebRequest();
            if (request.isNetworkError) {
            } else if (request.isDone) {
                try {
                    byte[] bytes = request.downloadHandler.data;
                    Texture2D texture = new Texture2D(1, 1, TextureFormat.RGBA32, false);
                    texture.LoadImage(bytes);
                    texture.wrapMode = TextureWrapMode.Clamp;
                    cachedImageDic[url] = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height),
                        new Vector2(0.5f, 0.5f));
                    if (img != null)
                        img.sprite = cachedImageDic[url];
                    if (func != null)
                        func();
                } catch (Exception e) {
                    Debug.Log(e);
                }
            }
        }

        public static IEnumerator DownloadImageToLocal(string url, string path, Image image, NoneParamFunction func = null) {
            if (!url.StartsWith("http")) {
                yield break;
            }

            if (cachedImageDic.ContainsKey(url)) {
                if (image != null) {
                    image.sprite = cachedImageDic[url];
                }
                func?.Invoke();
                yield break;
            }

            UnityWebRequest request = UnityWebRequest.Get(url);
            request.SetRequestHeader("Version", Application.version);
            yield return request.SendWebRequest();
            if (request.isNetworkError) {
                //Debug.LogError("+++++++ActivityUI 下载失败" + aid);
            } else if (request.isDone) {
                try {
                    byte[] bytes = request.downloadHandler.data;
                    // 转Texture2D会被压缩
                    File.WriteAllBytes(path, bytes);
                    Texture2D texture = new Texture2D(1, 1, TextureFormat.RGBA32, true);
                    texture.LoadImage(bytes);
                    var pngData = texture.EncodeToPNG();
                    cachedImageDic[url] = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height),
                            new Vector2(0.5f, 0.5f));
                    if (image != null) {
                        image.sprite = cachedImageDic[url];
                    }

                } catch (Exception e) {
                    Debug.Log(e);
                }
            }
        }

        public static IEnumerator LoadImageFormLocal(string path, Image image, NoneParamFunction finishCallback = null) {
            if (cachedImageDic.ContainsKey(path)) {
                if (image != null) {
                    image.sprite = cachedImageDic[path];
                }
                finishCallback?.Invoke();
                yield break;
            }

#if UNITY_EDITOR || UNITY_STANDALONE
            string filePath = "file:///" + path;
#elif UNITY_ANDROID
            string filePath = "file:///" + path;
#elif UNITY_IOS
            string filePath = "file://" + path;
#endif
            UnityWebRequest uWR = new UnityWebRequest(filePath);
            DownloadHandlerTexture dHT = new DownloadHandlerTexture(true);
            uWR.downloadHandler = dHT;
            yield return uWR.SendWebRequest();
            if (uWR.isNetworkError || uWR.isHttpError) {
                yield break;
            }
            Texture2D tex2d = dHT.texture;
            byte[] pngData = tex2d.EncodeToPNG();
            cachedImageDic[path] = Sprite.Create(tex2d, new Rect(0, 0, tex2d.width, tex2d.height),
                new Vector2(0.5f, 0.5f));
            if (image != null) {
                image.sprite = cachedImageDic[path];
            }
            finishCallback?.Invoke();
        }

        public static string Md5SumOfFile(string filepath) {
            try {
                byte[] hashBytes;
                using (var md5 = System.Security.Cryptography.MD5.Create()) {
                    using (var stream = File.OpenRead(filepath)) {
                        hashBytes = md5.ComputeHash(stream);
                    }
                }

                // Convert the encrypted bytes back to a string (base 16)
                string hashString = "";

                for (int i = 0; i < hashBytes.Length; i++) {
                    hashString += System.Convert.ToString(hashBytes[i], 16).PadLeft(2, '0');
                }

                return hashString.PadLeft(32, '0');
            } catch (Exception e) {
                Debug.LogError(e);
                return "";
            }
        }

#if UNITY_IOS || UNITY_ANDROID
        public static string GetFileMD5(string filepath)
        {
            FileStream fs = new FileStream(filepath, FileMode.Open, FileAccess.Read, FileShare.Read);
            int bufferSize = 1048576;
            byte[] buff = new byte[bufferSize];
            MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider();
            md5.Initialize();
            long offset = 0;
            while (offset < fs.Length)
            {
                long readSize = bufferSize;
                if (offset + readSize > fs.Length)
                    readSize = fs.Length - offset;
                fs.Read(buff, 0, Convert.ToInt32(readSize));
                if (offset + readSize < fs.Length)
                    md5.TransformBlock(buff, 0, Convert.ToInt32(readSize), buff, 0);
                else
                    md5.TransformFinalBlock(buff, 0, Convert.ToInt32(readSize));
                offset += bufferSize;
            }

            if (offset >= fs.Length)
            {
                fs.Close();
                byte[] result = md5.Hash;
                md5.Clear();
                StringBuilder sb = new StringBuilder(32);
                for (int i = 0; i < result.Length; i++)
                    sb.Append(result[i].ToString("X2"));
                return sb.ToString();
            }
            else
            {
                fs.Close();
                return null;
            }
        }
#endif
        public static IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> fatchData = null, Action<int> code = null) {
            UnityWebRequest request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST);
            if (data != null) {
                request.uploadHandler = new UploadHandlerRaw(data);
            }
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Accept", "application/json");
            if (!string.IsNullOrEmpty(token)) {
                Debug.Log("+++ token " + token);
                request.SetRequestHeader("Authorization", token);
            }

            yield return request.SendWebRequest();

            if (request.isNetworkError || request.isHttpError) {
                Debug.LogError("Is Network Error");
            } else {
                byte[] results = request.downloadHandler.data;
                string s = Encoding.UTF8.GetString(results);
                Debug.Log(s);
                JsonData d = JsonMapper.ToObject(s);

                code?.Invoke((int)d["code"]);
                if ((int)d["code"] == 200) {
                    fatchData?.Invoke(d["data"]);
                }
            }
        }

        private static DateTime JanFirst1970 = new DateTime(1970, 1, 1);
        public static long GetTime() {
            // 毫秒级
            return (long)((DateTime.Now.ToUniversalTime() - JanFirst1970).TotalMilliseconds + 0.5);
        }

        private static SceneID loadingTargetSceneID;
        public static SceneID LoadingTargetSceneID {
            get {
                return loadingTargetSceneID;
            }
        }
        public static void LoadingScene(SceneID sceneID) {
            loadingTargetSceneID = sceneID;
            SceneManager.LoadScene((int)SceneID.Loading);
        }
    }

}