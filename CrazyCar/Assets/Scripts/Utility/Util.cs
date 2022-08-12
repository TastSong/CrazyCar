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
using DG.Tweening;

namespace Utils {
    public static class GameObjectExtension {
        public static void SetActiveFast(this GameObject o, bool s) {
            if (o.activeSelf != s) {
                o.SetActive(s);
            }
        }
    }

    public enum SceneID {
        Login = 0,
        Index = 1,
        Loading = 2,
        Game = 3
    }

    public static class TagName {
        public const string endSign = "EndSign";
        public const string waterWave = "WaterWave";
        public const string player = "Player";
    }

    public static class Util {
        public static string baseLanguagePath = "Language/Locales/";
        public static string baseFlagPath = "Language/Flag/";

        public static string baseStandAlone = "StandAlone/";
        public static string standAloneLogin = "Login";
        public static string standAloneTimeTrialDetail = "TimeTrialDetail";
        public static string standAloneAI = "AI";

        private static int port = 8081;

        public static string GetServerBaseUrl(ServerType serverType) {
            string host = GetServerHost(serverType);
            return "http://" + host + ":" + port + "/CrazyCarSpringBootServer/";
        }

        public static string GetServerHost(ServerType serverType) {
            switch (serverType) {
                case ServerType.Local:
                    return "127.0.0.1";
                case ServerType.Remote:
                    return "139.9.103.145";
                case ServerType.TestServer:
                    return "43.142.171.220";
                default:
                    return "127.0.0.1";
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

        public static Coroutine DelayExecute(Action f, Func<bool> pre) {
            return CoroutineController.manager.StartCoroutine(DelayExecuting(f, pre));
        }

        private static IEnumerator DelayExecuting(Action f, Func<bool> pre) {
            // at least wait for two frame
            yield return null;
            yield return null;
            yield return new WaitUntil(pre);
            f();
        }

        public static void DelayExecuteWithSecond(float sec, Action func) {
            CoroutineController.manager.StartCoroutine(DelayExecutingWithSecond(sec, func));
        }

        private static IEnumerator DelayExecutingWithSecond(float sec, Action func) {
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

        public static string GetDateTime(long timeStamp, string format){
            DateTime dtStart = TimeZoneInfo.ConvertTimeToUtc(new DateTime(1970, 1, 1));
            long lTime = (timeStamp * 10000000);
            TimeSpan toNow = new TimeSpan(lTime);
            DateTime targetDt = dtStart.Add(toNow);
            return targetDt.ToString(format);
        }

        public static Dictionary<string, Sprite> cachedImageDic = new Dictionary<string, Sprite>();

        public static IEnumerator DownloadImage(string url, Image img, Action func = null) {
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
            if (request.result == UnityWebRequest.Result.ConnectionError) {
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

        public static IEnumerator DownloadImageToLocal(string url, string path, Image image, Action func = null) {
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
            if (request.result == UnityWebRequest.Result.ConnectionError) {
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

        public static IEnumerator LoadImageFormLocal(string path, Image image, Action finishCallback = null) {
            if (cachedImageDic.ContainsKey(path)) {
                if (image != null) {
                    image.sprite = cachedImageDic[path];
                }
                finishCallback?.Invoke();
                yield break;
            }

#if UNITY_EDITOR || UNITY_STANDALONE || UNITY_WEBGL
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
            if (uWR.result == UnityWebRequest.Result.ConnectionError || uWR.result == UnityWebRequest.Result.ProtocolError) {
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

        private static DateTime JanFirst1970 = new DateTime(1970, 1, 1);
        public static long GetTime() {
            // 毫秒级
            return (long)((DateTime.Now.ToUniversalTime() - JanFirst1970).TotalMilliseconds + 0.5);
        }

        public static string GetPlatform() {
#if UNITY_STANDALONE
            return "PC";
#elif UNITY_ANDROID
            return "Android";
#elif UNITY_IOS
            return "ios";
#elif UNITY_WEBGL
            return "WebGL";
#endif
        }

        public static List<string> GetFileDirectory(string path) {
            List<string> list = new List<string>();
            DirectoryInfo root = new DirectoryInfo(path);
            FileInfo[] files = root.GetFiles();
            for (int i = 0; i < files.Length; i++) {
                list.Add(files[i].Name);
            }

            return list;
        }

        // 颜色缓存到本地
        private static Dictionary<string, Color> colorDict = new Dictionary<string, Color>();

        private static Dictionary<int, Dictionary<string, Color>> alphaColorDict =
            new Dictionary<int, Dictionary<string, Color>>();
        public static Color GetColorFromString(string s) {
            if (colorDict.ContainsKey(s)) {
                return colorDict[s];
            }

            // string must be #xxxxxxxx
            int R = int.Parse(s.Substring(1, 2),
                System.Globalization.NumberStyles.HexNumber);
            int G = int.Parse(s.Substring(3, 2),
                System.Globalization.NumberStyles.HexNumber);
            int B = int.Parse(s.Substring(5, 2),
                System.Globalization.NumberStyles.HexNumber);
            try {
                int A = int.Parse(s.Substring(7, 2),
                    System.Globalization.NumberStyles.HexNumber);
                colorDict[s] = new Color(R / 255f, G / 255f, B / 255f, A / 255f);
                return colorDict[s];
            } catch {
                colorDict[s] = new Color(R / 255f, G / 255f, B / 255f, 1f);
                return colorDict[s];
            }
        }

        // alpha * 100 --- key1   colorStr --- key2
        public static Color GetColorFromString(string s, float a) {
            int alphaKey = (int)(a * 100);
            if (alphaColorDict.ContainsKey(alphaKey)) {
                if (alphaColorDict[alphaKey].ContainsKey(s)) {
                    return alphaColorDict[alphaKey][s];
                }
            } else {
                alphaColorDict[alphaKey] = new Dictionary<string, Color>();
            }

            int R = int.Parse(s.Substring(1, 2),
                System.Globalization.NumberStyles.HexNumber);
            int G = int.Parse(s.Substring(3, 2),
                System.Globalization.NumberStyles.HexNumber);
            int B = int.Parse(s.Substring(5, 2),
                System.Globalization.NumberStyles.HexNumber);
            Color col = new Color(R / 255f, G / 255f, B / 255f, a);
            alphaColorDict[alphaKey][s] = col;
            return col;
        }

        public static IEnumerator CountdownCor(int time, Action succ = null, Text targetText = null, string str = null) {
            while (true) {
                if (targetText != null) {
                    if (str != null) {
                        targetText.text = string.Format(str, time);
                    } else {
                        targetText.text = time.ToString();
                    }

                    if (time <= 3) {
                        targetText.color = GetColorFromString("#EC2E37");
                        Sequence sequence = DOTween.Sequence();
                        for (int i = 0; i < time; i++) {
                            sequence.Append(targetText.transform.DOScale(1.4f, 0.4f));
                            sequence.Append(targetText.transform.DOScale(1f, 0.4f));
                        }
                    } else {
                        targetText.color = GetColorFromString("#0F6DDE");
                    }
                }

                yield return new WaitForSecondsRealtime(1.0f);
                time--;
                if (time < 0) {
                    succ?.Invoke();
                    yield break;
                }
            }
        }

        public static float GetAngle(Vector3 a, Vector3 b) {
            Vector3 c = Vector3.Cross(a, b);
            float angle = Vector3.Angle(a, b);
            // b 到 a 的夹角
            float sign = Mathf.Sign(Vector3.Dot(c.normalized, Vector3.Cross(a.normalized, b.normalized)));
            float signed_angle = angle * sign;
            return signed_angle;
        }

        public static Vector3 pathRotateOffset = new Vector3(0, 0, 90);

        public static Vector2 WorldToCanvasPos(Canvas canvas, Vector3 world) {
            Vector2 position;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas.transform as RectTransform, world,
                canvas.GetComponent<Camera>(), out position);
            return position;
        }

        public static IEnumerator GetPlace(Action<string> finishAction) {
            using (UnityWebRequest request = new UnityWebRequest("http://ip-api.com/json/?lang=zh-CN", UnityWebRequest.kHttpVerbPOST)) {
                request.downloadHandler = new DownloadHandlerBuffer();
                request.SetRequestHeader("Content-Type", "application/json");
                request.SetRequestHeader("Accept", "application/json");
                yield return request.SendWebRequest();

                if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError) {
                    finishAction.Invoke("Unknown");
                } else {
                    byte[] results = request.downloadHandler.data;
                    string s = Encoding.UTF8.GetString(results);
                    JsonData d = JsonMapper.ToObject(s);
                    string regionName;
                    try {
                        regionName = (string)d["regionName"];
                    } catch {
                        regionName = "";
                    }
                    string city;
                    try {
                        city = (string)d["city"];
                    } catch {
                        city = "";
                    }
                    finishAction.Invoke(regionName + "," + city);
                }
            }
        }

        public static string GetMd5(string strToEncrypt) {
            UTF8Encoding ue = new UTF8Encoding();
            byte[] bytes = ue.GetBytes(strToEncrypt);

            // encrypt bytes
            MD5CryptoServiceProvider md5 =  new MD5CryptoServiceProvider();
            byte[] hashBytes = md5.ComputeHash(bytes);

            // Convert the encrypted bytes back to a string (base 16)
            string hashString = "";

            for (int i = 0; i < hashBytes.Length; i++) {
                hashString += Convert.ToString(hashBytes[i], 16).PadLeft(2, '0');
            }

            return hashString.PadLeft(32, '0');
        }
    }
}